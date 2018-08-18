#include<stdio.h>
void merge(int arr[],int start,int mid,int end)
{
        int aux[end];
        int i=start;
        int j=mid+1;
        for(int k=start;k<=end;k++)
        {
                if(i>mid) aux[k]=arr[j++];
                else if(j>end) aux[k]=arr[i++];
                else if(arr[i]>arr[j]) aux[k]=arr[j++];
                else aux[k]=arr[i++];
        }
        for(int k=start;k<=end;k++)
            arr[k]=aux[k];
}
void merge_sort(int arr[],int start ,int end)
{
    if(end<=start)
    {}//return 0;
    else
    {
        int mid=start+(end-start)/2;
        merge_sort(arr,start, mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid,end);

    }
}
void main()
{
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++)
            scanf("%d",&arr[i]);
        merge_sort(arr,0,size-1);
        for(int i=0;i<size;i++)
                printf("%d ",arr[i]);

}
