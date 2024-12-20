#include <iostream>

using namespace std;
int p[1000000];

int main()
{
    int n;
    cin>>n;
    int j;

    for(int i=2;i<=n;i++){
        if(p[i]==false){
            cout<<i<<endl;
        }
    for(j=2*i;j<=n;j+=i){
        p[j]=true;
    }
    }
    return 0;
}
