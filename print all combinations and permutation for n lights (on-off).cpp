//print all combinations and permutation for n lights (on/off).

#include<bits/stdc++.h>
using namespace std;

void solve(int index , vector<int>& v)
{
    if(index == 0)
    {
        for(auto i:v)
          cout<<i;
        cout<<"\n";
        
        return;
    }
    vector<int> w = v;  
    
    w.push_back(0); //w is the vector with current light off
    solve(index-1 , w);
    
    v.push_back(1); //v is the vector with current light on
    solve(index-1 , v);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    solve(n,v);
    return 0;
}

//NNS
