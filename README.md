#include <stdio.h>
int main()
{
   char charType; //char형 변수선언
   int integerType; //int형 변수선언
   float floatType; //float형 변수선언
   double doubleType; //double형 변수선언

   printf("[----- [YunTaeYoung] [2019019015] -----]\n");
    
   printf("Size of char: %ld byte\n",sizeof(charType)); //char형 변수의 byte 크기 출력
   printf("Size of int: %ld bytes\n",sizeof(integerType)); //int형 변수의 byte 크기 출력
   printf("Size of float: %ld bytes\n",sizeof(floatType)); //float형 변수의 byte 크기 출력
   printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double형 변수의 byte 크기 출력

   printf("-----------------------------------------\n");
   
   printf("Size of char: %ld byte\n",sizeof(char)); //char의 byte 크기 출력
   printf("Size of int: %ld bytes\n",sizeof(int)); //int의 byte 크기 출력
   printf("Size of float: %ld bytes\n",sizeof(float)); //float의 byte 크기 출력
   printf("Size of double: %ld bytes\n",sizeof(double)); //double의 byte 크기 출력
   
   printf("-----------------------------------------\n");
   
   printf("Size of char*: %ld byte\n",sizeof(char*)); //char형 포인터주소의 byte 크기 출력
   printf("Size of int*: %ld bytes\n",sizeof(int*)); //int형 포인터주소의 byte 크기 출력
   printf("Size of float*: %ld bytes\n",sizeof(float*)); //float형 포인터주소의 byte 크기 출력
   printf("Size of double*: %ld bytes\n",sizeof(double*)); //double형 포인터주소의 byte 크기 출력
   
   

   return 0;
}
