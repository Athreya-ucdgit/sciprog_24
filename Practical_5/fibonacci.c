#include<stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);

}
int main(void) {
    int n = 0;
    printf("Enter n:");
    scanf("%d",&n);

    int result = 0;
    result = fibonacci(n);
    printf("Result = %d\n",result);
}

// 0 1 1 2 3 5 8 13 21