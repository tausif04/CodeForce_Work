#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(int j=0;j<t;j++){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
   cout<<s<<endl;
   return 0;
}