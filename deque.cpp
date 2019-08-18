
#include<algorithm>
#include<iostream>
#include<deque>

using namespace std;


int main()
{
    deque<int> d;
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
    d.clear();
    int n,k;
    cin>>n>>k;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        d.push_back(x);
    }


    for(int j=0;j<(d.size()-k+1);j++)
    {
        cout<<*std::max_element(d.begin()+j,d.begin()+j+k);
    }
    }
    return 0;
}
