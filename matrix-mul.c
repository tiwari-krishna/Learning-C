#include <stdio.h>
int main() {
 int i,j,k,mat1[2][2],mat2[2][2],sum[2][2];
 printf("Enter the first matrix");
 for (i=0;i<2;i++) {
  for (j=0;j<2;j++) {
   printf("Enter the elements: ");
   scanf("%d",&mat1[i][j]);
  }
 }
 printf("Enter the 2nd Matrix: ");

 for (i=0;i<2;i++) {
  for (j=0;j<2;j++) {
   printf("Enter the elements: ");
   scanf("%d",&mat2[i][j]);
  }
 }

 for (i=0;i<2;i++) {
  for (j=0;j<2;j++) {
   sum[i][j]=0;
   for (k=0;k<2;k++) {
    sum[i][j]=sum[i][j]+mat1[i][k]*mat2[k][i];
   }
  printf("%d\t",sum[i][j]);
  }
  printf("\n");
 }
 return 0;
}
