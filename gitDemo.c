// gitDemo.c
//    Program to practice using git and gitHub
/* Running the program looks like:
        Bumper Stickers: 
            Honk if you love peace and quiet
        Sayings: 
            Rats live on no evil star
 */
#include <stdio.h>

void showBumperStickers()
{
    printf("\t Honk if you love peace and quiet\n");    
}

void showSayings()
{
     printf("\t Rats live on no evil star\n");   
}


int main(void) 
{
    printf("Bumper Stickers: \n");
    showBumperStickers();
    printf("Sayings: \n");
    showSayings();
    
  return 0;
}
