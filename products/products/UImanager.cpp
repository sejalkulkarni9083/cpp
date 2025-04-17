#include <iostream>
#include <string>
#include "repository.h"
#include "UImanager.h"
#include "Product.h"


using namespace std;


void UIManager::displayWelcomeMessage() {
		cout << "Welcome to Transflower Store!" << endl;
	}
	void UIManager::displayGoodbyeMessage() {
		cout << "Thank you for visiting Transflower Store!" << endl;
	}
	void UIManager::displayErrorMessage(const std::string& message) {
		cout << "Error: " << message << endl;
	}
	void UIManager::UIManager::displaySuccessMessage(const string& message) {
		cout << "Success: " << message << endl;
	}


	void UIManager::displayProductDetails(const Product& product) {
		product.display();
	}

	void UIManager::displayProducts(const ProductRepository& repo) {
		repo.displayProducts();
	}

	void UIManager::displayProductNotFound() {
		cout << "Product not found!" << endl;
	}

	void UIManager::displayProductAdded() {
		cout << "Product added successfully!" << endl;
	}


	
	void UIManager::displayMenu() {
		cout << "1. Add Product" << endl;
		cout << "2. Update Product" << endl;
		cout << "3. Remove Product" << endl;
		cout << "4. Display Products" << endl;
	    cout << "5. Apply Discount" << endl;
		cout << "6. Calculate Total Price" << endl;
		cout << "7. Search Product by Title" << endl;
		cout << "8. Exit" << endl;
	}

	void UIManager::getProductDetails(int& id, string& title, string& description, string& category, int& quantity, double& price) {
		cout << "Enter Product ID: ";
		cin >> id;
		cout << "Enter Title: ";
		cin.ignore();
		getline(std::cin, title);
		cout << "Enter Description: ";
		getline(std::cin, description);
		cout << "Enter Category: ";
		getline(std::cin, category);
		cout << "Enter Quantity: ";
		cin >> quantity;
		cout << "Enter Price: ";
		cin >> price;
	}

	void UIManager::getDiscountDetails(int& productId, double& discount) {
		cout << "Enter Product ID: ";
	      cin >> productId;
	    cout << "Enter Discount Percentage: ";
		cin >> discount;
	}


	void UIManager::getProductId(int& productId) {
		cout << "Enter Product ID: ";
		cin >> productId;
	}


	void UIManager::getProductIndex(int& index) {
		cout << "Enter Product Index: ";
		cin >> index;
	}


	void UIManager::getProductTitle(string& title) {
		cout << "Enter Product Title: ";
		cin.ignore();
		getline(std::cin, title);
	}



	void UIManager::handleUserInput(ProductController& controller) {
		/* int choice;
		do {
			displayMenu();
			std::cout << "Enter your choice: ";
			std::cin >> choice;
			switch (choice) {
			case 1: {
				int id, quantity;
				string title, description, category;
				double price;
				getProductDetails(id, title, description, category, quantity, price);
				controller.addProduct(id, title, description, category, quantity, price);
				displayProductAdded();
				break;
			}
			case 2: {
				int index;
				getProductIndex(index);
				Product* product = new Product(0); // Create a temporary product object
				int id, quantity;
				string title, description, category;
				double price;
				getProductDetails(id, title, description, category, quantity, price);
				product->setTitle(title);
				product->setDescription(description);
				product->setCategory(category);
				product->setQuantity(quantity);
				product->setPrice(price);
				controller.updateProduct(index, product);
				break;
			}
			case 3: {
				int index;
				getProductIndex(index);
				controller.removeProduct(index);
				break;
			}
			case 4:
				controller.displayProducts();
				break;
			case 5: {
				int productId;
				double discount;
				getDiscountDetails(productId, discount);
				controller.applyDiscount(productId, discount);
				break;
			}
			case 6: {
				int productId;
				controller.getProductId(productId);
				controller.calculateTotalPrice(productId);
				break;
			}
			case 7: {
				string title;
				getProductTitle(title);
				controller.searchProductByTitle(title);
				break;
			}
			case 8:
				std::cout << "Exiting..." << std::endl;
				break;
			default:
				std::cout << "Invalid choice! Please try again." << std::endl;
			}
		} while (choice != 8);
	}
	*/
	}