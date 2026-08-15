#include<bits/stdc++.h>
using namespace std;
int main(){

// char a[100];,

int arr[]={2,33,44,13,14,52,57};
 
// if(arr[0]>arr[1]){
// int a=arr[0];
// int b=arr[1];
// }
// else if()
// int saver;
for(int i=0;i<7;i++){
    // for(int j=i+1;j<7;j++){
        if(i>0 && arr[i]<arr[i-1]){
           int saver=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=saver;
        
    
}
}

cout<<arr[0]<<endl<<arr[1]<<endl;

return 0;
}