#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;
    int arr[x];
    for(int i =0; i<x; i++) cin>>arr[i];

    for(int i =0; i<x-1; i++) {
    int ptr = 0,s;
    while(ptr<=x-i-1){
    if(arr[ptr] > arr[ptr + 1]){
     s = arr[ptr];
    arr[ptr] = arr[ptr +1];
    arr[ptr+1] = s;
    }
    ptr++;
    }
    }
    for(int i =0; i<x; i++) cout<<arr[i]<<" ";

    return 0;
}
