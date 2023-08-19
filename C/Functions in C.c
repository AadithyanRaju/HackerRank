#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int e,f,g;
    e=(a>b)?a:b;
    f=(e>c)?e:c;
    g=(f>d)?f:d;
    return g;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
