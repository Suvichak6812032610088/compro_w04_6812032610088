#include <stdio.h> //กรณีที่2

void countCall() {
    int counter = 0;  // ตัวแปรถูกสร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}
 // ผลลัพธ์ Starting function calls...
 //Call Function: Counter = 1
 //Call Function: Counter = 1
 //After first call:
 //Call Function: Counter = 1

 //สรุปตัวแปร counter ไม่ใช่ static
 //ทุกครั้งที่เรียก countCall() จะสร้างตัวแปรใหม่ และเริ่มนับที่ 0 เสมอ

 //ผลลัพธ์แตกต่างกันอย่างไร
 // กรณีที่1 ผลลัพ์คือ ตัวเลขสะสมขึ้นเรื่อยๆ (1,2,3) เหตุผล เพราะ static เก็บค่าระหว่างรอบ
 // กรณีที่2 ผลลัพธ์คือ ทุกครั้งเป็น1 เหตุผล เพราะตัวแปรถูกสร้างขึ้นใหม่ทุกครั้ง
 
 // ความแตกต่างคือ static เก็บค่าต่อรอบ int ไม่เก็บค่าต่อรอบ
// สรุป ใช้ static เมื่ออยากเก็บค่าสะสมระเรียกฟังก์ชันหลายครั้ง