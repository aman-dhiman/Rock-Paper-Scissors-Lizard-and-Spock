#include <stdio.h>
#include <time.h>
int main()
{
    printf("\nThis program allows you to play Rock, Paper, Scissors, Lizard,"
    " Spock\n\n");
    
    int nGames, x, won = 0, lost = 0, ties = 0;
    printf("How many games do you want to play? ");
    scanf("%d", &nGames);
    
    for (x=1; x<=nGames; x++)
    {
        int i = 0;
        printf("\nGame number %d \n1=Rock, 2=Paper, 3=Scissors, " 
        "4=Lizard, 5=Spock \nWhat's your choice? ", x);
        scanf("%d", &i);
        
        while (i>5)
        {
            printf("\nThe number you entered is out of range\nPlease enter"
            " a number between 1 and 5: ");
            scanf("%d", &i);
            
        }
        
        switch(i)
        {
            case 1:
                printf("Your choice is Rock\n");
                break;
            case 2:
                printf("Your choice is Paper\n");
                break;
            case 3:
                printf("Your choice is Scissors\n");
                break;
            case 4:
                printf("Your choice is Lizard\n");
                break;
            case 5:
                printf("Your choice is Spock\n");
                break;
        }
        
        int random;
        srand(time(NULL));
        random = (rand() % 5) + 1;
        
        switch(random)
        {
            case 1:
                printf("My choice was Rock\n");
                break;
            case 2:
                printf("My choice was Paper\n");
                break;
            case 3:
                printf("My choice was Scissors\n");
                break;
            case 4:
                printf("My choice was Lizard\n");
                break;
            case 5:
                printf("My choice was Spock\n");
                break;
        }
        
        if(i==random)
        {
            printf("It is a tie\n");
            ties++;
        }
        
        else if(((i==1)&&(random==2||random==5))||
                ((i==2)&&(random==3||random==4))||
                ((i==3)&&(random==1||random==5))||
                ((i==4)&&(random==1||random==3))||
                ((i==5)&&(random==2||random==4)))
        {
            printf("You lose!\n");
            lost++;
        }
       
        else
        {
            printf("You win!\n");
            won++;
        }
    }
    
    printf("\nHere is your final score\nOut of the total of %d game(s) "
    "played,\nI have won %d game(s),\nYou have won %d game(s),\nand %d game(s) "
    "ended in a tie.\nThanks for playing\n\n", x-1, lost, won, ties);
    
    return(0);
}