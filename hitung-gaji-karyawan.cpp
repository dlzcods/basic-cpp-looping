#include <iostream>

using namespace std;

int main()
{
    char ulang;
    string nama, jenis_kelamin;
    int gaji, golongan_gaji, kode_pendidikan,
    jmlh_anak, tunj_pendidikan, tunj_anak, gatot;

    do {
        // input nama dan jenis kelamin
        cout << "-----------------------------------------------------";
        cout << "\n PROGRAM HITUNG GAJI KARYAWAN PT. ADIL SEJAHTERA \n";
        cout << "\n Nama Karyawan: ";
        getline(cin, nama);

        cout << " Jenis Kelamin (L/P): ";
        getline(cin, jenis_kelamin);

        // input golongan, tunj pendidikan, dan tunj anak
        cout << " Golongan [1/2/3]: ";
        cin >> golongan_gaji;

        cout << " Pendidikan [1=SMA/SMK, 2=D3/S1]: ";
        cin >> kode_pendidikan;

        cout << " Jumlah Anak: ";
        cin >> jmlh_anak;

        // Cek Jenis Kelamin
        if (jenis_kelamin == "l"|jenis_kelamin == "L"){
            jenis_kelamin = "Laki Laki";
        } else if(jenis_kelamin == "p"|jenis_kelamin == "P"){
            jenis_kelamin = "Perempuan";
        }

        // gaji sesuai golongan
        if (golongan_gaji == 1){
            gaji = 3000000;
        } else if (golongan_gaji == 2){
            gaji = 4000000;
        } else if (golongan_gaji == 3){
            gaji = 5000000;
        } else {
            cout << " Golongan tidak valid" << endl;
            return 0;
        }


        // tunjangan pendidikan
        if (kode_pendidikan == 1){
            tunj_pendidikan = 250000;
        } else if (kode_pendidikan == 2){
            tunj_pendidikan = 300000;
        } else {
            cout << " Kode pendidikan tidak valid" << endl;
            return 0;
        }


        // tunjangan anak
        if (jmlh_anak == 1){
            tunj_anak = 200000;
        } else if (jmlh_anak == 2){
            tunj_anak = 400000;
        } else if (jmlh_anak > 2){
            cout << "Perusahaan hanya menanggung maksimal 2 anak" << endl;
            return 0;
        } else {
            tunj_anak = 0;
        }

        // menghitung gaji total
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

        cout << "\n Mau menghitung lagi? (y/n): ";
        cin >> ulang;
        cin.ignore();

    } while (ulang == 'y'|ulang == 'Y');

        if(ulang != 'y'|ulang != 'Y') {
            cout << " Selesai Menghitung.....";
        }

    return 0;

}
