#include <iostream>

using namespace std;


class Chef{
	public:
		void makeChicken(){
			cout << "The chef makes chicken" << endl;
		}

		void makeSalad(){
			cout << "The chef makes salad" << endl;
		}

		void makeSpecialDish(){
			cout << "The chef makes a special dish" << endl;
		}
};

class ItalianChef : public Chef{
	public:
		void makePasta(){
			cout << "The chef makes pasta" << endl;
		}

		// override
		void makeSpecialDish(){
			cout << "The chef makes chicken parm" << endl;
		}
};

int main()
{
	Chef myChef;
	myChef.makeChicken();

	ItalianChef myItalianChef;
	myItalianChef.makeChicken();

	myItalianChef.makeSpecialDish();
	return 0;
}

