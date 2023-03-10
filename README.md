# CPP Looping Exercise
Latihan looping C++
<br>
Software: Code Blocks
<br>


## Algoritma 
### Daftar Menu

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

## Output


![Screenshot 2023-03-07 174346](https://user-images.githubusercontent.com/73648392/223399883-7d498c03-a7e9-4ac4-be58-d1c594bae290.png)


<br>

### Hitung Gaji Karyawan

``` c++

#include <iostream>

using namespace std;

int main()
{
    // Deklarasi variabel ulang, nama, jenis_kelamin, gaji, golongan_gaji, kode_pendidikan, jmlh_anak,
    tunj_pendidikan, tunj_anak, dan gatot
    
    char ulang;
    string nama, jenis_kelamin;
    int gaji, golongan_gaji, kode_pendidikan,
    jmlh_anak, tunj_pendidikan, tunj_anak, gatot;

    // Perulangan do-while, program akan berjalan minimal satu kali dan berhenti ketika variabel ulang tidak
    sama dengan 'y' atau 'Y'
    do {
        // Tampilkan judul program
        cout << "-----------------------------------------------------";
        cout << "\n PROGRAM HITUNG GAJI KARYAWAN PT. ADIL SEJAHTERA \n";
        cout << "\n Nama Karyawan: ";
        getline(cin, nama);
        
        // Input nama karyawan
        cout << " Jenis Kelamin (L/P): ";
        getline(cin, jenis_kelamin);

        // Input golongan gaji karyawan
        cout << " Golongan [1/2/3]: ";
        cin >> golongan_gaji;

        // Input kode pendidikan karyawan
        cout << " Pendidikan [1=SMA/SMK, 2=D3/S1]: ";
        cin >> kode_pendidikan;

        // Input jumlah anak karyawan
        cout << " Jumlah Anak: ";
        cin >> jmlh_anak;

       // Cek jenis kelamin, jika 'l' atau 'L', ubah menjadi "Laki Laki", jika 'p' atau 'P', ubah menjadi
       "Perempuan"
        if (jenis_kelamin == "l"|jenis_kelamin == "L"){
            jenis_kelamin = "Laki Laki";
        } else if(jenis_kelamin == "p"|jenis_kelamin == "P"){
            jenis_kelamin = "Perempuan";
        }

        // Hitung gaji sesuai golongan
        if (golongan_gaji == 1){
            gaji = 3000000;
        } else if (golongan_gaji == 2){
            gaji = 4000000;
        } else if (golongan_gaji == 3){
            gaji = 5000000;
        } else {
            // Jika golongan gaji tidak valid, tampilkan pesan error dan keluar dari program
            cout << " Golongan tidak valid" << endl;
            return 0;
        }


       // Hitung tunjangan pendidikan sesuai dengan kode pendidikan karyawan
        if (kode_pendidikan == 1){
            tunj_pendidikan = 250000;
        } else if (kode_pendidikan == 2){
            tunj_pendidikan = 300000;
        } else {
            // Jika kode pendidikan tidak valid, tampilkan pesan error dan keluar dari program
            cout << " Kode pendidikan tidak valid" << endl;
            return 0;
        }


        // Hitung tunjangan anak sesuai dengan jumlah anak karyawan
        if (jmlh_anak == 1){
            tunj_anak = 200000;
        } else if (jmlh_anak == 2){
            tunj_anak = 400000;
        } else if (jmlh_anak > 2){
            // Jika jumlah anak tidak valid, tampilkan pesan error dan keluar dari program
            cout << "Perusahaan hanya menanggung maksimal 2 anak" << endl;
            return 0;
        } else {
            tunj_anak = 0;
        }

        // Menghitung gaji total dari hasil penjumlahan gaji + tunjangan pendidikan + tunjangan anak
        gatot = gaji + tunj_pendidikan + tunj_anak;

        // Tampilkan identitas, dan detail serta total gaji
        cout << "\n-----------------------------------------------------";
        cout << "\n GAJI YANG DITERIMA\n";
        cout << "\n Nama Karyawan: " << nama << endl;
        cout << " Jenis Kelamin: " << jenis_kelamin << endl;
        cout << " Golongan: " << golongan_gaji << endl;
        cout << " Pendidikan: " << kode_pendidikan << endl;
        cout << " Jumlah Anak: " << jmlh_anak << endl;

        cout << "\n Gaji Pokok: " << gaji << endl;
        cout << " Tunjangan Pendidikan: " << tunj_pendidikan << endl;
        cout << " Tunjangan Anak: " << tunj_anak << endl;
        cout << " Total Gaji: " << gatot<< endl;

        // Meminta input user apakah ingin mengulangi program
        cout << "\n Mau menghitung lagi? (y/n): ";
        cin >> ulang;
        cin.ignore();

    } while (ulang == 'y'|ulang == 'Y');

        if(ulang != 'y'|ulang != 'Y') {
            cout << " Selesai Menghitung.....";
        }

    return 0;

}


```
