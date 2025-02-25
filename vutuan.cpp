#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Nhap N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        int NN = (i * 11); // Thay d?i cách tính NN
        sum += NN;
        printf("S? %d -> NN = %d, Tong tam thoi = %d\n", i, NN, sum);
    }
    
    printf("Tong S = %d\n", sum);
    return 0;
}
