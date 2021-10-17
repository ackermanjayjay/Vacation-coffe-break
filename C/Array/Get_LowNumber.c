#include<stdio.h>

int Arraayku[99],
    sum,smaller;
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

void getBigNumber()
{
    printf("\nHasil jumlah array terbesar: \n");
    
    for(int i=0;i<5;i++)
    {
        if(Arraayku[0]<Arraayku[i])
        {
           Arraayku[0]=Arraayku[i];
      
        }
         
    }
     printf("%d",Arraayku[0]);
}
void getLowNumber()
{
    smaller=Arraayku[0];
    printf("\nHasil jumlah array terkecil: \n");
    for(int z=0;z<5;z++)
    {
        if (smaller>Arraayku[z])
        {
            smaller=Arraayku[z];
       
        }   
    }
        printf("%d",smaller);
}

int main()
{
    input();
    output();
    sumArray();
    getBigNumber();
    getLowNumber();
}