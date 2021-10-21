#include <iostream>
#include <array>
using namespace std;
array<int,99>arrayku;

void input()
{
    printf("Masukkan array vector anda: \n");
    for(int v=0;v<5;v++)
    {
        cin>>arrayku.at(v);
        cout<<endl;
    }
}

void output()
{
 for(int v=0;v<5;v++)
    {
        cout<<arrayku.at(v)<<" ";
        
    }

}

int main()
{
    input();
    output();
}