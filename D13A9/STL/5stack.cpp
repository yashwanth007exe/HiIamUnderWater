#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // last in first out
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    

    st.pop();
    cout << st.top();

    cout << st.size();
    cout << st.empty(); // boolean 

    stack<int> st1,st2;
    st1.swap(st2);
}