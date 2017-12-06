#include <iostream>
#include <cstdlib> // untuk menggunakan fungsi srand
#include <ctime> // untuk menggunakan fungsi time
using namespace std;

int main()
{
	int userInput, computer;
	int win = 0;
	int draw = 0;
	int lose = 0;
	char retry;
	
	do 
	{
		cout << "============================ GAME GUNTING, BATU, KERTAS ============================"<< endl;
		cout << endl;
	
		cout << "Pilihan : " << endl;
	
		cout << "1. Gunting" << endl;
		cout << "2. Batu" << endl;
		cout << "3. Kertas" << endl;
		cout << endl;
	
		cout << "Pilihanmu : ";
		cin >> userInput;
		
		srand (time(NULL)); // digunakan untuk merandom nilai yang dikeluarkan komputer
		computer = rand ( ) % 3; // untuk menset batas angka yang akan dikeluarkan komputer
	
		if ( userInput == 1 )
		{
			if ( computer == 0 && userInput == 1 )
			{
				cout << "Pilihan computer : " << "1" << endl;
				cout << endl;
				cout << "========== PERTANDINGAN SERI ==========" <<endl;
				draw++;
			}
			else if ( computer == 1 && userInput == 1 )
			{
				cout << "Pilihan computer : " << "2" << endl;
				cout << endl;
				cout << "========== KAMU KALAH ==========";
				lose++;
			}
			else if ( computer == 2 && userInput == 1 )
			{
				cout << "Pilihan computer : " << "3" << endl;
				cout << endl;
				cout << "========== KAMU MENANG ==========";
				win++;
			}
			cout << endl;
			cout << "MENANG : " << win << endl;
			cout << "SERI : " << draw << endl;
			cout << "KALAH : " << lose << endl;
		}
	
		if ( userInput == 2 )
		{
			if ( computer == 0 && userInput == 2 )
			{
				cout << "Pilihan computer : " << "1" << endl;
				cout << endl;
				cout << "========== KAMU MENANG ==========" <<endl;
				win++; 
			}
			if ( computer == 1 && userInput == 2 )
			{
				cout << "Pilihan computer : " << "2" << endl;
				cout << endl;
				cout << "========== PERTANDINGAN SERI ==========";
				draw++;
			}
			if ( computer == 2 && userInput == 2 )
			{
				cout << "Pilihan computer : " << "3" << endl;
				cout << endl;
				cout << "========== KAMU KALAH ==========";
				lose++;
			}
			cout << endl;
			cout << "MENANG : " << win << endl;
			cout << "SERI : " << draw << endl;
			cout << "KALAH : " << lose << endl;
		}
	
		if ( userInput == 3 )
		{
			if ( computer == 0 && userInput == 3 )
			{
				cout << "Pilihan computer : " << "1" << endl;
				cout << endl;
				cout << "========== KAMU KALAH ==========" <<endl;
				lose++; 
			}
			if ( computer == 1 && userInput == 3 )
			{
				cout << "Pilihan computer : " << "2" << endl;
				cout << endl;
				cout << "========== KAMU MENANG ==========";
				win++;
			}
			if ( computer == 2 && userInput == 3 )
			{
				cout << "Pilihan computer : " << "3" << endl;
				cout << endl;
				cout << "========== PERTANDINGAN SERI ==========";
				draw++;
			}
			cout << endl;
			cout << "MENANG : " << win << endl;
			cout << "SERI : " << draw << endl;
			cout << "KALAH : " << lose << endl;
		}
	cout << endl;
	cout << "LANJUT ? (Y/N) : ";
	cin >> retry;
	system ("cls"); // digunakan untuk mengclear 
	} 
	while ( retry == 'y' || retry == 'Y');
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "==================== END ====================" << endl;
	
}
