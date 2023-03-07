#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int jmlh_menu, ttl_pesanan;
    string nama_menu, nm_customer;
    char ulang;
    vector<string> daftar_menu;

    do {
    
        cout << "\n=================== Program Menampilkan Daftar Menu ===================\n";
        cout << "\n Masukkan nama customer: ";
        cin >> nm_customer;

        cout << "\n Masukkan jumlah pesanan: ";
        cin >> jmlh_menu;
        cin.ignore();

        for(int i = 1; i <= jmlh_menu; i++){
        
            cout << " Masukkan nama pesanan ke-" << i << ": ";
            getline(cin, nama_menu);
            
            daftar_menu.push_back(nama_menu);

        }

        cout << "\n=========================== Detail Pesanan ============================\n";
        cout << "\n Daftar Pesanan atas Nama: " << nm_customer << endl;
        
        for(int i = 0; i < daftar_menu.size(); i++){
            cout << " " << i+1 << ". " << daftar_menu[i] << endl;
        }

        cout << "\n Total Pesanan: " << jmlh_menu << endl;
        cout << "\n Mau Pesan Lagi? (y/n): ";
        cin >> ulang;

        daftar_menu.clear();

    } while (ulang == 'y'||ulang == 'Y');

    return 0;
}
