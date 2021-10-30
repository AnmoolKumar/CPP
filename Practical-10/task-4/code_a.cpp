#include <iostream>

using namespace std;
 
class Distance 
{
    private:
        int feet;        
    public:

    Distance() 
    {
        feet = 0;
    }
    Distance(int f) 
    {
        feet = f;
    }
    friend Distance operator <(const Distance&, const Distance&); 
};

Distance operator <(const Distance& d1, const Distance& d2) 
{
    Distance d3;
    if(d1.feet < d2.feet) 
        cout<<"D2 is greater";
    else
        cout<<"D1 is greater";
    return d3;
}


int main() 
{
    int a,b;
    cin>>a>>b;
    Distance D1(a), D2(b);
    D1 < D2;
    return 0;
}
