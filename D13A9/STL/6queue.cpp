#include <iostream>
#include <bits/stdc++.h>

int main(){
    // first in first out
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    q.back() += 5; // adds 5 to 4  

    cout << q.back(); // 9

    cout << q.front(); // 1
    // q is {1,2,3,9}
    q.pop(); // {2,3,9}

    cout << q.front(); // 2  
}