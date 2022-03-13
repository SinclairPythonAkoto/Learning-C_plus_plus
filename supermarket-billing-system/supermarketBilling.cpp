#include <iostream>
#include <fstream>    // to create, read, modify files

using namespace std;

class Shopping
{
	private:
		int productCode;
		float productPrice;
		float discount;
		string productName;

	public:
		void menu();
		void administrator();
		void buyProduct();
		void addProduct();
		void editProduct();
		void removeProduct();
		void shoppingList();    // list of products within the supermarket
		void reciept();
};

void Shopping :: menu()
{
loginMenu:
	int choice;
	string email;       // needed to login
	string password;    // needed to login

	cout << "\t\t\t\t____________________________________________________\n";
	cout << "\t\t\t\t                                                    \n";
	cout << "\t\t\t\t            Local Supermarket Main Menu             \n";
	cout << "\t\t\t\t                                                    \n";
	cout << "\t\t\t\t____________________________________________________\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|  1) Administrator                                |\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|  2) Buy Items                                    |\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|  3) Exit                                         |\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|  Please select an option.                        |\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t____________________________________________________\n";

	cout << "\t\t\t\t  Please select an option. \n";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cout << "\t\t\t Please Login \n" << endl;
			cout << "\t\t\t Enter Email: \n";
			cin >> email;
			cout << "\t\t\t Enter password: \n";
			cin >> password;

			if(email=="admin@email.com" && password=="admin@123")
			{
				administrator();
			}
			else
			{
				cout << "Invalid email/password" << endl;
			}
			break;

		case 2:
			buyProduct();
			break;

		case 3:
			exit(0);
			break;

		default:
			cout << "Please select a valid number from the options listed." << endl;

	}
	goto loginMenu;
}

void Shopping :: administrator()
{
adminMenu:
	int choice;
	cout << "\t\t\t\t____________________________________________________\n";
	cout << "\t\t\t\t                                                    \n";
	cout << "\t\t\t\t               Administrator Menu                   \n";
	cout << "\t\t\t\t                                                    \n";
	cout << "\t\t\t\t____________________________________________________\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|____________1) Add the product____________________|\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|____________2) Modify the product_________________|\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|____________3) Delete the product_________________|\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|____________4) Back to main menu__________________|\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t____________________________________________________\n";

	cout << "\t\t\t\t Please select an option: \n";
	cin >> choice;

	switch(choice)
	{
		case 1:
			addProduct();
			break;

		case 2:
			editProduct();
			break;

		case 3:
			removeProduct();
			break;

		case 4:
			menu();
			break;

		default:
			cout << "Invalid choice!" << endl;

	}
	goto adminMenu;
}

void Shopping :: buyProduct()
{
buyerMenu:
	int choice;
	cout << "\t\t\t\t____________________________________________________\n";
	cout << "\t\t\t\t                                                    \n";
	cout << "\t\t\t\t         Welcome To Your Local Supermarket!         \n";
	cout << "\t\t\t\t                                                    \n";
	cout << "\t\t\t\t____________________________________________________\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|____________1) Buy product________________________|\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t|____________2) Go back____________________________|\n";
	cout << "\t\t\t\t|                                                  |\n";
	cout << "\t\t\t\t____________________________________________________\n";

	cout << "\t\t\t\t  Please select an option: \n";
	cin >> choice;

	switch(choice)
	{
		case 1:
			reciept();
			break;

		case 2:
			menu();
			break;

		default:
			cout << "Invalid choice" << endl;
	}
	goto buyerMenu;
}

