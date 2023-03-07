#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int jmlh_menu, ttl_pesanan;
    string nama_menu, nm_customer;
    char ulang;
    vector<string> daftar_menu;
    vector<int> harga_menu;

    do {
        cout << "\n=================== Program Menampilkan Daftar Menu ===================\n";
        cout << "\n Masukkan nama customer: ";
        getline(cin, nm_customer);

        cout << "\n Masukkan jumlah pesanan: ";
        cin >> jmlh_menu;
        cin.ignore();

        for(int i = 1; i <= jmlh_menu; i++){
            cout << "\n Masukkan nama pesanan ke-" << i << ": ";
            getline(cin, nama_menu);
            daftar_menu.push_back(nama_menu);

            cout << " Masukkan harga pesanan ke-" << i << ": ";
            int harga;
            cin >> harga;
            harga_menu.push_back(harga);
            cin.ignore();
        }

        cout << "\n=========================== Detail Pesanan ============================\n";
        cout << "\n Daftar Pesanan atas Nama: " << nm_customer << endl;

        int total_harga = 0;
        for(int i = 0; i < daftar_menu.size(); i++){
            cout << " " << i+1 << ". " << daftar_menu[i] << " - Rp " << harga_menu[i] << endl;
            total_harga += harga_menu[i];
        }

        cout << "\n Total Harga: Rp" << total_harga << endl;
        cout << "\n Mau Pesan Lagi? (y/n): ";
        cin >> ulang;
        cin.ignore();

        daftar_menu.clear();
        harga_menu.clear();

    } while (ulang == 'y'||ulang == 'Y');

    return 0;
}
