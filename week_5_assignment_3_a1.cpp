#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(11);
    int n = v.size();

    int x;
    cout<<"enter number X for which you want to find out number of triplets: ";
    cin>>x;


    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if((v[i]+v[j]+v[k]) == x){
                    count++;
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    cout<<count;
}
