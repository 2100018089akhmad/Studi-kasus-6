#include "../base.h"
using namespace std;

void Dosen::output(){
  cout<<"Nilai Rata Rata";
  cout<<"Tugas : "<<tugas;
  cout<<"Uts : "<<uts;
  cout<<"Uas : "<<uas;
  cout<<endl;
  cout<<"Nilai Akhir : "<<akhir;
}
int main (){
  Dosen dosen;
  dosen.output();
}