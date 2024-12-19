#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    int index;
    printf("Nhap vi tri can chèn: ");
    scanf("%d", &index);
    printf("Nhap thong tin sinh vien can them\n");
    sinhvien[index].id = index + 1;
    printf("Nhap ten: ");
    scanf("%s", sinhvien[index].name);
    printf("Nhap tuoi: ");
    scanf("%d", &sinhvien[index].age);
    printf("Nhap so dien thoai: ");
    scanf("%s", sinhvien[index].phoneNumber);
    printf("Danh sach sinh vien sau khi them:\n");
    for (int i = 0; i < 50; i++) {
        printf("Sinh vien thu %d\n", i + 1);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
    }
    return 0;
}