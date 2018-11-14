#include <iostream>
#include <conio.h>
#include <stdio.h>


using name space std; 

int pil; void pilih(); 
void buat_baru(); 
void tambah_belakang(); 
void tambah_depan(); 
void hapus_belakang(); 
void hapus_depan(); 
void tampil(); 
struct node 
{
char nama [20];
int umur;
float tinggi;
node *prev, *next;
}; 
node *baru, *head=NULL, *tail=NULL,*hapus,*bantu; 
void main()
 {
do
     {
clrscr();
cout<<"MENU DOUBLE LINKEDLIST"<<endl;
cout<<"1. Tambah Depan"<<endl;
cout<<"2. Tambah Belakang"<<endl;
cout<<"3. Hapus Depan"<<endl;
cout<<"4. Hapus Belakang"<<endl;
cout<<"5. Tampilkan"<<endl;
cout<<"6. Selesai"<<endl;
cout<<"Pilihan Anda : ";
cin>>pil;
pilih();
     }
while(pil!=6);
 } 
void pilih()
 {
if(pil==1)
         tambah_depan();
else if(pil==2)
         tambah_belakang();
else if(pil==3)
         hapus_depan();
else if(pil==4)
         hapus_belakang();
else if(pil==5)
tampil();
else
cout<<"selesai";
 } 
void buat_baru() 
{   
baru = new(node);
cout<<"input nama     : ";cin>>baru->nama;
cout<<"input umur     : ";cin>>baru->umur;
cout<<"input tinggi   : ";cin>>baru->tinggi;
baru->prev=NULL;
baru->next=NULL; 
} 
void tambah_belakang() 
{
     buat_baru();
if(head==NULL)
      {
head=baru;
tail=baru;
      }
else
     {
tail->next=baru;
baru->prev=tail;
tail=baru;
     }
cout<<endl<<endl;
tampil();
} 
void tambah_depan()
 {
     buat_baru();
if(head==NULL)

{
head=baru;
tail=baru;
     }
else
     {
baru->next=head;
head->prev=baru;
head=baru;
     }
cout<<endl<<endl;
tampil();
 }
 
void hapus_depan()
 {
if (head==NULL)
cout<<"Kosong";
else if (head->next==NULL)
     {
hapus=head;
head=NULL;
tail=NULL;
delete hapus;
 }
else
     {
hapus=head;
head=hapus->next;
head->prev=NULL;
delete hapus;
     }
cout<<endl<<endl;
tampil();
 } 
 
void hapus_belakang()
 {
if (head==NULL)
cout<<"Kosong";
else if (head->next==NULL)
 {
hapus=head;
head=NULL;
tail=NULL;
delete hapus;
     }
else
     {
hapus=tail;
tail=hapus->prev;
tail->next=NULL;
delete hapus; 
 }
cout<<endl<<endl;
tampil();
} 
void tampil()
 {
if (head==NULL)
cout<<"Kosong";
else
      {
bantu=head;
while(bantu!=NULL)
      {
cout<<"  nama   : "<<bantu->nama;
cout<<"  umur   : "<<bantu->umur;
cout<<"  tinggi : "<<bantu->tinggi<<endl;
bantu=bantu->next;
          }
      }
getch();
} 

