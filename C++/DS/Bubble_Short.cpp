#include<iostream>
using namespace std;
int arrayku[99];
int i,j,temp,pass=0,element;
void input()
{
    printf("Masukkan element anda: \n");
    cin>>element;

    printf("\n masukkan array anda: \n");
    for(i=0;i<element;i++)
    {
    cin>>arrayku[i];
    cout<<endl;
    }
}
void bubble()
{
    for(i = 0; i<element; i++) {
   for(j = i+1; j<element; j++)
   {
      if(arrayku[j] < arrayku[i]) {
         temp = arrayku[i];
         arrayku[i] = arrayku[j];
         arrayku[j] = temp;
      }
   }
}
// pass++;
}

void sorted()
{
    printf("\n element sorted: \n");
     for(int i = 0; i<element; i++) {
     cout<<arrayku[i]<<" ";
     }
     cout<<"Array yang di sort: "<<element<<endl;
}
int main()
{
input();
bubble();
sorted();
}