import pygame
import random

# define the constants for the game
WIDTH = 640
HEIGHT = 480
BLOCK_SIZE = 20
FPS = 10

# define the colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# initialize Pygame
pygame.init()

# create the window and set the title
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Snake")

# create the clock
clock = pygame.time.Clock()

# define the snake class
class Snake:
  def __init__(self):
    self.x = WIDTH // 2
    self.y = HEIGHT // 2
    self.speed = BLOCK_SIZE
    self.direction = "right"
    self.body = [(self.x, self.y)]

  def update(self):
    # update the position of the snake
    if self.direction == "right":
      self.x += self.speed
    elif self.direction == "left":
      self.x -= self.speed
    elif self.direction == "up":
      self.y -= self.speed
    elif self.direction == "down":
      self.y += self.speed

    # add the new position to the body
    self.body.append((self.x, self.y))

    # remove the tail of the snake if it's longer than the maximum length
    if len(self.body) > MAX_LENGTH:
      self.body.pop(0)

  def draw(self):
    # draw the snake on the screen
    for x, y in self.body:
      pygame.draw.rect(screen, WHITE, (x, y, BLOCK_SIZE, BLOCK_SIZE))

# define the food class
class Food:
  def __init__(self):
    self.x = random.randint(0, WIDTH - BLOCK_SIZE)
    self.y = random.randint(0, HEIGHT - BLOCK_SIZE)
# create the snake and food
snake = Snake()
food = Food()
MAX_LENGTH = 5

# run the game loop
running = True
while running:
  # handle events
  for event in pygame.event.get():
    if event.type == pygame.QUIT:
      running = False
    elif event.type == pygame.KEYDOWN:
      # change the direction of the snake based on the key pressed
      if event.key == pygame.K_UP:
        snake.direction = "up"
      elif event.key == pygame.K_DOWN:
        snake.direction = "down"
      elif event.key == pygame.K_LEFT:
        snake.direction = "left"
      elif event.key == pygame.K_RIGHT:
        snake.direction = "right"

  # update the snake and food
  snake.update()
  if snake.x == food.x and snake.y == food.y:
    # the snake has eaten the food, so increase its length
    MAX_LENGTH += 1
    food = Food()

  # draw the screen
  screen.fill(BLACK)
  snake.draw()
  pygame.draw.rect(screen, WHITE, (food.x, food.y, BLOCK_SIZE, BLOCK_SIZE))
  pygame.display.flip()

  # limit the frame rate
  clock.tick(FPS)

# quit Pygame
pygame.quit()
