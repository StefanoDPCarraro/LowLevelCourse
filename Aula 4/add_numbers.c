#include <stdio.h>

int main(){
    int n = 0;
    while(n < 100000){
        n = n + 100;
        printf("%d \n", n);
    }
    return 0;
}