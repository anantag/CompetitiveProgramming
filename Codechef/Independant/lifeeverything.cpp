#include<iostream>
using namespace std;
int main(){

   int inp;
   while(1){
      cin>>inp;
      if (inp == 42) 
         break;
      else
         cout<<inp<<endl;
   }
   return 0;
}
