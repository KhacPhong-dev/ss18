#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct sinhvien sinhvien;
    printf("Nhap ten: ");
    scanf("%s", sinhvien.name);
    printf("Nhap tuoi: ");
    scanf("%d", &sinhvien.age);
    printf("Nhap so dien thoai: ");
    scanf("%s", sinhvien.phoneNumber);
    printf("Ten: %s\n", sinhvien.name);
    printf("Tuoi: %d\n", sinhvien.age);
    printf("So dien thoai: %s\n", sinhvien.phoneNumber);
    return 0;
}