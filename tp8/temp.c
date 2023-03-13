 for (int i = 0; i < n; i++)
    {
        m = 0;
        for (int j = 0; j < strlen(strclear[i]); j++)
        {
            if (pass % 2 == 0)
            {

                strclear[i][m] += k;

                if ((strclear[i][m] > 122) || ((strclear[i][m] > 90) && (strclear[i][m] < 97)))
                {
                    strclear[i][m] -= 25;
                }
                m++;
            }
            else
            {
                // printf("test\n");
                strclear[i][m] -= k;
                if (((strclear[i][m] < 97) && (strclear[i][m] > 95)) || strclear[i][m] < 65)
                {
                    strclear[i][m] += 25;
                }
                m++;
            }
        }
    }