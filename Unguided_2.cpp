#include <iostream>
#include <string>

using namespace std;

int hitungVokal(const string &kalimat)
{
    string vokal = "aiueoAIUEO";
    int jumlah_vokal = 0;

    for (char karakter : kalimat)
    {
        for (char v : vokal)
        {
            if (karakter == v)
            {
                jumlah_vokal++;
                break;
            }
        }
    }

    return jumlah_vokal;
}

int main()
{
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    int jumlah = hitungVokal(kalimat);
    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlah << endl;

    return 0;
}
