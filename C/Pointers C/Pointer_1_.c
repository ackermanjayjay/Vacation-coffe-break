#include<stdio.h>
  int* p,c;

void normal()
{
    printf("Masukkan angka yang di pointer: ");
    scanf("%d",&c);

      printf("Hasil alamat anda: %p",&c);
    printf("\nHasil angka anda: %d",c);
}

void pointer()
{
     p=&c;
     printf("\nHasil alamat anda: %p",p);
    printf("\nHasil angka anda: %d",*p);
}
int main()
{   
    normal();
    pointer();
}
