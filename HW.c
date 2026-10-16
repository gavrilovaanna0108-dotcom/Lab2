#include <stdio.h>
int task();
void main() {
    int a=18, x=20, S;
    S = task(a, x);
    printf("%d",S);
}
int task(int a, int x){
    int S;
    S = a + 58 * x;
    return S;
}
