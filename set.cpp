
#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    int q,i=0;
    int a,b;
    cin>>q;
    while(i<q)
    {
        cin>>a>>b;
        switch(a)
        {
        case 1:
            s.insert(b);
            break;
        case 2:
            s.erase(b);
            break;
        case 3:
            if(s.find(b)!=s.end())
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            break;
        }
        i++;

    }


    return 0;
}

