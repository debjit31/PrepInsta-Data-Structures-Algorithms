#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> ar, int k)
{
    int low = 0, high = ar.size()-1, mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(ar[mid] == k){
            return mid+1;
        }else if(k > ar[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    if (low > high)
        return -1;
}



int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    int k;
    cin >> k;
    
    int pos = binarySearch(ar, k);
    if(pos == -1)
        cout << "Element does not exists !!" << "\n";
    else
        cout << "Element found in position " << pos << "\n";
    
    return 0;
}
