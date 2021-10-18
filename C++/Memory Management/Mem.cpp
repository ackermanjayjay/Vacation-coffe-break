#include<iostream>
using namespace std;

int* point;


void input()
{
    printf("Masukkan angka: ");
    point=new int;
    cin>>*point;
  
}


void output()
{
    cout<<"\n hasilnya : "<<*point<<endl;
    delete point;
}
int main()
{
    input();
    output();
}