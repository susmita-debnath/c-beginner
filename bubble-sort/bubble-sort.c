///Bubble Sort
/**
    Sort an array

    input:
        5
        8 3 1 6 2
    output:
        1 2 3 6 8
*/

#include <stdio.h>
int main()
{
    int arr[100];
    int i,j,n,temp,k;
    n;
    while(scanf("%d", &n)!=EOF){

            for(i=0; i<n; i++)
                scanf("%d", &arr[i]);

        for(i=0; i<n-1; i++){
            for (j=i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for(k=0; k<n; k++)
            printf("%d ",arr[k]);
            printf("\n");
    }


    return 0;
}
