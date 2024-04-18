#include <iostream>
using namespace std;
int main()
{
	int pilih;
	float a, b, total_beli, total_bayar, diskon;
	cout<<"||============||" <<"\n";
	cout<<"||TOKO SEMBAKO||" <<"\n";
	cout<<"||============||" <<"\n";
	cout<<"HARGA BARANG 1 = Rp."; cin>>a;
	cout<<"HARGA BARANG 2 = Rp."; cin>>b;
	total_beli = a + b;
	cout<<"\n";
	
	if (total_beli>=200000){
	
	diskon = 0.5 *total_beli;
	}else diskon = 0;
	cout<<"||============================||" <<"\n";
	cout<<"T0TAL BELI Rp. " <<total_beli;
	cout<<"\n";
	cout<<"DISKON 50% = Rp." <<diskon;"\n";
	cout<<"\n";
	total_bayar = total_beli-diskon;
	cout<<"HARGA YANG HARUS ANDA BAYAR ADALAH Rp." <<total_bayar;"\n";
	cout<<"\n";
	if (total_bayar >=200000){
	cout<<"TERIMA KASIH SUDAH BELANJA DI TOKO INI";
	}else cout<<"BELANJA LEBIH LAGI UNTUK DISKON LEBIH BANYAK";
	cout<<"\n";
	cout<<"||============================||" <<"\n";
	system("pause");
	
	return 0;
}
