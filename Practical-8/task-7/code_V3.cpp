#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
        int c;
        c=*a;
        *a=*b;
        *b=c;
}

int main()
{
        int a=10,b=20;

        cout<<"\nBefore Swapping, A = "<<a<<"\tB = "<<b<<"\n";

        swap(&a,&b);
        
        cout<<"After Swapping, A = "<<a<<"\tB = "<<b<<"\n";
}
