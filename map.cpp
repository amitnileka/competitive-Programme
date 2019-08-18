

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;
    map<string,int>::iterator it;
    int q,i=0;
    int a;
    string x;
    int y;

    cin>>q;
    while(i<q)
    {
        cin>>a;
        switch(a)
        {
        case 1:
            cin>>x>>y;
            m[x]+=y;
            break;
        case 2:
            cin>>x;

            it=m.find(x);
            if(it!=m.end())
                m.erase(it);
            break;
        case 3:
            cin>>x;
            cout<<m[x]<<endl;
            break;
        }
        i++;

    }


    return 0;
}
