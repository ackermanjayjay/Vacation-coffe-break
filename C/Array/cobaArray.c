#include<stdio.h>

int Arraayku[99];
void input()
{
    printf("Masukkan array anda: \n");
    for(int i=0;i<5;i++)
    {
    scanf("\n%d",&Arraayku[i]);
    }
}
void output()
{
    printf("Hasil array anda: ");
    for(int z=0;z<5;z++)
    {
        printf("\n%d",Arraayku[z]);
    }
}

int main()
{
    input();
    output();
}