//matrixx
#include <stdio.h>
int max =5;
void accept(int arr[][max],int row ,int col)
{
    printf("enter the number of elements if matrix %d %d:\n",row,col);
    for(int i=0;i<row;i++)
    {
        for (int j = 0; j< col; j++)
    {
        scanf("%d",&arr[i][j]);
    }    
    }
}
void display( int arr[][max],int row ,int col)
{
    printf("matrix is %d %d:\n",row,col);
    for(int i=0;i<row;i++)
    {
        for (int j = 0; j< col; j++)
    {
        printf("%d ",arr[i][j]);
    }    
    printf("\n");
    }
}
void transpose(int arr[][max],int transposed[][max],int row ,int col)
{
    printf("enter the number of elements if matrix %d %d:\n",row,col);
    for(int i=0;i<row;i++)
    {
        for (int j = 0; j< col; j++)
    {
        transposed[j][i]=arr[i][j];
    }    
    }
}
int main()
{
    int arr[max][max];
    int transposed[max][max];
    int row, col;
    printf("enter number of rows: ");
    scanf("%d",&row);
    printf("enter number of columns: ");
    scanf("%d",&col);
    accept(arr,row,col);
    display(arr,row,col);
    
    printf("transposed matrix is :\n");
    transpose(arr,transposed,row,col);
    return 0;

}