#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,x,y;
    
    vector<vector<int>> a;

    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a.resize(n,vector<int>(k));

        for(int j=0;j<k;j++)
        {
            cin >> a[i][j];
        }
    }
    
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        
        cout << a[x][y] << endl ;
    }
    return 0;
}
