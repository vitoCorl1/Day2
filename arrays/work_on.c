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
    int s = 0;
    int m;
    for(int i = 0; i < n_nums; i++){
        for(int j = 0; j < n_nums; j++){
            m = num[i];
            if(m = num[i + 1]){
                i++;
            }
        }
    }
}