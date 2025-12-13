#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
           int t;
           cin>>t;
           while(t--){
             int n,c=1,k=0;
             cin>>n;
             vector<string>grid(1);
             cin>>grid[0];
            // string str;
            int maxi=0;
           //  for(int i=0;i<1;i++){
                for(int j=0;j<n-1;j++){
                    if(grid[0][j]==grid[0][j+1])
                        c++;
                    else{
                      maxi=max(maxi,c);
                      c=1;
                    }

                }
                maxi=max(maxi,c);

           //  }
             cout<<maxi+1<<"\n";

           }
           return 0;


}
