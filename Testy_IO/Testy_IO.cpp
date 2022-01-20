#include "pch.h"
#include "CppUnitTest.h"
#include "../IO - Restauracja/libraries/Wlasciciel.cpp"
#include"../IO - Restauracja/èrÛd≥o.cpp"
#include "../IO - Restauracja/libraries/Stolik.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace TestyIO
{
	TEST_CLASS(TestyIO)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//sprawdzenie poprawnosci funkcji setup, umozliwiajacej dostep do funkcji administratora
			Wlasciciel test;
			setup(&test);
			string expected[5] = { "1234","Ulica w krakowie","Stefan","Zapalka","123456789" };
			string result[5];

				result[0] = test.getHaslo();
				result[1] = test.get_adres();
				result[2] = test.get_imie();
				result[3] = test.get_nazwisko();
				result[4] = test.get_nrTelefonu();

			int expected_1=22;
			int result_1=22;
			for (int i = 0; i < 4; i++)
			{
				Assert::AreEqual(expected[i], result[i]);
			}
			Assert::AreEqual(expected_1, result_1);
		}
		TEST_METHOD(TestMethod2)
		{
			//sprawdzenie poprawnosci funkcji zmiana hasla
			Wlasciciel test;
				test.zmianaHasla("0000");
			string expected = "0000";
			string result = test.getHaslo();
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestMethod3)
		{
			// przepelnienie klasy pracownicy- brak miejsca dla kolejnego pracownika, 
			// aby przeprowadzic poprawnie test nalezy zakomentowac funkcje pokazPracownikow(); 
			// w 21 linijce w pliku Wlasciciel.cpp, spowodowane jest to specyfika funkcji oraz testu.
			string Imie = "Imie", Nazwisko = "Nazwisko", NrTelefonu = "12345", Adres = "Adres";
			int Wiek = 1;
			string expected = "brak miesjca, usun pracownika!\n";
			stringstream buffer;
			streambuf* sbuf = cout.rdbuf();
			cout.rdbuf(buffer.rdbuf());
			for (int i = 0; i <= 30; i++)
			{
				Wlasciciel::dodajPracownika(Imie, Nazwisko, NrTelefonu, Adres, Wiek);
			}
			cout.rdbuf(sbuf);
			cout << buffer.get();
			Assert::AreEqual(expected, buffer.str());
		}


		TEST_METHOD(TestMethod4)
		{
			Stolik test;


			test.nowyStolik("abc", 2);

			string expected = "ID Stolika: abc\nLiczba miejsc: 2\nBrak rezerwacji\n";
			std::stringstream buffer;
			std::streambuf* sbuf = std::cout.rdbuf();
			std::cout.rdbuf(buffer.rdbuf());


			test.statusStolika();

			std::cout.rdbuf(sbuf);
			std::cout << "std original buffer: \n";
			std::cout << buffer.get();


			Assert::AreEqual(expected, buffer.str());
		}
		
	};
}
