#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,A[100],found;
    for(i=0; i<100; i++)
        A[i]=rand();
    bubbleSort(A,100);
    for(i=0;i<100;i++)
        printf("%d\n",A[i]);
    system("pause");
    return 0;
}
