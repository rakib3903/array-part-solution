#include<bits/stdc++.h>
using namespace std;
int main() {

    int x,terget;
    cin>>x;

    int arr[x];

    for(int i=0; i<x; i++) cin>>arr[i];
    cin>>terget;

    int first = 0,last = x-1,mid = (first+last)/2;

    while(first<=last && arr[mid] != terget) {
        if(terget < arr[mid]) last = mid-1;
        else first = mid + 1;
        mid = (first + last)/2;
    }

    if(arr[mid] == terget) cout<<"the number exists!"<<endl;
    else cout<<"the number does not exsts!"<<endl;

    return 0;
}
