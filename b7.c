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
    char name[50];
    printf("Nhap ten sinh vien can xoa: ");
    scanf("%s", name);
    int index = -1;
    for (int i = 0; i < 50; i++) {
        if (strcmp(sinhvien[i].name, name) == 0) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Khong tim thay sinh vien co ten %s\n", name);
    } else {
        for (int i = index; i < 49; i++) {
            sinhvien[i] = sinhvien[i + 1];
        }
        printf("Danh sach sinh vien sau khi xoa:\n");
        for (int i = 0; i < 49; i++) {
            printf("Sinh vien thu %d\n", i + 1);
            printf("Ten: %s\n", sinhvien[i].name);
            printf("Tuoi: %d\n", sinhvien[i].age);
            printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
        }
    }
    return 0;
}