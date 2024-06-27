#include <iostream>
using namespace std;
int main(){
    int t;
    int x;
    int c=0;
    int ans[32];
    int i;
    cin >> t;
    int j;
    for(int it=0;it<t;it++){
        cin >> x;
        c=0;
        i=0;
        for(int k=0;k<32;k++)
        ans[k]=0;
        while(x!=0){
            ans[c]=x%2;
            x=x/2;
            c++;
        }
    while(i<=c){
        j=i;
        while(ans[j]==1){
            if(j!=i) ans[j]=0;
            j++;
        }
        if(j>i+1){
            ans[i]=-1;
            ans[j]=1;
            i=j;
        }
        else i++;
    }
    for(int k=31;k>=0;k--){
        if(ans[k]==1){
            c=k;
            break;
        }
    }    
    cout << c+1<<endl;
    for(int k=0;k<=c;k++)
    cout<<ans[k]<<" ";
    cout<<"\n";
    }
return 0;
}