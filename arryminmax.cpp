#include<iostream>
using namespace std;


int main(){

    int n=5;
    int arr[n]={8,2,3,4,5};
int i;

float value=arr[0];
float value1=arr[0];


for(  i=0; i<n; i++){



 if(value>arr[i] ){

   value=arr[i];
 }



}
 cout<<"the minimum value is: "<<value<<endl;

for(  i=0; i<n; i++){



 if(value1<arr[i] ){

   value1=arr[i];
 }



}
 cout<<"the maximum value is: "<<value1<<endl;


return 0;
}
