#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> ar, int key)
{
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i] == key)
            return i+1;
    }
}
int main()
{
    vector<int> ar;
    int n;
    cin >> n;
    int input;
    for(int i=0;i<n;i++)
    {
    	cin >> input;
    	ar.push_back(input);
	}
    int key;
    cin >> key;
    
    int pos = linearSearch(ar, key);
    cout << pos;
    
    return 0;
}
