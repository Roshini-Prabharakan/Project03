#include<iostream>
using namespace std;
int main()
{
int a[5],i;
cout<<"Enter elements:\n ";
for(i=0;i<5;i++)
cin>>a[i];
cout<<"You entered:\n";
for(i=0;i<5;i++)
cout<<"\n"<<*(a+i);
return 0;
}
