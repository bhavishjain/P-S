#include <bits/stdc++.h>
using namespace std;

void prg1()
{
    vector<int> dosage = {3,3,4,5,6,6,7,8,8,9};
    vector<int> duration = {9,5,12,9,14,16,22,18,24,22};
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
    cout << "Correlation coefficient: " << r << endl;
}
void prg2()
{
    vector<float> dosage = {12.5,5,3,5,6.5,6,4,7,5.5,4};
    vector<float> duration = {10,26,41,29,27,19,18,20,28,33};
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
    cout << "Correlation coefficient: " << r << endl;
}
int main()
{
    prg1();
    cout<<endl;
    prg2();
    return 0;
}
