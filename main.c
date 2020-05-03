#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber=rand()%21;

    int inputNumber;
    printf("This is a guessing game\nI have chosen a number between 0 and 20 which you must guess.\n\n");

    for(int a=5;a>=1;--a)
        {
            printf("You have %d tries left.\nEnter a guess : ",a);
            scanf("%d",&inputNumber);

            if(inputNumber>20 || inputNumber<0)
                {
                    printf("Hey, the number should be between 1 to 20\nPlease enter the number again.\n\n");
                    ++a;
                    continue;
                }

            if(inputNumber==randomNumber)
                {
                    printf("Congratulations. You guessed it!");
                    break;
                }
            else if(inputNumber<randomNumber)
                {
                    printf("Sorry, %d is wrong. My number is greater than that.\n\n",inputNumber);
                }
            else
                {
                    printf("Sorry, %d is wrong. My number is less than that.\n\n",inputNumber);
                }
            if(a==1)
                {
                    printf("\nSorry, you lost.\nThe number was %d\n\nBetter Luck Next Time!!\n",randomNumber);
                }
        }

    return 0;
}
