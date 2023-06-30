#include<iostream> 
#include<conio.h>
using namespace std;
int main(){
      int n,R,Q,arr[10],sum  = 0;
      cout<<"Enter a number "<<endl;
      cin>>n;
      int key = n;
      int i = 0;
      while(n>0){
           R = n%10;
           arr[i] = R*R*R;
           sum += arr[i];
           Q = n/10;
           n = Q;
           i++;
      }
     //  cout<<"sum is :"<<sum<<endl;
      if(key == sum){
           cout<<"Entered number is armstrong"<<endl;
      }
      else{
           cout<<"Entered number is not armstrong"<<endl;
      }
      getch();
      return 0;
}