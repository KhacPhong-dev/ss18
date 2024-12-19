#include <stdio.h>
#include <stdlib.h>

struct sinhvien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct sinhvien sinhvien;
    strcpy(sinhvien.name, "Nguyen Van A");
    sinhvien.age = 20;
    strcpy(sinhvien.phoneNumber, "0987654321");
    printf("Ten: %s\n", sinhvien.name);
    printf("Tuoi: %d\n", sinhvien.age);
    printf("So dien thoai: %s\n", sinhvien.phoneNumber);
    return 0;
}
