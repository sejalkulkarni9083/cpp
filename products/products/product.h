
#ifndef __PRODUCT_H
#define __PRODUCT_H
#include<iostream>
#include<string>





using namespace std;

	class Product {

	

	private:


		int productId;
		string title;
		string description;
		string category;
		int quantity;
		double price;

	public:
        Product(int id);

		Product(int id, const string& t, const string& d, const string& c, int q, double p);

		int getProductId() const;
	

		string getTitle() const;
		void setTitle(const string& t);

		string getDescription() const;
		void setDescription(const string& d);

		string  getCategory() const;
		void setCategory(const string& c);

		int getQuantity() const;
		void setQuantity(int q);

		double getPrice() const;
		void setPrice(double p);



		double getTotalPrice() const;
		double getDiscountedPrice(double discount) const;
		
		void display() const;
	};

#endif