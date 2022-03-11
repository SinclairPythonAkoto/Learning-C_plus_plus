#include <iostream>

using namespace std;

int main()
{
	// declare variables for hotel
	int quantity;
	int choice;

	// price of hotel items
	double roomPrice = 99.99;
	double pastaPrice = 24.99;
	double burgerPrice = 12.99;
	double noodlesPrice = 19.99;
	double shakePrice = 10.50;
	double chickenPrice = 15.50;

	// declare variables to store quantity of rooms & food items available for the customer to buy
	int quantityRooms=0, quantityPasta=0, quantityBurger=0, quantityNoodles=0, quantityShake=0, quantityChicken=0;

	// rooms and food items sold to customers
	int soldRooms=0, soldPasta=0, soldBurger=0, soldNoodles=0, soldShake=0, soldChicken=0;

	// store total price of rooms and items bought by customers
	int totalRooms=0, totalPasta=0, totalBurger=0, totalNoodles=0, totalShake=0, totalChicken=0;


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
	cin >> quantityBurger;
	cout << "\n Available noodles: ";
	cin >> quantityNoodles;
	cout << "\n Available milkshakes: ";
	cin >> quantityShake;
	cout << "\n Available chicken rolls: ";
	cin >> quantityChicken;


	/*
	   Create a menu that links to the hotel items.
	   This is for the customers to choose from. 
	   Option 7 is for the owner of the hotel.
	 */
	cout << "\n\n\n\t\t\t Paradise Hotel Menu " << endl;
	cout << "\n\t\t\t Please select from  the menu options: " << endl;
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta Bake";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Milkshake";
	cout << "\n6) Chicken Roll";
	cout << "\n7) Information regarding sales and collection ";
	cout << "\n8) Exit" << endl;

	cout << "\n\nPlease enter your choice. " << endl;
	cin >> choice;


	/*
	   Create the functionality so when number is pressed, an order is made.
	   If a customer makes an order of an item and there is not enough, then they are told so;
	   display a message tellign the customer how many items are left.
	 */
	switch(choice)
	{
		case 1:
			cout << "\n\n Enter the number of rooms you want: ";
			cin >> quantity;

			// check if the room is available
			if(quantityRooms - soldRooms >= quantity)
			{
				// update the room itinerary
				soldRooms = soldRooms + quantity;
				totalRooms = totalRooms + quantity * roomPrice;
				cout << "\n\n\t\t" << quantity << " room(s) have been allocated to you." << endl;
			}
			// if there no avaialable rooms left
			else {
				cout << "\n Only " << quantityRooms - soldRooms << " available rooms are left in the hotel." << endl;
				break;
			}

		case 2:
			cout << "\n\n Enter the amount of pasta bakes you would like to order: ";
			cin >> quantity;

			if(quantityPasta - soldPasta >= quantity)
			{
				soldPasta = soldPasta + quantity;
				totalPasta = totalPasta + quantity * pastaPrice;
				cout << "\n\n\t\t" << quantity << " pasta bake(s) have been ordered for you." << endl;
			}
			else {
				cout << "\n Only " << quantityPasta - soldPasta << " pasta bake(s) are available to order." << endl;
				break;
			}

		case 3:
			cout << "\n\n\t\t Enter the amount of burgers you would like to order: ";
			cin >> quantity;

			if(quantityBurger - soldBurger >= quantity)
			{
				soldBurger = soldBurger + quantity;
				totalBurger = totalBurger + quantity * burgerPrice;
				cout << "\n\n\t\t" << quantity << " burger(s) have been ordered for you." << endl;
			}
			else {
				cout << "\n Only " << quantityBurger - soldBurger << " burger(s) are available to order." << endl;
				break;
			}

		case 4:
			cout << "\n\n\t\t Enter the amount of noodles you would like to order: ";
			cin >> quantity;

			if(quantityNoodles - soldNoodles >= quantity)
			{
				soldNoodles = soldNoodles + quantity;
				totalNoodles = totalNoodles + quantity * noodlesPrice;
				cout << "\n\n\t\t" << quantity << " plate(s) of noodles have been ordered for you." << endl;
			}
			else {
				cout << "\n Only " << quantityNoodles - soldNoodles << " plate(s) of noodles are available to order." << endl;
				break;
			}
	}

	return 0;
}
