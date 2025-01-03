#include <stdio.h>

int main(void) {

int i = 5;
float f = 2.99;
char c = 'a';
double d = 1.99;

int* ptrint = &i;
float* ptrfloat = &f;
char* ptrchar = &c;
double* ptrdouble = &d;


printf("%d\n", i);
printf("%p\n", ptrint);
printf("%p\n", &ptrint);
printf("%d\n", (*ptrint)++);
printf("%d\n", *ptrint);
printf("\n");

printf("%f\n", f);
printf("%p\n", ptrfloat);
printf("%f\n", *ptrfloat);
printf("\n");

printf("%c\n", c);
printf("%p\n", ptrchar);
printf("%c\n", *ptrchar);
printf("\n");

printf("%lf\n", d);
printf("%p\n", ptrdouble);
printf("%lf\n", *ptrdouble);
printf("\n");

return 0;

}
