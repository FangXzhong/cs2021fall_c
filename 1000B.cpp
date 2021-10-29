#include <bits/stdc++.h>
 
using namespace std;
 
int n,m;
int a[100005];
int On[100005], Off[100005];
 
int main()
{
    scanf("%d%d",&n, &m);
    a[0] = 0;
    for (int i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    a[n+1] = m;
    int flag = 1;
    for (int i=1; i<=n+1; i++){
        if (flag){
            On[i] = On[i-1] + a[i]-a[i-1];
            Off[i] = Off[i-1];
        } else {
            Off[i] = Off[i-1] + a[i]-a[i-1];
            On[i] = On[i-1];
        }
        flag = !flag;
    }
    int Max = On[n+1];
    int tmp;
    for (int i=1; i<=n; i++){
        tmp = 0;
        if (a[i]-a[i-1]>1 || a[i+1]-a[i]>1){
            if (i%2){
                tmp = On[i] + Off[n+1] - Off[i] - 1;
            } else {
                tmp = On[i] + Off[n+1] - Off[i] + 1;
            }
        }
        Max = max(tmp,Max);
    }
    cout<<Max<<endl;
    return 0;
}