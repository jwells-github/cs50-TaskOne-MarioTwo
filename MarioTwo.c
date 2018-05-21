#include <stdio.h>

int main(void) {
  int height;
  printf("Enter the height of the pyramid");
  scanf("%d", &height);

  for(int i = 1; i <= height; i++){
    
    for(int j = 0; j < height; j++){
      if(j < height - i){
        printf(" ");
      }
      else{
        printf("#");
      }
   }
  printf(" ");
    for(int j = height; j > 0; j--){
      if(j > height - i){
        printf("#");
      }
      else{
        printf(" ");
      }
    }
  printf("\n");
  }
  return 0;
}