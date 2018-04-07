#include<iostream>
using namespace std;



int main(){

long int arr[10000];
int cnt=0;
for(int i=2;i<=10000;i++){
    int j;
    for(j=2;j<i;j++){
        if(i%j==0){
            break;
        }

    }
    if(i==j){
        arr[cnt]=i;
        cnt++;
    }
}


    int t,a;
    cin>>t;
    int ar[t];
   int o;
    for(o=0;o<t;o++){
        cin>>ar[o];
    }
    for(o=0;o<t;o++){
        cout<<arr[ar[o]-1]<<endl;
    }

return 0;
}
