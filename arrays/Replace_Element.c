#include<stdio.h>

int main(){
    int n_nums = 0;
    
    printf("how many nums you want to enter : ");
    scanf("%d", &n_nums);
    int num[n_nums];
    
    for(int i = 0; i < n_nums; i++){
        printf("Enter your numbers : \n");
        printf("%d . ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("to search replace : ");
    scanf("%d", &to_replace);
    int to_replace;
    
    for(int i = 0; i < n_nums; i++){
        if(num[i] == to_replace){
            
        }
    }
}