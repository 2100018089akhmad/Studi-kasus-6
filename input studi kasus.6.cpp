#include "../base.h"
using namespace std;

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
int main (){
  Dosen dosen;
  dosen.input();
}