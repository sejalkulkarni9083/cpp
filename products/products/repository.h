#ifndef __REPOSITORY_H
#define __REPOSITORY_H
#include<iostream>
#include<string>
#include"product.h"
#include "productservice.h"

using namespace std;

    class ProductRepository {

    private:
        Product * products[100];
        int productCount;

    public:

        ProductRepository();

        ~ProductRepository();


        void addProduct(Product* product);

        Product* getProduct(int index) const;

        Product* findProductById(int id) const;

        Product* findProductByTitle(const string& title) const;

        void removeProduct(int index);

        void updateProduct(int index, Product* product);

        void displayProducts() const;

    };
#endif