#include <iostream>

using namespace std;

int sumaCif(int x){
  int s=0;
  while(x){
    s=s+x%10;
    x/=10;
  }
  return s;
}

int main(){
  int n;
  cin>>n;
  cout<<sumaCif(n);
  return 0;
}
