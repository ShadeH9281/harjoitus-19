//Made by Toni Pajukanta,Ryhmä IIO14S1

#include <iostream> 
using namespace std;
int main()
{
	int nopeus[5] = { 0, 0, 0, 0, 0 };
	int ind, enter;
	
	//int *osoitin;
	//osoitin = &luku[0];

	cout << "Nopeusmittari\nLaita nopeudet!" << endl;
	cout << "(alkutila)nopeus = 0" << endl;
	for (ind = 0; nopeus[ind] >= 0; )
	
	{
		
		cin >> nopeus[ind];


		if (nopeus[ind] < 0){
			cout << endl;
			
			break;
		}




		cout << ((nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5) << endl;
		
		ind++;
	
		if (ind == 5) {
			ind = 0;

		}
	}

	
	
}