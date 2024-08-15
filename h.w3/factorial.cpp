#include<iostream>
using namespace std;
int fac(int num){
   
     if(num==0){
        return 1;
      }
    else{


return num*fac( num-1);

}
}

int main(){
int x;
cout<<"the number"<<endl;
cin>>x;
 cout<<"the facitor is :"<<fac(x)<<endl;


}