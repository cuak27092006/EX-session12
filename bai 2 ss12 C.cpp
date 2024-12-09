#include <stdio.h>
void inMang(int arr[],int kickCo);
int main(){
    int kichCo;
    printf("Nhap kich co mang: ");
    scanf("%d",&kichCo);
    int arr[kichCo];
    printf("\nNh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < kichCo; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    inMang(arr,kichCo);
    return 0;
}
void inMang(int arr[], int kichCo) {
    printf("Các ph?n t? trong m?ng là: ");
    for (int i = 0; i < kichCo; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
