#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l;
    scanf("%d",&l);
    int s=0,x;
    for(int i=0;i<l;i++){
        scanf("%d",&x);
        s+=x;
    }
    printf("%d",s);
    return 0;
}
