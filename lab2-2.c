#include <stdio.h>

int main()
{

    int i; //int형 변수 i선언
    int *ptr; //ptr 포인터 선언
    int **dptr; //dptr 이중포인터 선언

    i = 1234; //i의 값은 1234

    printf("[----- [YunTaeYoung] [2019019015] -----]\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //i값 출력
    printf("address of i == %p\n", &i); //i의 주소 출력
    printf("value of ptr == %p\n", ptr); //ptr포인터가 가르키고있는 주소 출력
    printf("address of ptr == %p\n", &ptr); //ptr포인터의 주소 출력

    ptr = &i; /* ptr is now holding the address of i //ptr 포인터가 i의 주소를 가르키게 설정 */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); //i의 값을 출력
    printf("address of i == %p\n", &i); //i의 주소를 출력
    printf("value of ptr == %p\n", ptr); //ptr포인터가 가르키고 있는 주소 출력하는데 이제 주소는 i의 주소이다.
    printf("address of ptr == %p\n", &ptr); //ptr포인터의 주소를 출력
    printf("value of *ptr == %d\n", *ptr); //ptr포인터가 가르키고있는 주소의 값을 출력하고 i의 값이 출력

    dptr = &ptr; /* dptr is now holding the address of ptr // 이중포인터dptr이 ptr의 주소를 가르키게 설정*/

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //i의 값을 출력
    printf("address of i == %p\n", &i); //i의 주소를 출력
    printf("value of ptr == %p\n", ptr); //ptr포인터가 가르키고있는 주소를 출력
    printf("address of ptr == %p\n", &ptr); //ptr포인터의 주소 출력
    printf("value of *ptr == %d\n", *ptr); //ptr포인터가 가르키고 있는 주소의 값을 출력, i의 값이 출력됨.
    printf("value of dptr == %p\n", dptr); // dptr이중포인터 값이 출력
    printf("address of dptr == %p\n", &dptr); //dptr이중포인터 주소를 출력
    printf("value of *dptr == %p\n", *dptr); //dptr이중포인터가 가르키고 있는 주소에 있는 값을 출력
    printf("value of **dptr == %d\n", **dptr);// dptr이중포인터가 가르키고 있는 주소, 이는 ptr이 가르키고 있는 주소이자 i의 값을 출력

    *ptr = 7777; /* changing the value of *ptr //ptr에 7777을 저장 따라서 ptr이 가르키고 있는 i에 7777 저장 */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //i의 값을 출력
    printf("value of *ptr == %d\n", *ptr); //ptr포인터가 가르키고있는 주소의 값을 출력, i의 값이 출력됨
    printf("value of **dptr == %d\n", **dptr); //dptr이중포인터가 가르키고있는 주소, 이는 ptr이 가르키고 있는 주소이자 i의 값을 출력

    **dptr = 8888; /* changing the value of **dptr //dptr에 8888을 저장, 따라서 dptr이 가르키고 있는 ptr에 저장한 후 ptr이 가르키고있는 i에 
    8888이 저장 */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //i의 값을 출력
    printf("value of *ptr == %d\n", *ptr); //ptr포인터가 가르키고있는 주소의 값을 출력 i의 값이 출력
    printf("value of **dptr == %d\n", **dptr); //dptr이중포인터가 가르키고있는 주소 즉, ptr주소가 가르키고있는 주소의 값인 i의 값을 출력

    return 0;
}
