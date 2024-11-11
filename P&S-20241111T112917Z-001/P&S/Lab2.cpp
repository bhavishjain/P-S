#include<bits/stdc++.h>
using namespace std;
void prg1()
{
    vector<float>x = {5,10,15,20,25};
    vector<float>y = {16,19,23,26,30};
    float sumx = 0, sumy = 0, sumx2 = 0, sumy2 = 0, sumxy = 0;
    float n = x.size();
    for(int i = 0; i<n; i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumx2 += x[i]*x[i];
        sumy2 += y[i]*y[i];
        sumxy += x[i]*y[i];
    }
    float b = (sumy - (sumx*sumxy)/sumx2)/(n - (sumx*sumx)/sumx2);
    float a = (sumxy - b*sumx)/sumx2;
    cout<<"y = "<<a<<"x + "<<b<<endl;
}
void prg2()
{
    vector<float>x = {0,1,2,3,4};
    vector<float>y = {1,1.8,3.3,4.5,6.3};
    float sumx = 0, sumy = 0, sumx2 = 0, sumy2 = 0, sumxy = 0;
    float n = x.size();
    for(int i = 0; i<n; i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumx2 += x[i]*x[i];
        sumy2 += y[i]*y[i];
        sumxy += x[i]*y[i];
    }
    float b = (sumy - (sumx*sumxy)/sumx2)/(n - (sumx*sumx)/sumx2);
    float a = (sumxy - b*sumx)/sumx2;
    cout<<"y = "<<a<<"x + "<<b<<endl;
    cout<<"Value at x = 2.5 is :"<<a*2.5 + b<<endl;
}
int main()
{
    prg1();
    prg2();
    return 0;
}
