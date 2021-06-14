#include <bits/stdc++.h>
/*Author Kunal Sisodia*/
using namespace std;
#define ll long long
#define test ll tttt;cin>>tttt;while(tttt--)
#define pba push_back


int main()
{
   test{
       vector<string> mpp; vector<string> inv;
      test{
          string first_name, last_name;
          cin>> first_name>> last_name;
          mpp.pba(first_name);
          inv.pba(last_name);
        }
    
        for(int i=0;i<mpp.size();i++)
        {
            int freq=  count(mpp.begin(),mpp.end(),mpp[i]);
                if(freq!=1){
                cout<<mpp[i] <<" "<<inv[i]<<endl;
                }
                else{
                cout<<mpp[i]<<endl;
                }
        }
        inv.clear();
        mpp.clear();
   } 
   return 0;
}