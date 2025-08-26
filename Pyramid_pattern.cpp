
#include<iostream>
using namespace std;

void pyramid(int n){
    // for(int i=1;i<=n; i++){
        // this is for the regular pyramid
        // for(int j=1; j<=n-i; j++ ){
        //     cout<<" ";
        // }
        // for(int k=1; k<=(2*i-1); k++ ){
        //     cout<<"*";
        // }

            // cout<<endl;
    // }

    for(int i=n;i>=1; i--){
            for(int j=1; j<=n-i ; j++ ){
            cout<<" ";

        }
            for(int k=1; k<=(2*i-1); k++){
                cout<<"*";
            }
            cout<<endl;
        }
    


}



int main(){
    int n;
    cout<<"Enter the num to print pyramid :"<<endl;
    cin>>n;
    pyramid(n);
    return 0;
}