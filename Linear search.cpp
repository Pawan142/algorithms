#include<iostream>
using namespace std;
int linearSearch(int* arr,int n,int x){
  for(int i=0;i<n;i++){
    if(arr[i]==x)
      return i;
  }
  return -1;
}
int main(){
 int n;
  cin>>n;
  int* arr=new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int x;
  cin>>x;
  //this will return index of element x
  cout<<linearSearch(arr,n,x);
}
