#include <bits/stdc++.h>
using namespace std;

int getgcd(int n1,int n2){
  while(n1 != n2){
      if(n1 > n2){
        n1 = n1 - n2;
      }else{
        n2 = n2 - n1;
      }   
    }
    return n2;
  }

int arrgcd(vector<int>a){
  int gcd;
  for(int i=0;i<a.size();i++){
    gcd = getgcd(gcd,a[i]);
    
  }
  return gcd;
}

int main(){
  int t;
    cin >> t;
  vector<int>a;
    for(int i=0;i<t;i++){
      cin >> i;
      a.push_back(i);
    }
  cout << arrgcd(a);
}