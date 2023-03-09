# CPP Looping Exercise
Program Menampilkan Daftar Pesanan dengan C++
<br>
Software: Code Blocks
<br>

## Output


![Screenshot 2023-03-07 174346](https://user-images.githubusercontent.com/73648392/223399883-7d498c03-a7e9-4ac4-be58-d1c594bae290.png)

## Algoritma

``` c++
#include <iostream>       // library untuk input/output standar C++ 
#include <vector>         // library untuk menggunakan container vector

using namespace std;

int main()                 // fungsi utama program
{
    int jmlh_menu, ttl_pesanan;  // variabel untuk menyimpan jumlah menu dan total pesanan
    string nama_menu, nm_customer; // variabel untuk menyimpan nama menu dan nama customer
    char ulang;   // variabel untuk menyimpan pilihan apakah ingin memesan lagi atau tidak
    vector<string> daftar_menu;  // container vector untuk menyimpan nama menu
    vector<int> harga_menu;      // container vector untuk menyimpan harga menu

    do {  // perulangan untuk melakukan pengulangan pemesanan
        cout << "\n=================== Program Menampilkan Daftar Menu ===================\n";  // output judul program
        cout << "\n Masukkan nama customer: "; // output pesan untuk meminta input nama customer
        getline(cin, nm_customer);  // menerima input nama customer menggunakan getline()

        cout << "\n Masukkan jumlah pesanan: ";  // output pesan untuk meminta input jumlah pesanan
        cin >> jmlh_menu;   // menerima input jumlah pesanan
        cin.ignore();      // mengabaikan karakter \n yang tersisa setelah input jmlh_menu

        for(int i = 1; i <= jmlh_menu; i++){   // perulangan untuk menginputkan menu dan harganya
            cout << "\n Masukkan nama pesanan ke-" << i << ": ";  // output pesan untuk meminta input nama menu ke-i
            getline(cin, nama_menu);   // menerima input nama menu menggunakan getline()
            daftar_menu.push_back(nama_menu);   // menyimpan nama menu ke vector daftar_menu

            cout << " Masukkan harga pesanan ke-" << i << ": ";  // output pesan untuk meminta input harga menu ke-i
            int harga;
            cin >> harga;  // menerima input harga menu ke-i
            harga_menu.push_back(harga);  // menyimpan harga menu ke vector harga_menu
            cin.ignore();  // mengabaikan karakter \n yang tersisa setelah input harga
        }

        cout << "\n=========================== Detail Pesanan ============================\n"; // output judul detail pesanan
        cout << "\n Daftar Pesanan atas Nama: " << nm_customer << endl;  // output nama customer

        int total_harga = 0;   // inisialisasi total harga awal
        for(int i = 0; i < daftar_menu.size(); i++){   // perulangan untuk menampilkan detail pesanan
            cout << " " << i+1 << ". " << daftar_menu[i] << " - Rp" << harga_menu[i] << endl;   // output detail pesanan
            total_harga += harga_menu[i];   // menghitung total harga pesanan
        }

        cout << "\n Total Harga: Rp" << total_harga << endl;  // output total harga pesanan
        cout << "\n Mau Pesan Lagi? (y/n): ";  // output pesan untuk menanyakan apakah ingin memesan lagi atau tidak
        cin >> ulang;   // menerima input pilihan untuk memesan lagi atau tidak
        cin.ignore();  // mengabaikan karakter \n yang tersisa setelah input ulang

        daftar_menu.clear();  // membersihkan vector daftar_menu untuk input ulang pesanan
        harga_menu.clear();   // membersihkan vector harga_menu untuk input ulang harga

    } while (ulang == 'y'||ulang == 'Y'); // kondisi perulangan jika input y/Y

    return 0; // stop program
}
        
```

