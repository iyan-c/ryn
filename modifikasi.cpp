#include <iostream>
using namespace std;

int main ()
{
  int i,n,jumlah;
  cout << "Masukkan Batas Awal:" << endl;
  cin >> i;
  cout << "Masukkan Batas Akhir:" << endl;
  cin >> n;

for (i; i<=n; i++)

  if (i%2==0){
  
      cout << i << endl;
      jumlah += i;
  }
    i+=2;
  
  cout << "Jumlah:" << jumlah << endl;
}




