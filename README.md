# SOAL01

"Menghitung Hasil Dari Perulangan"

Deskripsi Algoritma :

1. memulai program 
2. membaca proses X = A dan Y = B 
3. kemudian di input A = 3 dan B = 6 
4. jika X tidak sama dengan Y maka jawabannya adalah benar 
5. jika X lebih kecil dari Y maka jawabannya adalah benar 
6. maka X = X + A = yaitu (X = 3 + 3 = 6) 
7. jika X tidak bisa sama dengan Y jawbannya salah 
8. mencetak hasil "6" 
9. selesai

# Program C++

#include <iostream>
  
using namespace std;

int main()

{

    int x,y,a,b,progres;
    
    cout<< " Masukan Nilai A :";
    
    cin>> a;
    
    cout<< " Masukan Nilai B :";
    
    cin>> b;
    
    progres= true;
    
    x=a;
    
    y=b;
    
    while (progres)
    
    {
    
        if (x!=y)
        
        {
        
            if (x<y)
            
            {
            
                x=x+a;
                
            }
            
            else
            
            {
            
                y=y+b;
                
            }
            
        }
        
        else
        
            {
            
            progres=false;
            
            }
            
    }
    
    cout<< x;
    
}

# Foto Hasil

![img](https://raw.githubusercontent.com/arifhanifanudin/UTS-Algoritma/master/Soal01/hasil01.PNG)

# Soal02

"Menentukan Nilai Perbandingan dengan Input Nim"

Deskripsi Algoritma :

1. mulai program
2. membaca proses N,X,T,Batas;
3. kemudian di input N = 43 X = 20 dan T = N
4. terjadi perulangan nilai T sampai kurang dari sama dengan nilai batas
5. pada looping(perulangan) pertama
6. N = 25
   Hasilnya: T = T + X (T = 25 + 20 = 45) X = X + 10 (X = 20 + 10 = 30
   Pada looping kedua T = T + X (T = 45 + 30 = 75) X = X + 10 (X = 30 + 10 = 40)
   Pada looping ketiga T = T + X (T = 75 + 40 = 115) X = X + 10 (X = 40 + 10 = 50
   Pada looping ke empat T = T + X (T = 115 + 50 = 165) X = X + 10 (X = 50 + 10 = 60) 
   mencetak Hasil T "125"
7. selesai

# Program C++
#include <iostream>

using namespace std;

int main()

{

    int N,X,T,Batas;
    
    cout<< "masukan nilai N :" ;
    
    cin>> N;
    
    cout<< endl;

    Batas = N + 100;
    
    X = 20;
    
    T = N;
    
    while( T <= Batas)
    
    {
    
        T = T + X;
        
        X = X + 10;
        
    }
    
    cout << "Hasilnya Adalah :" << T;
    
}

# Foto hasil

![img](https://raw.githubusercontent.com/arifhanifanudin/UTS-Algoritma/master/Soal02/hasil02.PNG)
