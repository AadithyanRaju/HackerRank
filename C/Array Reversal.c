#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,c;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int d=num;
    for(i=0;i<num/2;i++){
        c=arr[i];
        arr[i]=arr[d-1];
        arr[d-1]=c;
        d--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
