#include "../base.h"
using namespace std;

void Dosen::proses()
{
  tugas = 0.20 * ntugas;
  uts = 0.35 * nuts;
  uas = 0.45 * nuas;
  akhir = ntugas+nuts+nuas;
}

int main ()
{
  Dosen dosen;
  dosen.proses();
}