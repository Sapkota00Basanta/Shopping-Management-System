#include <iostream>
#include <fsream>

using namespace std;

// Defining Class for shopping cart
class shopping
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
    void removeProduct();
    void generateRecipt();
}

// Defining function logic for menuList Function
void shopping ::menuList()
{
    // We need to define a label for menuList Method
    menuListMethodLabel;
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
        case 1:{
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
            break;
        }
        case 2: {
            customer();
        }
        case 3: {
            // Sucessfull termination of program
            exit(0);
        }
        default: {
            cout << " Please select from gived valid options";
        }
    }
    // Default function to jump to a specific function
    goto menuListMethodLabel;
}

// Working on adminProductManagement Method of class Shopping
void shopping :: adminProductManagement() {
    // Definig Variable for admin method
    adminMethod;
    int selection;
    cout << "\t\t\t\t________________________________________\n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t       Administrator Menu            \n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t________________________________________\n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t|  1) Add the product           |\n";
    cout << "\t\t\t\t|                               |\n";
    cout << "\t\t\t\t|  2) Edit the product          |\n";
    cout << "\t\t\t\t|                               |\n";
    cout << "\t\t\t\t|  2) Delete the product        |\n";
    cout << "\t\t\t\t|                               |\n";
    cout << "\t\t\t\t|  3) Back to Main Menu         |\n";
    cout << "\n\t\t\t\t please select! \n";
    cin>>selection;

    // Using Switch Case conditional statements to handle to add,modify & delete product
    switch (selection) {
        case 1: {
            addProduct();
            break;
        }
        case 2: {
            editProduct();
            break;
        }
        case 3: {
            removeProduct();
            break;
        }
        case 4: {
            menuList();
            break;
        }
        default: {
            cout<<"Invalid Selection";
        }
    }
    goto adminMethod; 
}

// Working on customer Method for management of buyers
void shopping :: customer() {
    customerMethod;
    // Defining Variable for customer methods
    int selection;
    cout << "\t\t\t\t________________________________________\n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t       Customer Portal Menu            \n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t________________________________________\n";
    cout << "\t\t\t\t                                        \n";
    cout << "\t\t\t\t|  1) Buy the product           |\n";
    cout << "\t\t\t\t|                               |\n";
    cout << "\t\t\t\t|  2) Back to Main Menu         |\n";
    cout << "\n\t\t\t Please Select \n ";
    cin>>selection;

    // Using switch case statement for handling customer selection
    switch (selection) {
        case 1: {
            generateRecipt();
            break;
        }
        case 2: {
            menuList();
        }
        default: {
            cout<<"Invalid Selection";
        }
    }
    goto customerMethod;
}