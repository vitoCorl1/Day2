#include<stdio.h>

int main(){
    int n_elements, fact;
    int elements[n_elements];
    printf("the number of elements : ");
    scanf("%d", &n_elements);
    printf("the elements : ");
    for(int i = 0; i < n_elements; i++){
        scanf("%d", &elements[i]);
    }
    printf("the multiplication factor : ");
    scanf("%d", &fact);
    int fact_r[n_elements];
    for(int i = 0; i < n_elements; i++){
        fact_r[i] = elements[i] * fact;
        printf("resulting arr : %d\n", fact_r[i]);
    }
}