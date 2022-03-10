using namespace std;
#include<iostream>
#include<conio.h>

float Area_Of_Circle(float);

const float Pi = 3.14;

int main()
{
    const int No = 0;
    float R = 0.0;

    cout << "\n Enter Radius Of Circle = ";
    cin >> R;

    cout << "\n Area Of Circle is = " << Area_Of_Circle(R) << endl;

    getch();
    return 0;
}

float Area_Of_Circle(float Rad)
{
    float Area = 0.0;
    Area = Pi * Rad * Rad;

    return Area;
}
