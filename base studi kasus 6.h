#include <iostream>
using namespace std;

class Dosen
{
  public : 
      void input();
      void proses();
      void output();

  private : 
      string nama, matkul;
      float tugas,uts,uas,akhir;
      int ntugas, nuts, nuas;
};

void Dosen::input(){
  cout <<"Masukkan nama MAHASISWA :";
  cin >>nama;
  cout <<"Masukkan nama MATA KULIAH :";
  cin >>matkul;
  cout <<"Masukkan Nilai Tugas : ";
  cin >>ntugas;
  cout <<"Masukkan Nilai Uts : ";
  cin >>nuts;
  cout <<"Masukkan Nilai Uas : ";
  cin >>nuas;
}

void Dosen::proses()
{
  tugas = 0.20 * ntugas;
  uts = 0.35 * nuts;
  uas = 0.45 * nuas;
  akhir = ntugas+nuts+nuas;
}

void Dosen::output(){
  cout<<"Nilai Rata Rata";
  cout<<"Tugas : "<<tugas;
  cout<<"Uts : "<<uts;
  cout<<"Uas : "<<uas;
  cout<<endl;
  cout<<"Nilai Akhir : "<<akhir;
}