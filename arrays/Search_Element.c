#include<stdio.h>

int main(){
    int n_nums = 0;
    
    printf("how many nums you want to enter : ");
    scanf("%d", &n_nums);
    int num[n_nums];
    int to_search;

    for(int i = 0; i < n_nums; i++){
        printf("Enter your numbers : \n");
        scanf(" %d", &num[i]);
    }
    printf("to search number : ");
    scanf("%d", &to_search);
    int found = 0;

    for (int i = 0; i < n_nums; i++) {
        if (num[i] == to_search) {
            printf("found!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("not found\n");
    }
}