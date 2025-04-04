#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int random_num=(rand())%100+1;
    int guess;
    int no_of_guess =0;
    do{
        printf("ENter the number");
        scanf("%d",&guess);
        if(guess>random_num){
            printf("give smaller number \n");
        }
        else if(guess<random_num){
            printf("give bigger number \n");
        }
        else{
            printf("you have guessed the right number");
        }
         no_of_guess ++;
    }
        while(guess!=random_num);
        printf("Your score is %d\n",no_of_guess);
    
        
        return 0;
    }
       
        
        
    

    
