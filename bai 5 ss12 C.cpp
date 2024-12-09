#include <stdio.h>

bool kiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true; 
}

int main() {
    int so1, so2;
    printf("Nh?p s? nguy�n th? nh?t: ");
    scanf("%d", &so1);
    printf("Nh?p s? nguy�n th? hai: ");
    scanf("%d", &so2);
    if (kiemTraSoNguyenTo(so1)) {
        printf("%d l� s? nguy�n t?.\n", so1);
    } else {
        printf("%d kh�ng ph?i l� s? nguy�n t?.\n", so1);
    }
    if (kiemTraSoNguyenTo(so2)) {
        printf("%d l� s? nguy�n t?.\n", so2);
    } else {
        printf("%d kh�ng ph?i l� s? nguy�n t?.\n", so2);
    }

    return 0;
}
