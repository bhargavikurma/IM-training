#include<stdio.h>
int main(){
   int i, j, mat[3][3], trans[3][3];
   printf("Enter matrix: \n");
   // input matrix
   for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++){
         scanf("%d", &mat[i][j]);
      }
   }
   // create transpose
   for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++){
         trans[j][i] = mat[i][j];
      }
   }
   printf("\nTranspose matrix: \n");
   // print transpose
   for(i = 0; i < 3; i++){
      for(j = 0; j < 3; j++){
         printf("%d ", trans[i][j]);
      }
      printf("\n");
   }
   return 0;
}
