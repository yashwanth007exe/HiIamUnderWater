#include<iostream>
#include<bits/stdc++.h>

int main(){
    // sorted and unique
    set<int> st;
    st.insert(1); // 1
    st.emplace(2);// 1,2
    st.insert(2);// 1,2
    st.insert(5); // 1,2,5
    st.insert(4); //1,2,4,5
    // Fubctuibakut of insert in vector can be used also, that only increases efficiency

    //beging(), end(), rbegin(), rend(), size();
    // empty(), swap() are same as those of above

    auto it = st.find(4); // returns a iterator(memorylocation) which points to 4

    auto it = st.find(100); // if the element is not there returns st.end() 

    st.erase(5); // takes logorithemic time

    int cnt = st.count(1); // gives 1 or 0 (if the element exists or not);

    auto it = st.find(1);
    st.erase(it);

    auto it1 = st.find(3);
    auto it2 = st.find(5);
    st.erase(it1,it2);


    // lower_bound() and upper_bound() function works in the same way as in vector it does.
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

// everything happens in logN timecomplexity