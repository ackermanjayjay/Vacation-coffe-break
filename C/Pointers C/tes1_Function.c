#include<stdio.h>

int* p,c;

void input()
{
     printf("Masukkan angka yang di pointer: ");
    scanf("%d",&c);
}

void output()
{
     printf("Hasil alamat anda: %p",c);
    printf("\nHasil angka anda: %d",c);
}
int main()
{
    input();
    output();
}