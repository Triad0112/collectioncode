#include <iostream>
using namespace std;

int main()
{
    int total_laba, opsi, jumlah_kartu;
    cout << "Masukkan jumlah kartu yang akan diinput: ";
    cin >> jumlah_kartu;
    string nomorkartu[jumlah_kartu] = {};
    string provider[jumlah_kartu] = {};
    int hargabeli[jumlah_kartu] = {};
    int hargajual[jumlah_kartu] = {};
    int laba[jumlah_kartu] = {};
    total_laba=0;
    do
    {
        cout << "Pilih apa yang ingin dilakukan: \n";
        cout << "1. Input Data Kartu \n";
        cout << "2. Lihat Data Kartu \n";
        cout << "Ketik apapun selain opsi diatas untuk menutup program\n";
        cin >> opsi; cout << endl;
        switch (opsi)
        {
            case 1:
                cout << "Inputkan data kartu dengan urutan\n Provider\n Nomor Kartu\n Harga Beli\n Harga Jual\n" << endl;
                for (int i = 1; i <= jumlah_kartu; i++) 
                    {
                    cout << i << ". ";
                    cout << "Provider    = ";
                    cin >> provider[i-1];
                    cout << "   Nomor Kartu = ";
                    cin >> nomorkartu[i-1];
                    cout << "   Harga Beli  = ";
                    cin >> hargabeli[i-1];
                    cout << "   Harga Jual  = ";
                    cin >> hargajual[i-1];
                    laba[i-1] = hargajual[i-1] - hargabeli[i-1];
                    cout << "   Laba        = " << laba[i-1] << "\n" << "\n";
                    }
                for (int i = 0; i < jumlah_kartu; i++)
                    {
                        total_laba = total_laba + laba[i];
                    }
                cout << "Total Laba yang diperoleh adalah: "<< total_laba << endl << endl << endl;
            break;
            case 2:
                for (int i = 0; i < jumlah_kartu; i++) {
                    cout << i+1 << ". ";
                    cout << "Provider    = " << provider[i] << endl;
                    cout << "   Nomor Kartu = " << nomorkartu[i] << endl;
                    cout << "   Harga Beli  = " << hargabeli[i] << endl;
                    cout << "   Harga Jual  = " << hargajual[i] << endl;
                    cout << "   Laba        = " << laba[i] << endl;
                }
                cout << "Total Laba yang diperoleh adalah: "<< total_laba << endl << endl << endl;
                break;
        }
    }while(opsi<3 and opsi>0);
}
