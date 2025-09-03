#include<stdio.h>

int main(){
    int n_elements;
    printf("nunber of element you want : ");
    scanf("%d", &n_elements);
    int elements[n_elements];
    printf("Enter ur numbers : ");
    for(int i = 0; i < n_elements; i++){
        scanf("%d", &elements[i]);
    }
    int max = elements[0];
    for(int i = 0; i < n_elements + 1 ; i++){
        if(max <= elements[i]){
            max = elements[i];
        }
        printf("the maximum num is : %d\n", max);
    }
}