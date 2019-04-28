#include <iostream>
using namespace std;

struct data{
char barang[20];};
data batas[100];
int a,jumlah,k,z;
int cari,pernyataan;

void input()
{  cout<<"\nJumlah Data Yang Akan diinput : ";cin>>jumlah;
   z=0;
   for(k=0;k<jumlah;k++){
   z=z+1;
   cout<<"\nData   ke-"<<z<<endl;
   cout<<"\nBarang  : ";cin>>batas[a].barang;
   a++;}}



void sorting()
{int v,u;
 cout<<"\n--------------------| SORTING DATA ASCENDING |---------------------------------\n";
 cout<<"\n|| BARANG ||\n";
 v=0;
 for(u=0;u<a;u++)
 {v=v+1;
  cout<<"\n------------------------------------------------------------------------------\n";
  cout<<"|| "<<v<<" || ";
  cout<<batas[u].barang;cout<<" ||";

  }
  cout<<"\n------------------------------------------------------------------------------ ";}

void hapus()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 ;
 cout<<"\n\nData ke-"<<x<<" Terhapus \n\n";
 ;
}

void edit(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"\nBarang  : ";cin>>batas[l].barang;

sorting();
}
void  searching (){

z=0;
   for(k=0;k<jumlah;k++){
   z=z+1;
   cout<<"\nData ke-"<<z<<endl;
   cout<<"Barang  : ";cin>>batas[a].barang;

   a++;}
   cout<<"masukan cari nama : ";cin>>cari;
   pernyataan=0;
   for(k=0;k<jumlah;k++)
   {
       if('batas[a].barang'==cari){
        pernyataan=1;
        cout<<"data indeks ke-"<<z;
       }

   }
        if(pernyataan=0){
            cout<<"judek deras ";
        }

}


int main()
{     int pilih;
 char w;

  awal:
  cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. sorting ascending";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Searching";
  cout<<"\n6. Exit";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {input();goto awal;}
  if(pilih==2)
   {hapus();goto awal;}
  if(pilih==3)
   {sorting();goto awal;}
  if(pilih==4)
   {edit();goto awal;}
  if(pilih==5)
   {searching();goto awal;}
  if(pilih==6)
   {
    cout<<"\nAPAKAH ANDA YAKIN KELUAR DARI PROGRAM [Y] / [T] : ";cin>>w;
    if(w=='y'||w=='Y')
    {
     cout<<"\n\n-------------- PROGRAM SELESAI -------------------";}
    if(w=='t'||w=='T')
           {goto awal;}}
  else
   {cout<<"Pilihan 1-5";goto awal;}
cout<<"\n\tJUDEK DERAS\n\t";
}
