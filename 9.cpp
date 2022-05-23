#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    for(int i =0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

    int index = m * (m+1)/2;
    int x =0;
    int arr1[index];

    for(int i =0; i<m; i++) {
        for(int j=0; j<n; j++) {
            arr1[x] = arr[i][j];
            x++;
            if(i == j) {
                break;
            }
        }
    }

    int locate1,locatey;
    cin>>locate1>>locatey;

    int terget  = locate1 * (locate1 -1) /2;
     terget += locatey;
    cout<<"arr["<<locate1<<"]["<<locatey<<"] is located in the 1D array M["<<terget<<"]  position."<<endl;

    cout<<"And the element is : "<< arr1[terget-1] <<endl;

    return 0;
}
