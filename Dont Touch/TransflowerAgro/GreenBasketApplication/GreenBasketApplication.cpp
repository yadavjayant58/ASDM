#include "pch.h"
#include <iostream>

//Logical collection of  Types is namespace
// Think of ECommerce Domain
// Online Shopping Experience.....


namespace ECommerce {
	namespace  ProductCatalog {
		class Product {
		public:
			int id;
			int  unitPrice;
			int	 balance;
		};

		class Category {

		};
	}

	namespace ShoppingCart {
		class Item {
			public:
				int itemID;
				int quantity;
				Item() {   }
				Item(int id, int qty){
						this->itemID = id;
						this->quantity = qty;
				}

		};

		class Cart {
			public:
				Cart() { }
				void add(Item item) { 
					//logic for adding 
				}
				void remove(Item item) {
					//logic for removing
				}
		};
	}

	namespace OrderProcessing {
		class Order {
				private: //data members
				public:  // member functions
		};

		class Receipt {

		};
		class Invoice {

		};

		class Transaction {

		};
	}
}
using  namespace ECommerce;

int main()
{
    std::cout << "Hello World!\n"; 

	//ProductCatalog::Product theProduct;
	//OrderProcessing::Order theOrder;
	//ShoppingCart::Cart theCart;
	getchar();
}
