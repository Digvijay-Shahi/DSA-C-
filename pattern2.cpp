#include <iostream>
using namespace std;
int main(){
    int n=3;
    // cout<<"enter the number of lines";
    // cin>>n;
     for (int i =0 ; i<= n ; i++){
        for (int j =0; j<=n; j++){
            cout<<j;
            n++;
        }
        cout<<endl;
    }
  
    return 0;
}