#ifndef __PRODUCTSCONTROLLER_H
#define __PRODUCTSCONTROLLER_H

#include <iostream>
#include <string>
#include "repository.h"
#include "productservice.h"
using namespace std;
class ProductController{
	
private:
	
	ProductRepository & repo;
	ProductService & service;

public:
	

	ProductController(ProductRepository& r, ProductService& s);

	void addProduct(int id, const string& title, const string& description, const string& category, int quantity, double price);
	void removeProduct(int index);
	
	void updateProduct(int index, Product* product);
	
	void displayProducts() const;
	
	void applyDiscount(int productId, double discount);

	void calculateTotalPrice(int productId);


	void searchProductByTitle(const string& title);

	void getProductId(int& productId);

	void getProductIndex(int& index);

	void getProductTitle(string& title);
};

#endif