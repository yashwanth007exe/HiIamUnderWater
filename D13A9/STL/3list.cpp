#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // single linked list is maintained internally for a vector
    // double linked list is maintained interanally for a list

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(1);
    ls.emplace_front(0);
    // all other functions are similar to vectors
}