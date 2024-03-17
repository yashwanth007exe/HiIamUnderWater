#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // only sort but not unique
    multiset<int> ms;
    ms.insert(1);// {1}
    ms.insert(1);// {1,1}
    ms.insert(1);// {1,1,1}

    ms.erase(1); //{}

    ms.erase(ms.find(1)); // erases only one 1 because we are passing the address

    ms.erase(ms.find(1),ms.find(1)+2);
}