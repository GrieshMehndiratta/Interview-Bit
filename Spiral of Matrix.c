#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int rows,cols,k=0;
  	scanf("%d%d",&rows,&cols);
  	int arr[rows][cols];
  	int a[rows*cols];
  	for(int i=0;i<rows;i++)
      for(int j=0;j<cols;j++)
      	scanf("%d",&arr[i][j]);
  int l=0,t=0,b=rows,r=cols,i;
   while(t<=b&&l<=r)
    {
            for(i=l;i<r;i++)
                a[k++]=arr[t][i];
            t++;
            for(i=t;i<b;i++)
                a[k++]=arr[i][r-1];
            r--;
            for(i=r-1;i>=l;i--)
                a[k++]=arr[b-1][i];
            b--;
            for(i=b-1;i>=t;i--)
                a[k++]=arr[i][l];
            l++;
    }
  for(int i=0;i<rows*cols;i++)
  {
	printf("%d\n",a[i]);
  }
    return 0;
}
