#include <stdio.h>
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false;
    }
    int tongUoc = 0;
    for (int i = 1; i <= n / 2; i++) { 
        if (n % i == 0) {
            tongUoc += i;
        }
    }
    return tongUoc == n;
}

int main() {
    int so1, so2;
    printf("Nh?p s? nguy�n th? nh?t: ");
    scanf("%d", &so1);
    printf("Nh?p s? nguy�n th? hai: ");
    scanf("%d", &so2);
    if (kiemTraSoHoanHao(so1)) {
        printf("%d l� s? ho�n h?o.\n", so1);
    } else {
        printf("%d kh�ng ph?i l� s? ho�n h?o.\n", so1);
    }

    if (kiemTraSoHoanHao(so2)) {
        printf("%d l� s? ho�n h?o.\n", so2);
    } else {
        printf("%d kh�ng ph?i l� s? ho�n h?o.\n", so2);
    }

    return 0;
}
