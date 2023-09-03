#include <stdio.h>

int main(void){
    // Capture the height of the pyramid. If answer > 8 OR answer < 1: Ask again.
    int pyramidHeight;
    do {
      printf("Pyramid height: ");
      scanf("%i", &pyramidHeight);
    } while(pyramidHeight < 1 || pyramidHeight > 8);


    // Print the pyramid.
    for(int hash = 0; hash < pyramidHeight; x++)
    {
      printf("#");
        for()
        {

        }
        printf("\n");

    }


    return 0;
}