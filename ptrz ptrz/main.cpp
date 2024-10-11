#include <iostream>
#include <vector>

using namespace std;

vector<int>wspolczynniki;

void liczenie(int st,int x)
{
    int wynik=0;
    while(st>=0)
    {
        int t=1;
        int fik;

        for(int i=0; i<st; i++)
        {
            t=t*i;
            fik=wspolczynniki[i]*t;
        }
        wynik+=fik;
        st--;
    }
    cout<<"Wynik wielomianu to: "<<wynik<<endl;
}

void wsp(int st)
{
    int ws;
    for(int i=0; i<=st; i++)
    {
        cout<<"Podaj wspolczynnik: ";
        cin>>ws;
        wspolczynniki.push_back(ws);
        ws=0;
    }
    for(int j=0; j<=st; j++)
    {
        cout<<wspolczynniki[j]<<", ";
    }
}

int main()
{
    int x;
    int st;
    cout<<"Podaj stopien wielomianu: ";
    cin>>st;
    cout<<"Podaj x: ";
    cin>>x;
    wsp(st);
    liczenie(st,x);

    return 0;
}
