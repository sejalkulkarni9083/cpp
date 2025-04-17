#ifndef __PRODUCTSERVICE_H
#define __PRODUCTSERVICE_H

#include<iostream>
#include<string>
#include"product.h"
#include"repository.h"


class ProductRepository;

using namespace std;


	class ProductService {

	private:
		ProductRepository & repo;

	public:
		ProductService(ProductRepository & r);

		void applyDiscount(int productId, double discount);
		void calculateTotalPrice(int productID);
		void searchProductByTitle(const string& title);

	};

#endif