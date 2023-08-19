#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    char a[1000];
    scanf("%s",a);
    for(int i=0;a[i];i++){
        switch (a[i]) {
            case 48:zero+=1;break;
            case 49:one+=1;break;
            case 50:two+=1;break;
            case 51:three+=1;break;
            case 52:four+=1;break;
            case 53:five+=1;break;
            case 54:six+=1;break;
            case 55:seven+=1;break;
            case 56:eight+=1;break;
            case 57:nine+=1;break;
        }
    }printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}
