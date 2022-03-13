#include <iostream>
#include <fstream>    // to create, read, modify files

using namespace std;

class Shopping
{
	private:
		int productCode;
		double productPrice;
		double discount;
		string productName;

	public:
		void menu();
		void administrator();
		void buyProduct();
		void addProduct();
		void editProduct();
		void removeProduct();
		void shoppingList();
		void reciept();
};

void Shopping :: menu()
{
loginMenu:
	int choice;
	string email;       // needed to login
	string password;    // needed to login

	cout << "\t\t\t\t____________________________________________________\n" << endl;
	cout << "\t\t\t\t                                                    \n" << endl;
	cout << "\t\t\t\t            Local Supermarket Main Menu             \n" << endl;
	cout << "\t\t\t\t                                                    \n" << endl;
	cout << "\t\t\t\t____________________________________________________\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|  1) Administrator                                |\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|  2) Buy Items                                    |\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|  3) Exit                                         |\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|  Please select an option.                        |\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t____________________________________________________\n" << endl;

	cout << "\t\t\t\t  Please select an option. \n";
	cin >> choice << endl;

	switch(choice)
	{
		case 1:
			cout << "\t\t\t Please Login \n" << endl;
			cout "\t\t\t Enter Email: \n";
			cin >> email;
			cout << "\t\t\t Enter password: \n";
			cin >> password;

			if(email=="admin@email.com" && password=="amdin@123")
			{
				administrator();
			}
			else
			{
				cout << "Invalid email/password" << endl;
				// goto loginMenu;
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
	cout << "\t\t\t\t____________________________________________________\n" << endl;
	cout << "\t\t\t\t                                                    \n" << endl;
	cout << "\t\t\t\t               Administrator Menu                   \n" << endl;
	cout << "\t\t\t\t                                                    \n" << endl;
	cout << "\t\t\t\t____________________________________________________\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|____________1) Add the product____________________|\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|____________2) Modify the product_________________|\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|____________3) Delete the product_________________|\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|____________4) Back to main menu__________________|\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t____________________________________________________\n" << endl;

	cout << "\t\t\t\t Please select an option: \n";
	cin >> choice << endl;

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
	cout << "\t\t\t\t____________________________________________________\n" << endl;
	cout << "\t\t\t\t                                                    \n" << endl;
	cout << "\t\t\t\t         Welcome To Your Local Supermarket!         \n" << endl;
	cout << "\t\t\t\t                                                    \n" << endl;
	cout << "\t\t\t\t____________________________________________________\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|____________1) Buy product________________________|\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t|____________2) Go back____________________________|\n" << endl;
	cout << "\t\t\t\t|                                                  |\n" << endl;
	cout << "\t\t\t\t____________________________________________________\n" << endl;

	cout << "\t\t\t\t  Please select an option: \n";
	cin >> choice << endl;

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
	double priceOfProduct;
	double discountOnProduct;
	string nameOfProduct;

	cout << "\n\n\t\t\t Add new product ";
	cout << "\n\n\t Product code of the product: ";
	cin >> productCode;
	cout << "\n\t\t Name of the product: ";
	cin >> productName;
	cout << "\n\t\t Price of the product: ";
	cin >> productName;
	cout << "\n\t\t Discount on the product: ";
	cin >> discount;

	// store product items in a file to be able to show customer list of products available to buy
	shoppingData.open("supermarketProductList.txt", ios::in);    // ios::in --> open file in READ mode

	if(!shoppingData)    // if the file does not exist create a new file
	{
		shoppingData.open("supermarketProductList.txt", ios::app|ios::out);    // ios::app --> append data // ios::out --> open file in WRITE mode
		shoppingData << " " << productCode << " " << productCode << " " << productPrice << " " << discount << "\n";
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
			shoppingData.open("supermarketProductList.txt", ios::app|ios::out);
			shoppingData << " " << productCode << " " << productCode << " " << productPrice << " " << discount << "\n";
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
	double priceOfProduct;
	double discountOnProduct;
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
		shoppingData.open("modifiedProductList.txt", ios::app|ios::out);

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
			shoppingData >> productCode >> productPrice >> discount;
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
				modifiedShoppingData << " " << productCode << " " << productName << " " << productprice << " " << discount << "\n";    // displays all the products except the one you want to remove/delete (because no matching product code)
			}
			shoppingData >> productCode >> productName >> productPrice >> discount;
		}
		shoppingData.close();
		modifiedShoppingData.close();
		remove("supermarketProductList.txt");
		rename("modifiedProductList.txt", "supermarketProductList.txt");

		if(token==0);
		{
			cout << "\n\n Product record not found.";
		}
	}
}
