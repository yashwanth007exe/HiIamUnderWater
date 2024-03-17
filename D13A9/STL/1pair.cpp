#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int,int> p1 = {1,2};
    pair <int, pair <int,int> > p2 = {3,p1};
    cout << p1.first;
    cout << p2.second.first;
}