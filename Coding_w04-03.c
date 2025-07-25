    #include <stdio.h>

int main() {
    char nameInitial = 'K';        // ตัวอักษร 1 ตัว ใช้ single quote
    int age = 20;                  // อายุ เป็นจำนวนเต็ม
    float weight = 48.50;          // น้ำหนัก เป็นเลขทศนิยม
    char gender[] = "Female";      // เพศ เป็นข้อความ (string) ใช้ char array

    // แสดงผลออกหน้าจอ
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}