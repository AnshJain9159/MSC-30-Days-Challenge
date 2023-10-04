/* Problem Link */
/* https://leetcode.com/problems/design-hashmap/ */
#include<iostream>
#include<vector>
using namespace std;

class MyHashMap {
public:
    vector<pair<int,int>> v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key) v[i].second=value;
        }
        v.push_back({key,value});
    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key) return v[i].second;
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key) {
                v[i].second=-1;
            }
        }
    }
};

