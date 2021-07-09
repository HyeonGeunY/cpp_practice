#include <iostream>

double convert_to_kilo(double);

int main()
{
    using namespace std;

    double distance;

    cout << "거리를 입력하시오. : ";
    cin >> distance;

    distance = convert_to_kilo(distance);

    cout << "거리는 " << distance << "킬로미터 입니다." << endl;

    return 0;
}

double convert_to_kilo(double distance)
{
    return distance / 1.60934;
}
