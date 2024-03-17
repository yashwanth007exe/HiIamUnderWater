#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // map stores unique keys in sorted order
    map <int,int> mpp; // key value pair
    map<int,pair<int,int>> mpp;
    map<pait<int,int>,int> mpp;
     
    mpp[1] = 2;
    mpp.emplace({3,1});
    mapp.insert({2,5});
    mpp[{2,3}] = 10;

    for(auto it : mpp){
        cout << it.first << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5]; // if 5 is not there it returns iterator of .end();

    auto it = mpp.find(2);
    coout << *(it).second;


    auto it = map.lower_bound(2);
    auto it = map.upper_bound(2);

    // erase, swap, size, empty are same as above    
}