#include<stdio.h>
 
int main()
{
  int matrix1[10][10], matrix2[10][10], matrix3[10][10];
  int i,j,row,col;
  
  printf("How many rows and columns?\n");
  scanf("%d%d",&row,&col);
  
  printf("\nEnter the first matrix:\n");
  for(i=0; i < row; i++)
    for(j = 0; j < col; j++)
      scanf("%d",&matrix1[i][j]);
      
  printf("\nEnter the second matrix:\n");
  for(i = 0; i < row; i++)
    for(j = 0; j < col; j++)
      scanf("%d",&matrix2[i][j]);
  
  printf("\nMatrix after addition:\n");
  for(i = 0; i < row; i++)
  {
    for(j=0; j < col; j++)
    {
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
      printf("%d ",matrix3[i][j]);
    }
    printf("\n");
  }
 
  return 0;
}