#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;

    int arr[x];
    for(int i =0; i<x; i++) cin>>arr[i];
    int terget;
    cin>>terget;
    int index =-1 ;
    for(int i = 0; i<x; i++) {
        if(arr[i] < terget)
            index = i;
    }
    if(index == -1) arr[x] = terget;
    else {
    index++;
        for(int i = x; i>=index+1; i--) {
            arr[i] = arr[i-1];
        }
        arr[index] = terget;
    }
    x++;
    for(int i =0; i<x; i++) cout<<arr[i]<<" ";

    return 0;
}
