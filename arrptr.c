#include<stdio.h>

int main(void) {

int arr[] = {1,2,3};
int* ptrarr = arr;

for(int i = 0; i < 3; i++) {

printf("%p\n", &arr[i]);

}

for(int i = 0; i < 3; i++) {

printf("%d\n", *(ptrarr + i));

}

}
