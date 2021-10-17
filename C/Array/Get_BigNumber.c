#include<stdio.h>

int Arraayku[99],
    sum;
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
        
        //Calculate Sum array 
        sum+=Arraayku[z];
    }
    
}

void sumArray()
{
    printf("\nHasil jumlah array anda: \n");
    printf("%d",sum);
}

void getNumber()
{
    printf("\nHasil jumlah array terbesar: \n");
    for(int i=0;i<5;i++)
    {
        if(Arraayku[0]<Arraayku[i])
        {
            Arraayku[0]=Arraayku[i];
        }
      
    }
  printf("%.2d",Arraayku[0]);
}

int main()
{
    input();
    output();
    sumArray();
    getNumber();
}