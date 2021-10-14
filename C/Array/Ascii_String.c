#include<stdio.h>

char AsciiKu[100];  //inisialiasi untuk Ascii yang diinput
int sum;            //inisialiasi untuk penjumlahan Ascii

void input ()
{
    printf("Masukkan Char anda: ");
    scanf("%s",AsciiKu);
  
}
void output()
{                   
    for(int i=0;AsciiKu[i] !='\0';i++)
   {
       printf("\nUkuran Ascii anda: \n");
       printf("\n %c is %d",AsciiKu[i],AsciiKu[i]);
   }
}

int main()
{
    input();
    output();
}