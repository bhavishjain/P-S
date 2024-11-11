#include <bits/stdc++.h>
using namespace std;
void least_square(vector<float>x, vector<float>y)
{
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
void prg(vector<float>dosage, vector<float>duration)
{
    float x = 0, y = 0, xy = 0, xx = 0, yy = 0;
    int n = dosage.size();
    for(int i = 0; i < n; i++)
    {
        x += dosage[i];
        xx += dosage[i] * dosage[i];
        y += duration[i];
        yy += duration[i] * duration[i];
        xy += dosage[i] * duration[i];
    }
    float Lxy = xy - x * y / n;
    float Lxx = xx - (x * x) / n;
    float Lyy = yy - (y * y) / n;
    float r = Lxy / sqrt(Lxx * Lyy);
    float mx = x/n;
    float my = y/n;
    float varx = 0, vary = 0;
    for(int i = 0; i<n; i++)
    {
        varx = varx + pow(dosage[i]-mx,2);
        vary = vary + pow(duration[i]-my,2);
    }
    varx = varx/n;
    vary = vary/n;
    float sdx = pow(varx,0.5);
    float sdy = pow(vary,0.5);
    cout<<"Standard Deviation "<<sdx<<" "<<sdy<<endl;
    cout<<"Regression Line Of Y on X : y - "<<my<<" = "<<r*sdy/sdx<<"(x - "<<mx<<")"<<endl;
    cout<<"Regression Line Of X on Y : x - "<<mx<<" = "<<r*sdx/sdy<<"(y - "<<my<<")"<<endl;
    cout<<"Least Square Approximation Line : ";
    least_square(dosage,duration);
}
int main()
{
    vector<float> dosage1 = {3,3,4,5,6,6,7,8,8,9};
    vector<float> duration1 = {9,5,12,9,14,16,22,18,24,22};
    prg(dosage1,duration1);
    cout<<endl<<endl;
    vector<float> dosage2 = {12.5,5,3,5,6.5,6,4,7,5.5,4};
    vector<float> duration2 = {10,26,41,29,27,19,18,20,28,33};
    prg(dosage2,duration2);
    return 0;
}
