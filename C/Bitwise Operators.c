#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a=0,o=0,x=0;
    for(int i=1;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            if ((i|j)>o && (i|j)<k) o=i|j;
            if ((i&j)>a && (i&j)<k) a=i&j;
            if ((i^j)>x && (i^j)<k) x=i^j;
        }
    }printf("%d\n%d\n%d",a,o,x);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
