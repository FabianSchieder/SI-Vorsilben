#include <iostream>
#include <string>
using namespace std;

string formatNumber(long long);

int main()
{
    long long number;

    cout << "Eingabe: ";
    cin >> number;

    cout << "Formatiert: " << formatNumber(number) << endl;

    return 0;    
}

string formatNumber(long long number)
{
    const char* prefixes[] = {"", "k", "M", "G", "T"};

    int prefixIndex = 0;

    while (number >= 1000 && prefixIndex < 4)
    {
        number /= 1000;
        prefixIndex++;
    }

    string formatedNumber = to_string(number) + prefixes[prefixIndex];

    return formatedNumber;
}
