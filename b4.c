#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct sinhvien sinhvien[50];
    int i = 0;
    while (i < 50) {
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);
        sinhvien[i].id = i + 1;
        printf("Nhap ten: ");
        scanf("%s", sinhvien[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &sinhvien[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", sinhvien[i].phoneNumber);
        i++;
    }
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < 50; i++) {
        printf("Sinh vien thu %d\n", i + 1);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
    }
    return 0;
}