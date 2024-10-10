#include <iostream>
#include <vector>
using namespace std;
vector<int>wspolczynniki;

int wsp(st)
{
    int ws;
    for(int i=0; i<st; i++)
    {
        cout<<"Podaj wspolczynnik: ";
        cin>>ws;
        wspolczynniki.push_back(ws);
        ws=0;
    }
    for(int j=0; j<ws; j++)
    {
        cout<<wspolczynniki<<endl;
    }
}

int main()
{
    int st;
    cout<<"Podaj stopien wielomianu: ";
    cin>>st;
    wsp(st);

    return 0;
}

