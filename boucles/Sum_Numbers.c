#include<stdio.h>

int main(){
    int n;
    int s = 0;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        s += i; 
    }
    printf("%d", s);
}