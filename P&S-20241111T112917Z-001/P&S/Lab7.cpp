#include<bits/stdc++.h>
using namespace std;
void prg1()
{
    vector<float>x = {10,8,12,15,8,10};
    vector<float>y = {7,4,6,7,9,8};
    float sumx=0,sumy=0;
    int n = x.size();
    for(int i = 0; i<n; i++)
    {
        sumx += x[i];
        sumy += y[i];
    }
    float mx = sumx/n;
    float my = sumy/n;
    float sum1 = 0, sum2 = 0,sum3 = 0;
    for(int i = 0; i<n; i++)
    {
        sum1 += (x[i]-mx)*(y[i]-my);
        sum2 += pow(x[i]-mx,2);
        sum3 += pow(y[i]-my,2);
    }
    float r = sum1/(sqrt(sum2*sum3));
    cout<<"Pearson's Correlation Coefficient : "<<r<<endl;
}
void prg2()
{
    vector<float>x = {10,8,12,15,8,10};
    vector<float>y = {7,4,6,7,9,8};
    vector<float>xx = x;
    vector<float>yy = y;
    sort(xx.begin(),xx.end(),greater<float>());
    sort(yy.begin(),yy.end(),greater<float>());
    int n = x.size();
    map<float,float>xfreq,yfreq,xcount,ycount;
    for(int i = 0; i<n; i++)
    {
        xfreq[xx[i]]++;
        yfreq[yy[i]]++;

    }
    for(int i = 0; i<n; i++)
    {
        int r1 = xcount[xx[i]];
        int r2 = ycount[yy[i]];
        xcount[xx[i]] = r1 + i + 1;
        ycount[yy[i]] = r2 + i + 1;
    }
    vector<float>distx,disty;
    for(int i = 0; i<n; i++)
    {
        distx.push_back(xcount[x[i]]/xfreq[x[i]]);
        disty.push_back(ycount[y[i]]/yfreq[y[i]]);
    }
    float sumd = 0;
    for(int i = 0; i<n; i++)
    {
        sumd += pow(distx[i]-disty[i],2);
    }

    float Spearman = 1 - (6*sumd/(n*n*n - n));
    cout<<"Spearman's Correlation Coefficient : "<< Spearman<<endl;
}
int main()
{
    prg1();
    prg2();
    return 0;
}
