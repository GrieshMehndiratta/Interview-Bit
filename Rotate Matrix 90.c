#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int i,j,temp,testcase,size;
  scanf("%d",&testcase);
  while(testcase--)
  {
    scanf("%d",&size);
    int A[size][size];
    for(i=0;i<size;i++)
      for(j=0;j<size;j++)
        scanf("%d",&A[i][j]);
    for(i=0;i<size/2;i++)
    {
        for(j=i;j<size-i-1;j++)
        {
            temp=A[i][j];
            A[i][j]=A[size-1-j][i];
            A[size-1-j][i]=A[size-1-i][size-1-j];
            A[size-1-i][size-1-j]=A[j][size-1-i];
            A[j][size-1-i]=temp;
        }
    }
    for(i=0;i<size;i++)
    {for(j=0;j<size;j++)
    {
      printf("%d",A[i][j]);
    }
     printf("\n");
    }
    printf("\n");

  }
  return 0;
}
