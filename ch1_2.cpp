#include <iostream>

double convert_to_kilo(double);

int main()
{
    using namespace std;

    double distance;

    cout << "�Ÿ��� �Է��Ͻÿ�. : ";
    cin >> distance;

    distance = convert_to_kilo(distance);

    cout << "�Ÿ��� " << distance << "ų�ι��� �Դϴ�." << endl;

    return 0;
}

double convert_to_kilo(double distance)
{
    return distance / 1.60934;
}
