/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
double toplamı(double sayi1,double sayi2){
    double cevap=(sayi1+sayi2);
    return cevap;
}
double carpma(double sayi1,double sayi2){
  double cevap=(sayi1*sayi2);
  return cevap;
}
double cıkarma(double sayi1,double sayi2){
  double cevap=(sayi1-sayi2);
  return cevap;
}
double bolme(double sayi1,double sayi2){
  int cevap=(sayi1/sayi2);
  return cevap;
}
int main()
{
  string islem[4]={"Toplama","Çıkarma","Çarpma","Bölme",};
    cout<<"Lütfen Bir İşlem Seçin"<<endl;
    cout<<"İşlemler:"<<endl;
    for(int i=0;i<4;i++){
        cout<<islem[i]<<endl;
    }
    string secilenIslem;
    cin>>secilenIslem;
    int sayi1;
    int sayi2;
    if(secilenIslem==islem[0]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"Sonuç:"<<toplamı(sayi1,sayi2)<<endl;
    }
    else if(secilenIslem==islem[1]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"Sonuç:"<<cıkarma(sayi1,sayi2)<<endl;
    }
    else if(secilenIslem==islem[2]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"Sonuç:"<<carpma(sayi1,sayi2)<<endl;
    }
    else if(secilenIslem==islem[3]){
        cin>>sayi1;
        cin>>sayi2;
        cout<<"Sonuç:"<<bolme(sayi1,sayi2)<<endl;
    }
    else{
        cout<<"Hatalı Giriş Yaptınız Tekrar Deneyin";
    }

        
            
    
    return 0;
}