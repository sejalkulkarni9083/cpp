#include <iostream>
#include <string>

#include "Product.h"
#include "repository.h"
#include "productservice.h"
#include "productcontroller.h"
#include "UImanager.h"


using namespace std;





int main()
{

	cout << "Welcome to Transflower Store!\n";



	ProductRepository repo;
	Product* product1 = new Product(1, "Gerbera", "Wedding Flower", "Flower", 10, 19.99);
	Product* product2 = new Product(2, "Rose", "Valentine Flower", "Flower", 5, 29.99);
	Product* product3 = new Product(3, "Jasmine", "Smelling Flower", "Flower", 20, 39.99);
	Product* product4 = new Product(4, "Mango", " Devgad Alphanso", "Fruit", 15, 49.99);

	repo.addProduct(product1);
	repo.addProduct(product2);
	repo.addProduct(product3);
	repo.addProduct(product4);

	repo.displayProducts();

	cout << "Apply Discount and Calculate Total Price\n";


	ProductService service(repo);
	service.applyDiscount(1, 10); 
	service.calculateTotalPrice(1);
	service.searchProductByTitle("Rose"); 

	cout << endl << "Adding a new product...\n";

	ProductController controller(repo, service);
	controller.addProduct(5, "Tulip", "Spring Flower", "Flower", 8, 15.99);
	controller.displayProducts(); 

	cout << "Updating product at index 1...\n";

	controller.updateProduct(1, new Product(2, "Lily", "Summer Flower", "Flower", 12, 25.99));
	controller.displayProducts(); 


	UIManager uiManager;
	uiManager.displayWelcomeMessage();
	uiManager.handleUserInput(controller); 
	uiManager.displayGoodbyeMessage();
	for (int i = 0; i < 100; i++) {
		delete repo.getProduct(i);
	}

	cout << "Thank you for visiting Transflower Store!\n";
	return 0;
}
