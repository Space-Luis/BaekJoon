#include <stdio.h>
 
int main(void) {
    int K;
    scanf("%d", &K);
    int a, b;
    while (K--){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
