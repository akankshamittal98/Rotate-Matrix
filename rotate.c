
void rotate(int** A, int n11, int n12) {
    int i,j,k,t;
    for (i=0; i<n11/2; i++)
    for(j=i;j<n11-1-i;j++)
    {
        t=A[i][j];
        A[i][j]=A[n11-1-j][i];
        A[n11-1-j][i]=A[n11-1-i][n11-1-j];
        A[n11-1-i][n11-1-j]=A[j][n11-1-i];
        A[j][n11-i-1]=t;
    }
}
