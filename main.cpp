#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int nama, semester, hadir, tdkhadir, tugas, uts, uas;
    int nhadir, ntugas, nuts, nuas, nilai;
    cout << "\n-------------------------------------------";
    cout <<        "\nNama    = Joanzen yoza";
    cout <<        " \nNIM    = 181011400120";
    cout <<        "\nKelas   = 01TPLE002 or V1002";
    cout <<        "\nJurusan = Teknik Informatika";
    cout << "\n-------------------------------------------";
    cout <<           " \nKelulusan Mahasiswa";
    cout << "\n-------------------------------------------";
    cout << "\nHadir  [<40]   :"; cin >> hadir;
    cout << "\nTdkHadir [<14] :"; cin >> tdkhadir;
    cout << "\nTugas  [<100]  :"; cin >> tugas;
    cout << "\nUTS    [<100]  :"; cin >> uts;
    cout << "\nUAS    [<100]  :"; cin >> uas;

    //Mencari Nilai
      nhadir   = hadir*10/100;
      ntugas   = tugas*30/100;
      nuts     = uts*35/100;
      nuas     = uas*35/100;
      nilai    = nhadir+ntugas+nuts+nuas;

      cout <<"\nNilai         :" <<nilai << endl;

      //Mencari grade
        if(nilai <=100 && nilai >75){
            cout << "Grade A || Grade B : Lulus" <<endl;
        }else if(nilai <=75 && nilai >65){
            cout << "Grade C : Lulus bersyarat" <<endl;
        }else if(nilai <=65 && nilai >1){
            cout << "Grade D || Grade E : Tidak Lulus, mengulang ke awal mulai" <<endl;
        }
    main();
    return 0;
}
