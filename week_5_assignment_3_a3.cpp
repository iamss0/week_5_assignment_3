#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(11);
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    int n = v.size();
    bool check = false;
    int i = 0;
    for(; i<n; i++){
        check = false; 
        for(int j = 0; j<n; j++){
            if(v[i] == v[j] && i !=j ){
                check = true;
                break;
            }
        }
        if(check == false) {
        cout<<v[i]<<endl;
        break;
        }
    }
    return 0;
}
