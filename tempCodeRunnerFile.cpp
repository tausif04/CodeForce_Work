#include<iostream>
using namespace std;
int main(){
    long a[4],b=0;
    for(int i=0;i<4;i++){
        cin>>a[i];   
    }
    for(int i=0;i<4;i++){
        if(a[i]==a[i+1]){
            b++;
        } 
    }
    cout<<b<<endl;
}