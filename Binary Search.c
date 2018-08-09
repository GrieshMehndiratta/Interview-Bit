int searchMatrix(int** A, int n11, int n12, int B) {
    int i=0,l=0,r=n12-1;
    while(i<n11)
    {
        if(A[i][n12-1]<B)
        {
            i++;
        }
        else
        {
            int j=i;
            i=n11;
            while(l<=r)
            {
            int mid=(l+r)/2;
            if(A[j][mid]==B)
                return 1;
            else if(A[j][mid]>B)
                r=mid-1;
                else
                l=mid+1;
            }
        }
    }
    return 0;
}