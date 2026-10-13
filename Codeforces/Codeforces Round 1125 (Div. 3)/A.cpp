#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x0,y0,r;
        cin>>x0>>y0>>r;
        int x,y;
        x=x0;
        y=y0+r;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}