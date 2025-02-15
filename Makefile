CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -fsanitize=address,leak,undefined

all:
	$(CC) $(CFLAGS) Chapter-01/exercise_1_1.c -o exercise_1_1
	$(CC) $(CFLAGS) Chapter-01/exercise_1_2.c -o exercise_1_2
	$(CC) $(CFLAGS) Chapter-01/exercise_1_3.c -o exercise_1_3
	$(CC) $(CFLAGS) Chapter-01/exercise_1_4.c -o exercise_1_4
	$(CC) $(CFLAGS) Chapter-01/exercise_1_5.c -o exercise_1_5
