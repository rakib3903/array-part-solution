#include<bits/stdc++.h>
using namespace std;

int main() {
    char arr[1000], arr1[100];
    int x,y;

    cin>>x;
    for(int i=0; i<x; i++) cin>>arr[i];

    cin>>y;
    for(int i=0; i<y; i++) cin>>arr1[i];

    int p =0;
    for(int i = x; i <= x + y - 1; i++) {
        arr[i]=arr1[p];
        p++;
    }

    for(int i =0; i<= x +y -1; i++) cout<<arr[i]<< " ";

    return 0;
}
