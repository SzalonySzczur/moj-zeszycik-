#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<string> slowa;
vector<int> liczby;
vector<int> wektory;
int main()
{

    string zmienna;
    int zmienna1;

    ifstream plik("slowa-txt.txt");
    ifstream plik1("liczby2-txt.txt");

    while(!plik.eof())
    {
        plik>>zmienna;
        slowa.push_back(zmienna);

    }
    plik.close();

    while(!plik1.eof())
    {
        plik1>>zmienna1;
        liczby.push_back(zmienna1);

    }
    plik1.close();
    wektory.push_back(liczby, slowa);

    for(auto& wszystko:wektory)
    {
        cout<<wszystko<<" "<<endl;
    }
    return 0;
}

