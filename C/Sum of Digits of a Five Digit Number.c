#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,s,r;
    scanf("%d", &n);
    while (n!=0){
        r=n%10;
        s+=r;
        n/=10;
    }
    printf("%d",s);
    return 0;
}
