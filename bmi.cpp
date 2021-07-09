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

    cout << "키를 입력하세요 (fit, inch) : " << endl;
    cout << "____fit\b\b\b\b\b\b\b";
    cin >> fit;
    cout << "____inch\b\b\b\b\b\b\b\b";
    cin >> inch;

    double height = 0;
    height = convert_to_meter(fit, inch);

    cout << "몸무게를 입력하시오 (pound): " << endl;
    cout << "______pound\b\b\b\b\b\b\b\b\b\b\b";

    double pound = 0;
    cin >> pound;

    double kg = 0;
    kg = convert_to_kg(pound);

    double BMI = kg / (height * height);

    cout << "BMI 지수는 " << BMI << "입니다." << endl;

    return 0;
}

double convert_to_meter(int fit, int inch)
{
    const int fit_to_inch = 12;
    const double inch_to_meter = 0.0254;

    int height_inch = fit * fit_to_inch + inch;

    cout << fit << "피트 " << inch << "인치는 " << height_inch << "인치 입니다." << endl;

    double height_meter = height_inch * inch_to_meter;

    cout << height_inch << "인치는 " << height_meter << "미터 입니다." << endl;

    return height_meter;
}

double convert_to_kg(int pound)
{
    const double pound_to_kg = 1 / 2.2;

    double kg = pound * pound_to_kg;

    cout << pound << "파운드는 " << kg << "킬로그램 입니다." << endl;

    return kg;
}