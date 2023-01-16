#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1,y1,x2,y2,distance;
    cout << "Input x1 value: ";
    cin >> x1;
    cout << "Input y1 value: ";
    cin >> y1;
    cout << "Input x2 value: ";
    cin >> x2;
    cout << "Input y2 value: ";
    cin >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2-y1, 2));

    cout << "Distance between the two points is " << distance << endl;

}
