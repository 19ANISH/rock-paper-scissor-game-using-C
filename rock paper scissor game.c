#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int main()
{
    int i,playerScore=0,compScore=0,temp;
    char playerChar,compChar;
    printf("===Welcome===\n");
    for(i=0;i<3;i++)
    {
        printf("Player's Turn: \n");
        printf("Choose\n 1. Rock\n 2. Paper\n 3. Scissors\n");
        scanf("%d",&playerChar);

        printf("Comp's Turn: \n");
        //printf("Choose\n 1. Rock\n 2. Paper\n 3. Scissors\n");
        compChar=random(3)+1;

        if(playerChar==1 && compChar==1)
        {
            printf("DRAW!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
        }
        else if (playerChar==1 && compChar==2)
        {
            compScore +=1;
            printf("COMP WIN!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==1 && compChar==3)
        {
            playerScore +=1;
            printf("Player WIN!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==2 && compChar==1)
        {
            playerScore +=1;
            printf("Player WIN!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==2 && compChar==2)
        {
            //compScore +=1;
            printf("DRAW!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==2 && compChar==3)
        {
            compScore +=1;
            printf("COMP WIN!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==3 && compChar==1)
        {
            compScore +=1;
            printf("COMP WIN!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==3 && compChar==2)
        {
            playerScore +=1;
            printf("Player WIN!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }
        else if (playerChar==3 && compChar==3)
        {
            //compScore +=1;
            printf("DRAW!\n");
            printf("You chose %d\nComp chose %d\n",playerChar,compChar);
            printf("Player Score = %d\n Comp Score = %d\n",playerScore,compScore);
        }

    }
    if(playerScore>compScore)
        {
                printf("===YOU WIN!===\n===Your Score is %d===",playerScore);
        }
        else if(playerScore<compScore)
        {
                printf("===COMP WIN!===\n===COMP Score is %d===",compScore);
        }
        else if(playerScore==compScore)
        {
                printf("===DRAW!===\n===Your and COMP Score is %d===",playerScore);
        }

}
