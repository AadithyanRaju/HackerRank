#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n*2-1;j++){
            int k=i<j?i:j;
            k=k<n*2-1-i?k:n*2-2-i;
            k=k<n*2-2-j?k:n*2-2-j;
            printf("%d ",n-k);
        }printf("\n");
      }
    return 0;
}
