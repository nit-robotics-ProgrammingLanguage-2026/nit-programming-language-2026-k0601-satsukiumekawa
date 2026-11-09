#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0){
        printf("NG\n");
    }else{
        long long sum = 0;

        for (int I =1; i <= n; i++){
            sum += i;
        }

        printf("%11d\n", sum);
    }
    return 0;
}