void Shopping :: addProduct()
{
    addProductOptions:
	fstream shoppingData;    // data/file object
	int codeOfProduct;
	int token = 0;
	float priceOfProduct;
	float discountOnProduct;
	string nameOfProduct;

	cout << "\n\n\t\t\t Add new product ";
	cout << "\n\n\t Product code: ";
	cin >> productCode;
	cout << "\n\t\t Name of the product: ";
	cin >> productName;
	cout << "\n\t\t Price of the product: ";
	cin >> productPrice;
	cout << "\n\t\t Discount on the product: ";
	cin >> discount;

	// store product items in a file to be able to show customer list of products available to buy
	shoppingData.open("supermarketProductList.txt", ios::in);    // ios::in --> open file in READ mode

	if(!shoppingData)    // if the file does not exist create a new file
	{
		shoppingData.open("supermarketProductList.txt", ios::app|ios::out);    // ios::app --> append data // ios::out --> open file in WRITE mode
		shoppingData << " " << productCode << " " << productName << " " << productPrice << " " << discount << "\n";
		shoppingData.close();
	}
	else    // if the file exists 
	{
		shoppingData >> codeOfProduct >> nameOfProduct >> priceOfProduct >> discountOnProduct;    // initialising index of file

		while(!shoppingData.eof())    // eof --> end of file; needed to loop through all of data in file
		{
			if(codeOfProduct == productCode)
			{
				token++;
			}
			shoppingData >> codeOfProduct >> nameOfProduct >> priceOfProduct >> discountOnProduct;
		}
		shoppingData.close();

	
	if(token==1)    // if the product code already exists
		goto addProductOptions;
	else
	{
		shoppingData.open("supermarketProductList.txt", ios::out|ios::app);
		shoppingData << " " << productCode << " " << productName << " " << productPrice << " " << discount << "\n";
		shoppingData.close();
	}
}
	cout << "\n\n\t\t Producted recored!";

}

void Shopping :: editProduct()
{
	fstream shoppingData, modifiedShoppingData;
	int productKey;    // the productCode admin wants to change
	int token = 0;
	int newProductCode;
	float priceOfProduct;
	float discountOnProduct;
	string nameOfProduct;

	cout << "\n\t\t\t Modify product record";
	cout << "\n\t\t\t Product code: ";
	cin >> productKey;

	shoppingData.open("supermarketProductList.txt", ios::in);
	if(!shoppingData)
	{
		cout << "\n\n Product file does not exist." << endl;
	}
	else
	{
		modifiedShoppingData.open("modifiedProductList.txt", ios::app|ios::out);

		shoppingData >> productCode >> productName >> productPrice >> discount;
		while(!shoppingData.eof())
		{
			if(productKey == productCode)
			{
				cout << "\n\t\t Product new code: ";
				cin >> newProductCode;
				cout << "\n\t\t Name of the product: ";
				cin >> nameOfProduct;
				cout << "\n\t\t Price: ";
				cin >> priceOfProduct;
				cout << "\n\t\t Discount: ";
				cin >> discountOnProduct;
				modifiedShoppingData << " " << newProductCode << " " << nameOfProduct << " " << priceOfProduct << " " << discountOnProduct << "\n";
				cout << "\n\n\t\t Product record edited.";
				token++;
			}
			else
			{
				modifiedShoppingData << " " << productCode << " " << productName << " " << productPrice << " " << discount << "\n";
			}
			shoppingData >> productCode >> productName >> productPrice >> discount;
		}
		// close both files
		shoppingData.close();
		modifiedShoppingData.close();
		/*
		   We now need to rename the modified file back to the original "supermarketProductList.txt" file.
		   To do this we will delete the original file, then rename the new file and give it the name of the previous file.
		   "modifiedProductList.txt" --> "supermarketProductList.txt"
		 */
		remove("supermarketProductList.txt");    // remove the content and file
		rename("modifiedProductList.txt", "supermarketProductList.txt");  // name of file wish to change, new name for file

		if(token == 0)
		{
			cout << "\n\n Product record not found.";
		}
	}
}

