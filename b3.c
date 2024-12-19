#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct sinhvien sinhvien[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);
        printf("Nhap ten: ");
        scanf("%s", sinhvien[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &sinhvien[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", sinhvien[i].phoneNumber);
    }
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d\n", i + 1);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
    }
    return 0;
}