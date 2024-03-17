#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;      // {}
    
    v.push_back(1);     // {1}
    v.emplace_back(2); //{1,2} faster than push_back

    vector<pair<int,int>> vp;

    v.push_back({1,2});   // need curly braces
    v.emplace_back(1,2);   // assumes that it is pair since we passed two elements

    vector<int> v(4,100); // {100,100,100,100}

    vector<int> v(5);   // {0, 0, 0, 0, 0} or some garbage values

    vector<int> v1(3,20);
    vector<int> v2(v1); // copy v1 into v2; v2=> {20, 20, 20}

    // size of vector is dynamic



    //how to access
    // one way is to use [0] syntax 
    // v = {4,5,6,7};       v[2] -> 6

    // iterators point to the memory address
    // v = {10,20,30,40}
    vector<int>::iterator it = v.begin();   // this points to the memory of 10;
    cout << *(it);  //10           // this will give us the value inside of that memory 
    it++;
    cout << *(it); // 20

    vector<int>:: iterator it = v.end(); // this will point to the location right after vector
    it--;
    cout << *(it); // 40

    cout << v.back();  // 40 this will give us the last element in the vector

    // printing values of vector using iterators
    for(vector<int>::iterator it = vector.begin(); it != v.end();it++){
        cout << *(it) << " ";
    }

    // instead of this syntax vector<int>::iterator we can use auto
    for(auto it=v.begin(); it!= v.end(); it++){
        cout << *(it) << " ";
    }

    // for each loop 
    for(auto it : v){
        cout << *(it) << " ";
    }

    // deleting in a vector 
    // v = {10,20,30,40,50}
    v.erase(v.begin()+1) // deletes 20 -> v = {10,30,40,50}
    v.erase(v.begin()+1,v.begin()+3) // v = {10,50} doesn't include last [start,end)

    // insert function
    vector<int> v(2,100); // {100,100};
    v.insert(v.begin(),1000); // {1000,100,100}
    v.insert(v.begin()+1, 2, 5) // {1000, 5, 5, 100, 1000}

    // inserting portion of one vector into other one
    vector<int> c(4,10); // {10,10,10,10}
    vector<int> v(2,5); // {5,5}

    v.insert(v.begin(), c.begin(), c.end()); // {10,10,10,10,5,5}

    cout << v.size()

    v.pop_back(); // {5};

    v1.swap(v2);

    v.clear(); // clears whole vector

    cout << v.empty() // returns boolean if the vector is empty or not



    // single linked list is maintained internally for a vector
    // double linked list is maintained interanally for a list
}