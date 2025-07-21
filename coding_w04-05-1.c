#include <stdio.h>
void countcall();
int main() {
printf("Starting function calls...\n");
countcall();
printf("After first call!\n");
countcall();
return 0;
}
void countcall() {
static int counter = 0;
 counter++;
printf("Call function counter - %d\n", counter);
}
// ค่าของ counter ถูกเก็บไว้ระหว่างการเรียกใช้ฟังก์ชั่น สามารถนับสำนวนครั้งที่เรียกใช้ฟังก์ชั้นได้เพราะเป็น static