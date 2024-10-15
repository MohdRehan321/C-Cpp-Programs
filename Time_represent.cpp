#include<iostream>
using namespace std;
class Time
{
private:
    int hh,mm,ss;
public:
    void setvalues(int h,int m,int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    void getvalues()
    {
        cout<<hh<<" hr  "<<mm<<" min  "<<ss<<" sec "<<endl;
    }
};
int main()
{
    Time t1,t2;
    t1.setvalues(3,45,20);
    t2.setvalues(4,20,10);
    t1.getvalues();
    t2.getvalues();
    return 0;
}
