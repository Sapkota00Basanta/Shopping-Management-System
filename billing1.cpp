#include <iostream>
#include <fsream>

using namespace std;

// Defining Class for shopping cart
class Shopping
{
    // Defining inside class global scoped variables
private:
    int productCode;
    float productPrice;
    float productDiscount;
    string productName;

    // Defining methods for shopping cart
public:
    void menuList();
    void adminProductManagement();
    void customer();
    void addProduct();
    void editProduct();
    void productList();
    void generateRecipt();
}

// Defining function logic for menuList Function
void
Shopping ::menuList()
{
    // Defining variables for menuList
    int selectedProduct;
    string email;
    string password;

    // Output Supermarket Main Menu for selection
    cout << "\t\t\t\t________________________________________\n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t       SuperMarket Main Menu            \n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t________________________________________\n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t|  1) Administrator   |\n";
    cout << "\t\t\t\t|                     |\n";
    cout << "\t\t\t\t|  2) Customer        |\n";
    cout << "\t\t\t\t|                     |\n";
    cout << "\t\t\t\t|  3) Exit            |\n";
    cout << "\t\t\t\t please select!";
    cin >> selectedProduct;

    // Using Swtich case conditional statements for handling admin/customer/exit
    switch (selectedProduct)
    {
    case 1:
        cout << "\t\t\t Please Login!  \n";
        cout << "\t\t\t Enter your email \n";
        cin >> email;
        cout << "\t\t\t Enter password   \n";
        cin >> password;

        // Input user and password validation
        if (email = "admin@gmail.com" &&pasword = "password")
        {
            // Calling the admin function
            adminProductManagement()
        }
        else
        {
            cout << "\t\t\t Invalid Email or Password \n";
        }
    }
}