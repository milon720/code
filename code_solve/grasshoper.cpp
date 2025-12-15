#include<iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int x,k;
       cin>>x>>k;
       if(x<k){
         cout<<1<<"\n"<<x<<"\n";
       }
        else if((x%2==0 && k%2==0)||x%k==0){
          cout<<2<<"\n"<<k+1<<" "<<x-k-1<<"\n";

       }
      else cout<<1<<"\n"<<x<<"\n";

    }

    return 0;


}
