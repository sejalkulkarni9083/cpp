#include<iostream>
#include<string>
#include"productservice.h"
#include"repository.h"

using namespace std;



ProductService::ProductService(ProductRepository& r) : repo(r) {}

	void ProductService::applyDiscount(int productId, double discount) {
		
	}


	void ProductService::calculateTotalPrice(int productId) {
		
	}

	void ProductService::searchProductByTitle(const string& title) {
		
	}
