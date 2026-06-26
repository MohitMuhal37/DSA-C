#include<stdio.h>

void gfg(int x)
{
    printf("%d ", x);
    if(x <= 2)
    {
        gfg(x+1);
    }
    printf("%d ",x);
}

int main()
{
    int length = 6;
    int j, i;
    int A[6] = {10,20,30,40,50,60};
    int B[6] = {1,2,3,4,5,6};
     for( i = length-1 , j = 0 ; i >=0 ; i-- , j++ )
	 	 {
	 	 	 B[ j ] = A[ i ];
             printf("%d ",B[j]);
	 	 }
         printf("\n");
	 	 for( i = 0 ; i < length ; i++ )
	 	 {
	 	 	 A[ i ] = B[ i ];
            //  printf("%d ",A[i]);
         }
}
