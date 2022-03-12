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
	double totalRooms=0, totalPasta=0, totalBurger=0, totalNoodles=0, totalShake=0, totalChicken=0;


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
    menu:
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
		cout << "\n\n\t\t" << quantity << " room(s) has been allocated to you." << endl;
        }
		// if there no avaialable rooms left
		else 
			cout << "\n Only " << quantityRooms - soldRooms << " available rooms are left in the hotel." << endl;
            break;

		case 2:
			cout << "\n\n Enter the amount of pasta bakes you would like to order: ";
			cin >> quantity;

			if(quantityPasta - soldPasta >= quantity)
			{
				soldPasta = soldPasta + quantity;
				totalPasta = totalPasta + quantity * pastaPrice;
				cout << "\n\n\t\t" << quantity << " pasta bake(s) has been ordered for you." << endl;
			}
			else 
				cout << "\n Only " << quantityPasta - soldPasta << " pasta bake(s) are available to order." << endl;
				break;

		case 3:
			cout << "\n\n Enter the amount of burgers you would like to order: ";
			cin >> quantity;

			if(quantityBurger - soldBurger >= quantity)
			{
				soldBurger = soldBurger + quantity;
				totalBurger = totalBurger + quantity * burgerPrice;
				cout << "\n\n\t\t" << quantity << " burger(s) has been ordered for you." << endl;
			}
			else
				cout << "\n Only " << quantityBurger - soldBurger << " burger(s) are available to order." << endl;
				break;

		case 4:
			cout << "\n\n Enter the amount of noodles you would like to order: ";
			cin >> quantity;

			if(quantityNoodles - soldNoodles >= quantity)
			{
				soldNoodles = soldNoodles + quantity;
				totalNoodles = totalNoodles + quantity * noodlesPrice;
				cout << "\n\n\t\t" << quantity << " plate(s) of noodles has been ordered for you." << endl;
			}
			else
				cout << "\n Only " << quantityNoodles - soldNoodles << " plate(s) of noodles are available to order." << endl;
				break;

		case 5:
			cout << "\n\n Enter the amount of milkshake(s) you would like to order: ";
			cin >> quantity;

			if(quantityShake - soldShake >= quantity)
			{
				soldShake = soldShake + quantity;
				totalShake = totalShake + quantity * shakePrice;
				cout << "\n\n\t\t" << quantity << " milkshak(s) has been ordered for you." << endl;
			}
			else
				cout << "\n Only " << quantityShake - soldShake << " milkeshake(s) are available to order." << endl;
				break;

		case 6:
			cout << "\n\n Enter the amount of chicken roll(s) you would like to order: ";
			cin >> quantity;

			if(quantityChicken - soldChicken >= quantity)
			{
				soldChicken = soldChicken + quantity;
				totalChicken = totalChicken + quantity * chickenPrice;
				cout << "\n\n\t\t" << quantity << " chicken roll(s) has been orderd for you." << endl;
			}
			else
				cout << "\n Only " << quantityChicken - soldChicken << " chicken roll(s) are available to order." << endl;
				break;

			/*
				Display the information of sales and collection.
				How much money collected for the day, and remaining food items left in itinerary.
			*/
		case 7:
			cout << "\n\t\tParadise Hotel Itinerary and Sales " << endl;

			cout << "\n\n Number of rooms available at the start of day: " << quantityRooms << endl;
			cout << "\n\n Number of rooms booked: " << soldRooms << endl;
			cout << "\n\n Remaining rooms available for booking: " << quantityRooms - soldRooms << endl;
			cout << "\n\n Today's intake from booked rooms: " << totalRooms << " GBP" << endl;

			cout << "\n\n Number of pasta bakes available at the start of day: " << quantityPasta << endl;
			cout << "\n\n Number of pasta bakess ordered: " << soldPasta << endl;
			cout << "\n\n Pasta bakes remaining for the day: " << quantityPasta - soldPasta << endl;
			cout << "\n\n Today's intake from pasta bakes: " << totalPasta << " GBP" << endl;

			cout << "\n\n Number of burgers available at the start of day: " << quantityBurger << endl;
			cout << "\n\n Number of burgers ordered: " << soldBurger << endl;
			cout << "\n\n Burgers remaining for the day: " << quantityBurger - soldBurger << endl;
			cout << "\n\n Today's intake from burgers: " << totalBurger << " GBP" << endl;

			cout << "\n\n Number of noodle dishes available at the start of day: " << quantityNoodles << endl;
			cout << "\n\n Number of noodle dishes ordered: " << soldNoodles << endl;
			cout << "\n\n Noodle dishes remaining for the day: " << quantityNoodles - soldNoodles << endl;
			cout << "\n\n Today's intake from noodle dishes: " << totalNoodles << " GBP" << endl;

			cout << "\n\n Number of milkshakes available at the start of day: " << quantityShake << endl;
			cout << "\n\n Number of milkshakes ordered: " << soldShake << endl;
			cout << "\n\n Milkshakes remaining for the day: " << quantityShake - soldShake << endl;
			cout << "\n\n Today's intake from milkshakes: " << totalShake << " GBP" << endl;

			cout << "\n\n Number of chicken rolls available at the start of day: " << quantityChicken << endl;
			cout << "\n\n Number of chiecken rolls ordered: " << soldChicken << endl;
			cout << "\n\n Chicken rolls remaining for the day: " << quantityChicken - soldChicken << endl;
			cout << "\n\n Today's intake from chicken rolls: " << totalChicken << " GBP" << endl;

cout << "\n\n\n Hotel Paradise gross income for the day: " << totalRooms + totalPasta + totalBurger + totalNoodles + totalShake + totalChicken << " GBP" << endl;
			break;

		case 8:
			exit(0);    // exit in 0 miliseconds

		default:
			cout << "\n Please select a valid number from the Paradise Hotel menu. " << endl;

	}
    /*
        A jump statement allows us to jump from one part of the code to another, by using labels.
        Use goto to jump back to the hotel menu after the user has selected their choice.
    */
	goto menu;
    return 0;
}
