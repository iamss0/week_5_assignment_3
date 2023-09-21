#include<iostream>
#include<vector>
using namespace std;

bool subset_of_arr(vector<int> &v1, vector<int> &v2){
    int n1 = v1.size();
    int n2 = v2.size();
    bool check = false;
    for(int i =0; i<n2; i++){
        check = false;
        for(int j = 0; j<n1; j++){
            if(v1[i]==v2[j]) {
                check = true;
                break;
            }
        }
        if(check == false) return false;
    }
    return true;
}

int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(6);
    
    
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(10);
    v2.push_back(1);
    
    if(subset_of_arr(v1,v2) == true) cout<<"subset yess";
    else cout<<"subset no";
    
}
