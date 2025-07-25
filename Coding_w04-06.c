#include <stdio.h>

// ค่าคงที่ระดับ Global (ใช้ได้ทุกฟังก์ชัน)
const int GLOBAL_RATE = 10;

void calculate() {
    // ค่าคงที่ระดับ Local (ใช้ได้แค่ในฟังก์ชันนี้)
    const int LOCAL_BONUS = 50;

    // แสดงค่าทั้ง 2 ตัว
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    // แสดงค่าตัวแปรระดับ Global ได้
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // Error: LOCAL_BONUS เป็นตัวแปรภายใน calculate() เท่านั้น
    // printf("LOCAL_BONUS = %d\n", LOCAL_BONUS); // จะ compile ไม่ผ่าน

    return 0;
}
 //  ค่า GLOBAL_RATE และ LOCAL_BONUS แตกต่างกันอย่างไร
 // ค่า GLOBAL_RATEแสดงค่าเป็น 10 ทั้งใน main(),calculate
 // ค่า LOCAL_BONUSแสดงค่าเป็น50 แค่ใน calculate()
 // เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE =20; หรือ LOCAL_BONUS =80;
 // คำตอบ มันจะcompile-time error
 // ทำไม LOCAL_BONUS ถึงไม่สามารถเรียกใช้ใน main() ได้
 // คำตอบ เพราะ ตัวแปร local ที่ถูกจำกัดการเข้าถึงเฉพาะในฟังก์ชันที่มันถูกประกาศ calculate()
 // สรุปผล GLOBAL_RATE  ใช้ได้ในทุกฟังก์ชัน คือ  main(),calculate()
 //       LOCAL_BONUS   ใช้ได้แค่ในฟังก์ชันนั้นคือ calculate()