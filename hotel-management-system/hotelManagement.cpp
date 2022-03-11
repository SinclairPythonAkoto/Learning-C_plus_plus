#include <iostream>

using namespace std;

int main()
{
	// declare variables for hotel
	int quantity;
	int choice;

	// declare variables to store quantity of rooms & food items available for the customer to buy
	int quantityRooms=0, quantityPasta=0, quantityBurger=0, quantityNoodles=0, quantityShake=0, quantityChicken=0;

	// rooms and food items sold to customers
	int soldRooms=0, soldPasta=0, soldBurger=0, soldNoodles=0, soldShake=0, soldChicken=0;

	// store total price of rooms and items bought by customers
	int totalRooms=0, totalPasta=0, totalBurger=0, totalNoodles=0; totalShake=0, totalChicken;


	/* 
	   Ask the hotel employee to complete itinerary of items in the hotel.
	   A list of prompts will be presented for the employee to respond to.
	   Each response is stored in the selected variable.
	 */
	cout << "\n\t Quantity of items in Paradise Hotel";    // \t is to create a horizontal space
	cout << "\n Rooms available: ";
	cin >> quantityRooms;
	cout << "\n Available pasta bakes: ";
	cin >> quantityPasta;
	cout << "\n Available burgers: ";
	cin >> quantityBurgers;
	cout << "\n Available noodles: ";
	cin >> quantityNoodles;
	cout << "\n Available milkshakes: ";
	cin >> quantityShake;
	cout << "\n Available chicken rolls: ";
	cin >> quantityChicken;


	/*
	   Create a menu that links to the hotel items.
	   This is for the customers to choose from. 
	 */
	cout << "\n\t\t\t Paradise Hotel Menu " << endl;
	cout << "\n\t\t\t Please select from  the menu options: " << endl;
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta Bake";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Milkshake";
	cout << "\n6) Chicken Roll";
	cout << "\n7) Information regarding sales and collection ";
	cout << "\n8) Exit";
}
