#include<iostream>
using namespace std;
void rat(int *x,int *y){
int z;
z= *x;
*x=*y;
*y=z;

}


int main(){

int a, b;
cout<<"enter the frsit number"<<endl;
cin>>a;
cout<<"enter the other numbur"<<endl;
cin>>b;
rat(&a,&b);
cout<<a<<endl<<b;

}