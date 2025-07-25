#include <stdio.h> // กรณีที่1

void countCall() {
    static int counter = 0;  // ถูกสร้างครั้งเดียว และเก็บค่าสะสมไว้
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
 // ผลลัพStarting function calls...
 //Call Function: Counter = 1
 //Call Function: Counter = 2
 //After first call:
 //Call Function: Counter = 3
 
 // สรุป ตัวแปร counter ไม่ใช่ static
//ทุกครั้งที่เรียก countCall() จะสร้างตัวแปรใหม่ และเริ่มนับที่ 0 เสมอ