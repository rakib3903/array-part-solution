#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int arr1[m][n];
    int arr2[m][n];

    for(int i =0; i< m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }



    for(int i =0; i< m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr1[i][j];
        }
    }



    for(int i =0; i< m; i++) {
        for(int j=0; j<n; j++) {
            arr2[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    for(int i =0; i< m; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
