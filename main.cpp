#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;
vector<float> d_weX;
vector<float> d_weY;
struct punkt{
double x, y;
};
int main()
{
    ifstream we("wuz2-zad-1-punktytxt.txt");
    punkt p[100];
    int i=0;
    while(!we.eof()){
            we>>p[i].x>>p[i].y;
        d_weX.push_back(p[i].x);
        d_weY.push_back(p[i].y);
        i++;
    }
    we.close();
    cout<<d_weX[0]<<" "<<d_weY[0]<<endl;

    return 0;
}
