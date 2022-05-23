#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;

    int arr[x+1];
    for(int i =0; i<x; i++) cin>>arr[i];

    int index;
    cin>>index;


    for(int i = index-1; i<x-1; i++) {
        arr[i] = arr[i+1];
    }
    x--;
    for(int i =0; i<x; i++) cout<<arr[i]<<" ";

    return 0;
}
