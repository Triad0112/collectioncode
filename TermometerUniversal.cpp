#include <iostream>
using namespace std;

int main()
{
    int celcius, reamur, fahrenheit, kelvin, opsi;
    cout << "Masukkan suhu Celcius yang akan di konvert ke satuan suhu lain: ";
    cin >> celcius;
    cout << celcius << "°C" << endl;
    do
    {
        cout << "Pilih satuan suhu yang diinginkan:" << endl;
        cout << "1. Reamur" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Kelvin" << endl;
        cout << "4. Mengganti suhu celcius" << endl;
        cout << "Ketik apapun selain opsi diatas untuk menutup program" << endl;
        cin >> opsi;
        switch (opsi)
            {
                case 1:
                    reamur = celcius * 4 / 5;
                    cout << "Suhu " << celcius << "°C dalam satuan Reamur adalah " << reamur << "°R" << endl << endl;
                    break;
                case 2:
                    fahrenheit = (celcius * 9 / 5) + 32;
                    cout << "Suhu " << celcius << "°C dalam satuan Fahrenheit adalah " << fahrenheit << "°F" << endl << endl;
                    break;
                case 3:
                    kelvin = celcius + 273;
                    cout << "Suhu " << celcius << "°C dalam satuan Kelvin adalah " << kelvin << "°K" << endl << endl;
                    break;
                case 4:
                    cout << "Masukkan suhu Celcius yang akan di konvert ke satuan suhu lain: ";
                    cin >> celcius;
                    cout << celcius << "°C" << endl;
                    cout << "Suhu telah diganti menjadi " << celcius << "°C" << endl << endl;
                    break;
                case 5:
                    exit(3);
            }
    }while(opsi<5 and opsi>0);
}
