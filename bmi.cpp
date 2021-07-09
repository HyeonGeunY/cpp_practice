#include <iostream>

double convert_to_meter(int, int);
double convert_to_kg(int);

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int fit = 0;
    int inch = 0;

    cout << "Ű�� �Է��ϼ��� (fit, inch) : " << endl;
    cout << "____fit\b\b\b\b\b\b\b";
    cin >> fit;
    cout << "____inch\b\b\b\b\b\b\b\b";
    cin >> inch;

    double height = 0;
    height = convert_to_meter(fit, inch);

    cout << "�����Ը� �Է��Ͻÿ� (pound): " << endl;
    cout << "______pound\b\b\b\b\b\b\b\b\b\b\b";

    double pound = 0;
    cin >> pound;

    double kg = 0;
    kg = convert_to_kg(pound);

    double BMI = kg / (height * height);

    cout << "BMI ������ " << BMI << "�Դϴ�." << endl;

    return 0;
}

double convert_to_meter(int fit, int inch)
{
    const int fit_to_inch = 12;
    const double inch_to_meter = 0.0254;

    int height_inch = fit * fit_to_inch + inch;

    cout << fit << "��Ʈ " << inch << "��ġ�� " << height_inch << "��ġ �Դϴ�." << endl;

    double height_meter = height_inch * inch_to_meter;

    cout << height_inch << "��ġ�� " << height_meter << "���� �Դϴ�." << endl;

    return height_meter;
}

double convert_to_kg(int pound)
{
    const double pound_to_kg = 1 / 2.2;

    double kg = pound * pound_to_kg;

    cout << pound << "�Ŀ��� " << kg << "ų�α׷� �Դϴ�." << endl;

    return kg;
}