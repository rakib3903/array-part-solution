
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>>x;

  string arr[x+1];
    for(int i =0; i<x; i++) cin>>arr[i];
   string terget;
    cin>>terget;
    int index;
    cin>>index;


    for(int i = x; i>=index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index-1] = terget;

    x++;
    for(int i =0; i<x; i++) cout<<arr[i]<<" ";

    return 0;
}
