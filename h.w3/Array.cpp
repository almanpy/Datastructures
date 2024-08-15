#include<iostream>
using namespace std;
void avg(int arr[])
{
int add=0;
for(int i=0; i<10; i++)
add=add+arr[i];
cout<<"the avreg is :"<< (add/10)<<endl;

}
int main()
{
int size = 10;
int arr[size];{}
cout<<"enter the almants of array"<<endl;

for( int i=0;i<size;i++){

    cin>> arr[i];
}
avg (arr);
}





