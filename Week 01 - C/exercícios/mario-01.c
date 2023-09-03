#include <stdio.h>

int askHeight();
void createPyramid();


int main(void){
    // Capture the height of the pyramid and save it in a func. If answer > 8 OR answer < 1: Ask again.
    int pyramidHeight = askHeight();

    // Print the pyramid - arg: how many hashes do you want for height?
    createPyramid(pyramidHeight);
    return 0;
}


void createPyramid(int pyramidHeight){
    for(int hash = 0; hash < pyramidHeight; hash++)
    {

      for(int dot = pyramidHeight-1; dot > hash; dot--)
      {
        printf(" ");
      }

      printf("#");

      // left part
      for(int x = 0; x < hash; x++)
      {
        printf("#");
      }

      // space
      printf("..");
      printf("#");


      // right part
      for(int x = 0; x < hash; x++)
      {
        printf("#");
      }

      printf("\n");

    }


}


int askHeight(void){
    int pyramidHeight;
    do {
      printf("Pyramid height: ");
      scanf("%i", &pyramidHeight);
    } while(pyramidHeight < 1 || pyramidHeight > 8);

    return pyramidHeight;
}