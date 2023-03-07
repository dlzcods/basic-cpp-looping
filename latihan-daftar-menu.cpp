#include <iostream>  // library untuk input output stream
#include <vector>     // library untuk menggunakan vector pada program

using namespace std;

int main() {         // fungsi utama dari program

    int jmlh_menu, ttl_pesanan;   // deklarasi variabel bertipe integer
    string nama_menu, nm_customer;  // deklarasi variabel bertipe string
    char ulang;       // deklarasi variabel bertipe karakter
    vector<string> daftar_menu;  // deklarasi variabel bertipe vector yang berisi string

    do {  // perulangan do-while, selama kondisinya true, program akan dijalankan

        cout << "\n=================== Program Menampilkan Daftar Menu ===================\n";  // menampilkan tulisan pada layar
        cout << "\n Masukkan nama customer: ";  // menampilkan tulisan pada layar
        getline(cin, nm_customer);  // mengambil input dari user dan dimasukkan ke dalam variabel nm_customer

        cout << "\n Masukkan jumlah pesanan: ";  // menampilkan tulisan pada layar
        cin >> jmlh_menu;  // mengambil input dari user dan dimasukkan ke dalam variabel jmlh_menu
        cin.ignore();  // menghapus karakter '\n' pada input sebelumnya

        for(int i = 1; i <= jmlh_menu; i++){  // perulangan for, berjalan sebanyak jmlh_menu kali

            cout << " Masukkan nama pesanan ke-" << i << ": ";  // menampilkan tulisan pada layar
            getline(cin, nama_menu);  // mengambil input dari user dan dimasukkan ke dalam variabel nama_menu
            daftar_menu.push_back(nama_menu);  // memasukkan nama_menu ke dalam vector daftar_menu

        }

        cout << "\n=========================== Detail Pesanan ============================\n";  // menampilkan tulisan pada layar
        cout << "\n Daftar Pesanan atas Nama: " << nm_customer << endl;  // menampilkan nama_customer
        for(int i = 0; i < daftar_menu.size(); i++){  // perulangan for, berjalan sebanyak elemen pada vector daftar_menu

            cout << " " << i+1 << ". " << daftar_menu[i] << endl;  // menampilkan nomor pesanan dan nama pesanan

        }

        cout << "\n Total Pesanan: " << jmlh_menu << endl;  // menampilkan jumlah pesanan
        cout << "\n Mau Pesan Lagi? (y/n): ";  // menampilkan tulisan pada layar
        cin >> ulang;  // mengambil input dari user dan dimasukkan ke dalam variabel ulang
        cin.ignore();  // menghapus karakter '\n' pada input sebelumnya

        daftar_menu.clear();  // menghapus semua elemen pada vector daftar_menu

    } while (ulang == 'y'||ulang == 'Y');  // perulangan akan terus berjalan selama ulang bernilai 'y' atau 'Y'

    return 0;  // program selesai dan mengembalikan nilai 0
}
