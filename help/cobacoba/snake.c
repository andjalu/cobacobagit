#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurse.h>

// define the constants for the game
#define WIDTH 20
#define HEIGHT 20

// define the directions for the snake
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

// define the structure for the snake's body segments
struct SnakeSegment
{
    int x;
    int y;
};

// define the structure for the snake
struct Snake
{
    struct SnakeSegment segments[WIDTH * HEIGHT];
    int length;
    int direction;
};

// define the structure for the food
struct Food
{
    int x;
    int y;
};

// initialize the snake and food
void init(struct Snake *snake, struct Food *food)
{
    // set the initial position and direction of the snake
    snake->segments[0].x = WIDTH / 2;
    snake->segments[0].y = HEIGHT / 2;
    snake->length = 5;
    snake->direction = RIGHT;

    // set the initial position of the food
    food->x = rand() % WIDTH;
    food->y = rand() % HEIGHT;
}

// move the snake one step in the current direction
void move(struct Snake *snake)
{
    //
    // update the position of each segment based on the position of the preceding segment
    for (int i = snake->length - 1; i > 0; i--)
    {
        snake->segments[i].x = snake->segments[i - 1].x;
        snake->segments[i].y = snake->segments[i - 1].y;
    }

    // update the position of the head based on the current direction
    if (snake->direction == UP)
    {
        snake->segments[0].y--;
    }
    else if (snake->direction == DOWN)
    {
        snake->segments[0].y++;
    }
    else if (snake->direction == LEFT)
    {
        snake->segments[0].x--;
    }
    else if (snake->direction == RIGHT)
    {
        snake->segments[0].x++;
    }
}

// check if the snake has collided with itself or the walls
int checkCollision(const struct Snake *snake)
{
    // check if the snake has collided with the walls
    if (snake->segments[0].x < 0 || snake->segments[0].x >= WIDTH ||
        snake->segments[0].y < 0 || snake->segments[0].y >= HEIGHT)
    {
        return 1;
    }

    // check if the snake has collided with itself
    for (int i = 1; i < snake->length; i++)
    {
        if (snake->segments[0].x == snake->segments[i].x &&
            snake->segments[0].y == snake->segments[i].y)
        {
            return 1;
        }
    }

    return 0;
}

// check if the snake has eaten the food
int checkFood(const struct Snake *snake, const struct Food *food)
{
    return snake->segments[0].x == food->x && snake->segments[0].y == food->y;
}

int main()
{
    // seed the random number
    // initialize the snake and food
    struct Snake snake;
    struct Food food;
    init(&snake, &food);

    // run the game loop
    int running = 1;
    while (running)
    {
        // get the input
        int ch = getch();
        if (ch == 'w')
        {
            snake.direction = UP;
        }
        else if (ch == 's')
        {
            snake.direction = DOWN;
        }
        else if (ch == 'a')
        {
            snake.direction = LEFT;
        }
        else if (ch == 'd')
        {
            snake.direction = RIGHT;
        }

        // update the snake and food
        move(&snake);
        if (checkFood(&snake, &food))
        {
            // the snake has eaten the food, so increase its length
            snake.length++;
            food.x = rand() % WIDTH;
            food.y = rand() % HEIGHT;
        }

        // check for collision
        if (checkCollision(&snake))
        {
            running = 0;
        }

        // draw the screen
        clear();
        for (int i = 0; i < snake.length; i++)
        {
            mvaddch(snake.segments[i].y, snake.segments[i].x, '#');
        }
        mvaddch(food.y, food.x, '@');
        refresh();

        // pause for a short time
        nanosleep((const struct timespec[]){{0, 500000000L}}, NULL);
    }

    // end the program
    endwin();
    return 0;
}
