#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"t:";
    cin>>t;
    while(t--){
        int n,m;
        cout<<"n:";cin>>n;
        cout<<"m:";cin>>m;

        int a[n][m];
        cout<<"matrix:"<<endl;
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
int  k = 0, l = 0;

    while (k < n && l < m) {
        for (i = l; i < m; ++i) {
            cout << a[k][i] << " ";
        }
        k++;

        for (i = k; i < n; ++i) {
            cout << a[i][m - 1] << " ";
        }
        m--;

        if (k < n) {
            for (i = m - 1; i >= l; --i) {
                cout << a[n - 1][i] << " ";
            }
            n--;
        }

        if (l < m) {
            for (i = n - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
    cout<<endl;
}
    return 0;
}
