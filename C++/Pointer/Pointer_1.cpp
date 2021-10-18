#include<iostream>
using namespace std;

int* p,c;
void input()
{
        cout<<"Print pointer: ";cin>>c;
        
}
void output()
{
    // menyimpan alamat ke c
    p=&c;
    cout<<"Alamat anda: "<<p<<endl;
    cout<<"Angka yang disimpan: "<<*p<<endl;
}

void ubahAngka()
{
    cout<<"\nUbah angka: "<<endl;
    *p=5;
    cout<<"\n Angka terubah: "<<c;
}
int main()
{
    input();
    output();
    ubahAngka();
}