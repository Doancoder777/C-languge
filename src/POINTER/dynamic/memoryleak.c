#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100; // Assuming an initial cash value of 100

void Play(int bet){
     char C[1000000];
    // char *C = (char*)malloc(1000000000*sizeof(char));
    C[0]= 'J';
    C[1]= 'Q';
    C[2]= 'K';
    printf("Shuffling ...\n");
    srand(time(NULL)); // Seeding random number generator
    int i;
    for(i = 0; i < 5; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; // Swaps characters at position x and y
    }
    int playersGuess;
    printf("What's the position of queen - 1, 2 or 3? ");
    scanf("%d", &playersGuess);
    if(C[playersGuess - 1] == 'Q')
        printf("You win!\n");
    else
        printf("You lose!\n");
    
}

int main(){
    int bet;
    printf("**Welcome to the Virtual Casino**\n\n");
    printf("Total cash = $%d\n", cash);
    while(cash > 0){
        printf("What's your bet? $");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash) break;
        Play(bet);
        printf("\n******************************\n");
    }
    system("pause");
    return 0;
}
