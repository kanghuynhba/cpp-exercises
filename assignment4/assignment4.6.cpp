#include <iostream>
#include <iomanip>
#define pi 3.14159
using namespace std;

int main()
{
    int n;
    double radius,length,width,basez,height;
    
    cout<<"Geometry Calculator"<<endl;
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"Enter your choice (1-4)"<<endl;
    cin>>n;
    if (n < 1 || n > 4) cout<<"Error!";
    else
    {
        if (n == 1)
        {
            cout<<"Enter the radius of a Circle: ";
            cin>>radius;
            cout<<endl;
            cout<<"The Area of a Circle: "<<setw(5)<<setprecision(2)<<fixed<<radius*radius*pi;
        }
        if (n == 2)
        {
            cout<<"Enter length and width of the rectangle: ";
            cin>>length>>width;
            cout<<endl;
            cout<<"The Area of a Rectangle: "<<setw(5)<<setprecision(2)<<fixed<<length*width;
        }
        if (n == 3)
        {
            cout<<"Enter length of the triangle’s base and its height: ";
            cin>>height>>basez;
            cout<<endl;
            cout<<"The Area of a Triangle: "<<setw(5)<<setprecision(2)<<fixed<<0.5*basez*height;
        }
        if (n == 4) exit;
    }
}