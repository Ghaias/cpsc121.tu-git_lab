#include "headers/alee.h"
#include "headers/bfrick.h"
#include <iostream>

using namespace std;

void wiffles_to_inches()
{
	float wiffles;
	cout << "Wiffles: ";
	cin >> wiffles;
	cout << "Inches: " << (wiffles * 4 / 3) << '\n';
}

int main()
{
	short unsigned int choice;
	cout << "0) Convert examples to kilo-examples.\
	\n1) \
	\n2) \
	\n3) \
	\n4) \
	\n5) \
	\n6) \
	\n7) \
	\n8) \
	\n9) \
	\n10) \
	\n11) \
	\n12) \
	\n13) \
	\n14) \
	\n15) \
	\n16) \
	\n17) \
	\n18) \
	\n19) \
	\n";
	cout << "Please pick an option: ";
	cin >> choice;

	switch(choice) {
		case 0:  // BFrick
			examples_to_kiloxamples();
			break;
		case 1:  // LMendoza
			break;
		case 2:  // CNavarro
			break;
		case 3:  // YLi
			break;
		case 4:  // ALee
			wiffles_to_inches();
			break;
		case 5:  // GSrinivasan
			break;
		case 6:  // AAbuelhassan
			break;
		case 7:  // LSchauer
			break;
		case 8:  // KGriffin
			break;
		case 9:  // ISaghatchi
			break;
		case 10:  // THasani
			break;
		case 11:  // LPham
			break;
		case 12:  // NLui
			break;
		case 13:  // JSanrindo
			break;
		case 14:  // BAmaro
			break;
		case 15:  // WCovington
			break;
		case 16:  // LWalcher
			break;
		case 17:  // SChacon
			break;
		case 18:  // TLopez
			break;
		case 19:  // MAminy
			break;
	}

	return 0;
}
