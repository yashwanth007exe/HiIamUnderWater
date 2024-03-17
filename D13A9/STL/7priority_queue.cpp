#include <iostream>
#include <bits/stdc++.h>

int main(){
    // tree data structure is maintained inside
    // the guy who has larger value appears front
    // if character the largest charcter if string lexigographically largest string will stay at top
    // max heap
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); // {5,2}
    pq.emplace(10) // {10,5,2}

    cout << pq.top(); // 10

    pq.pop(); // {5,2}


    // to make a datatype that stores minimum value at the front
    // minimum heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.emplace(8); // {2,5,8}

    cout << pq.top(); // prints 2
}

// time complexities
// push log(n)
// top O(1)
// pop log(n)