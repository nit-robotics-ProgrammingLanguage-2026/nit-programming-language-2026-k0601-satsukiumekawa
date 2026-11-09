#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0){
        printf("NG\n");
    }else{
        long long sum = 0;

        for (int i =1; i <= n; i++){
            sum += i;
        }

        printf("%lld\n", sum);
    }
    return 0;
}
