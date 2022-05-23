#include<bits/stdc++.h>
using namespace std;

int main() {

    int m,n;
    cin>>m>>n;
    int arr[m+1][n];
    int arr1[m*n+1];
    int arr2[m+1];
    arr2[0] = 0;
    int  a =0,p =0;

    for(int i =0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }

    }
    int x =0,c=0;
    while(x<=m-1) {
        for(int i =0; i<m; i++) {
            arr1[a] = arr[i][c];
            a++;
        }
        c++;
        p++;
        arr2[p] = a;
        x++;
    }
    arr2[m] = m*n +1;
    int terget;
    cin>>terget;
    for(int i = arr2[terget-1]; i<=arr2[terget]-1; i++)  cout<<arr1[i]<<" ";

    return 0;
}
