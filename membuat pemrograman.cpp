using namespace std;

int main ()
{
  int i=1,n,jumlah=0,s;
  cout << "Masukkan Banyak Nilai:" << endl;
  cin >> n;

for (i; i<=n; i++){

cout << "Masukkan Nilai Ke-:"<< i << " ";
      cin >> s;   
  if (s%2==0){
  
      jumlah +=s;
      
 	 }
  }
    
   cout << "jumlah :" << jumlah << endl;
}
