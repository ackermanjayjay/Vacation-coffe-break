#include<iostream>
using namespace std;

int* p
    ,c[]={1,2,3,4,5};
void Check()
{
    printf("Hasil sebelum diubah");
    for(int i=0;i<sizeof(c)/sizeof(*c);i++)
    {
        cout<<" "<<c[i]<<endl;
        
    }
        
}

int main()
{
    Check();
    
}