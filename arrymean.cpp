#include<iostream>
using namespace std;


int main(){

    int n=5;
    int arr[n];
    cout<<"Input the array element: "<<endl;
    for(int i=0 ; i<n; i++){

        cin>>arr[i];


    }

  float sum=0;

for( int i=0; i<n; i++){

   sum=sum+arr[i];

}
 cout<<"the average is: "<<sum/n<<endl;




return 0;
}
