#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       string a;
        cin>>a;
        vector<int> result;
        stack<int>s;
        for(int i=1;i<=n;i++){
            if(a[i-1]=='1'){
                s.push(i);
            }
           else if(a[i-1]=='2'){
               if(!s.empty()){
                result.push_back(s.top());
                s.pop();
               }
               else
               result.push_back(i);
           }
           else if(a[i-1]=='3')
           result.push_back(i);
}
 int not_printed=n-result.size();
 cout<<not_printed<<endl;

 sort(result.begin(),result.end());
for (int i = 1; i <= n; i++) {
            if (!binary_search(result.begin(), result.end(), i)) {
                cout << i << " ";
            }
        }

 cout<<endl;
    }
return 0;
}
    

