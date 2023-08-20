#include <stdio.h>

void update(int *a,int *b) {
    int c=*a,d=*b;
    *a=c+d;
    d=c-d;
    if (d<0) d=-d;
    *b=d;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