void Shopping :: removeProduct()
{
	fstream shoppingData, modifiedShoppingData;
	int productKey;
	int token = 0;
	cout << "\n\t\t Delete product";
	cout << "\n\n\t Product code: ";
	cin >> productKey;
	shoppingData.open("supermarketProductList.txt", ios::in);
	if(!shoppingData)
	{
		cout << "File doesn't exist";
	}

	else
	{
		modifiedShoppingData.open("modifiedProductList.txt", ios::app|ios::out);
		shoppingData >> productCode >> productName >> productPrice >> discount;
		while(!shoppingData.eof())
		{
			if(productCode == productKey)
			{
				cout << "\n\n\t Product deleted successfully";
				token++;
			}
			else
			{
				modifiedShoppingData << " " << productCode << " " << productName << " " << productPrice << " " << discount << "\n";    // displays all the products except the one you want to remove/delete (because no matching product code)
			}
			shoppingData >> productCode >> productName >> productPrice >> discount;
		}
		shoppingData.close();
		modifiedShoppingData.close();
		remove("supermarketProductList.txt");
		rename("modifiedProductList.txt", "supermarketProductList.txt");

		if(token==0)
		{
			cout << "\n\n Product record not found.";
		}
	}
}

void Shopping :: shoppingList()
{
	fstream shoppingData;
	shoppingData.open("supermarketProductList.txt", ios::in);
	cout << "\n\n\t\t\t\t|__________________________________________________|\n";
	cout << "\t\t\t\tProduct Number\t\tName\t\tPrice\n";
	cout << "\n\n\t\t\t\t|__________________________________________________|\n";
	shoppingData >> productCode >> productName >> productPrice >> discount;
	while(!shoppingData.eof())
	{
		cout << "\t\t\t\t" << productCode << "\t\t" << productName << "\t\t" << productPrice << "\n";
		shoppingData >> productCode >> productName >> productPrice >> discount;
	}
	shoppingData.close();
}

void Shopping :: reciept()
{
	fstream shoppingData;

	int arrayOfCodes[100];
	int arrayOfQuantity[100];
	char choice;
	int counter = 0;
	float amount = 0;
	float discount = 0;
	float total = 0;

	cout << "\n\n\t\t\t\t RECIEPT ";
	shoppingData.open("supermarketProductList.txt", ios::in);
	if(!shoppingData)    // check if the supermarket database exists
	{
		cout << "\n\n The sumpermarket produt database is empty.";
	}
	else
	{
		shoppingData.close();    // close the file in order to show the supermarket product list

		shoppingList();
		cout << "\n____________________________________________________\n";
		cout << "\n                                                    \n";
		cout << "\n              Please place your order               \n";
		cout << "\n                                                    \n";
		cout << "\n____________________________________________________\n";
		do
		{
recieptMenu:
			cout << "\n\nEnter the Product Code: ";
			cin >> arrayOfCodes[choice];
			cout << "\n\nEnter the product quantity: ";
			cin >> arrayOfQuantity[choice];
			for(int items=0; items < choice; items++)
			{
				if(arrayOfCodes[choice] == arrayOfCodes[items])
				{
					cout << "\n\n Duplicate product code. Please try again.";
					goto recieptMenu;
				}
			}
			counter++;
			cout << "\n\n Do you want to buy another product?" << endl;
			cout << "\n (Y) Yes, buy another product" << endl;
			cout << "\n (N) No, checkout" << endl;
			cin >> choice;
		}
		while(choice == 'y');
		{
			cout << "\n\n\t\t\t_______________________________RECEIPT_______________________________\n";
			cout << "\nProduct Number\t Product Name\t Product Quantity\t Price\t Amount\t Amount with discount\n";

			for(int items=0; items < choice; items++)
			{
				shoppingData.open("supermarketProductList.txt", ios::in);
				shoppingData >> productCode >> productName >> productPrice >> discount;
				while(!shoppingData.eof())
				{
					if(productCode == arrayOfCodes[items])
					{
						amount = productPrice * arrayOfQuantity[items];
						discount = amount - (amount * discount / 100);
						total = total + discount;
						cout << "\n" << productCode << "\t\t" << productName << "\t\t" << arrayOfQuantity[items] << "\t\t" << productPrice << "\t\t" << amount << "\t\t" << discount;
					}
					shoppingData >> productCode >> productName >> productPrice >> discount;
				}
			}
			//shoppingData.close();
		}
		shoppingData.close();
	}
	cout << "\n\n_________________________________________________________________________";
	cout << "\n Total Amount: " << total;

}

int main()
{
	Shopping customer1;
	customer1.menu();
}
