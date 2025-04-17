#include<iostream>
#include<string>
#include"productcontroller.h"
#include"repository.h"


using namespace std;

	

ProductController::ProductController(ProductRepository& r, ProductService& s) : repo(r), service(s) {

}

	void ProductController::addProduct(int id, const string& title, const string& description, const string& category, int quantity, double price) {
		Product* product = new Product(id, title, description, category, quantity, price);
		repo.addProduct(product);
	}
	void ProductController::removeProduct(int index) {
		repo.removeProduct(index);
	}
	void ProductController::updateProduct(int index, Product* product) {
		repo.updateProduct(index, product);
	}
	void ProductController::displayProducts() const {
		repo.displayProducts();
	}
	void ProductController::applyDiscount(int productId, double discount) {
		service.applyDiscount(productId, discount);
	}

	void ProductController::calculateTotalPrice(int productId) {
		service.calculateTotalPrice(productId);
	}


	void ProductController::searchProductByTitle(const string& title) {
		service.searchProductByTitle(title);
	}

	void ProductController::getProductId(int& productId) {
		std::cout << "Enter Product ID: ";
		std::cin >> productId;
	}

	void ProductController::getProductIndex(int& index) {
		std::cout << "Enter Product Index: ";
		std::cin >> index;
	}

	void ProductController::getProductTitle(string& title) {
		std::cout << "Enter Product Title: ";
		std::cin.ignore();
		std::getline(std::cin, title);
	}
