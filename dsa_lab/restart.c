#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
if(n!=0){
    return 0;
}
int sum=0;
int x=0;
for(int i=0;i<=n;i++){
    int a,b,c;
    cin>>a>>b>>c;
        sum=a+b+c;
        if(sum>=2){
            x++;
        }
}
cout<<x;
// cout <<n;usinf
}