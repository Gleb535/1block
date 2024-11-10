#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = 0;
    int r = 0;
    int user = 0;
    int bot = 0;
    srand(time(0));

    printf("Правила: ");
    printf("\nКамень = 1 ");
    printf("\nНожницы = 2 ");
    printf("\nБумага = 3");

    while ((user != 3) || (bot != 3))
    {
        printf("\nЧел, введи число: ");
        scanf("%d", &a);
        if (a > 3)
        {
            printf("\nТы че ?\nДаже компьютер умнее тебя\n");
            break;
        }
    }
    while (1)
    {
        r = rand() % 3 + 1;
        printf("\nРандом выбрал:");
        printf("%d\n", r);
        break;

        if (((a == 1) && (r == 1)) || ((a == 2) && (r == 2)) || ((a == 3) && (r == 3)))
        {
            printf("DRAW");
        }

        if (((a == 1) && (r == 2)) || ((a == 2) && (r == 3)) || ((a == 3) && (r == 1)))
        {
            printf("WIN");
            user += 1;
        }

        if (((a == 1) && (r == 3)) || ((a == 2) && (r == 1)) || ((a == 3) && (r == 2)))
        {
            printf("LOOSE");
            bot += 1;
        }

        if (bot == 3)
        {
            printf("\nBOT TOTAL WINNER");
            break;
        }
        if (user == 3)
        {
            printf("\nYOU TOTAL WINNER");
            break;
        }
    }

    return 0;
}