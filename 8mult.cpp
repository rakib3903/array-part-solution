#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n,sum =0;
    cin>>m>>n;
    int arr[m][n];



    for(int i =0; i< m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

    int x,y;
    cin>>x>>y;
    int arr1[x][y];

    for(int i =0; i< x; i++) {
        for(int j=0; j<y; j++) {
            cin>>arr1[i][j];
        }
    }

    int arr2[m][y];

    for(int i =0; i<m; i++) {
        for(int j=0; j<y; j++) {
            for(int k=0; k<n; k++) {
                sum+=arr[i][k] * arr1[k][j];
            }
            arr2[i][j] = sum;
            sum = 0;
        }
    }

    for(int i =0; i< m; i++) {
        for(int j=0; j<y; j++) {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }






    return 0;
}

