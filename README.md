# vendrith_1734
PROJECT TITLE
GROCERY STORE MANAGEMENT SYSTEM 
#include <stdio.h>
#define max_length 10
     struct groceryitem{
        int itemID;
    char nameChars[50]; 
    int quantity;
    float price;
     };
     struct groceryitem inventory[max_length];
     int itemCount=0;
void addItem() {
    if (itemCount < max_length){
        struct groceryitem newItem;
        printf("Enter Item ID: ");
        scanf("%d", &newItem.itemID);
        printf("Enter Item Name : ");
        scanf("%s", newItem.nameChars);
        printf("Enter Quantity: ");
        scanf("%d", &newItem.quantity);
        printf("Enter Price: ");
        scanf("%f", &newItem.price);
        inventory[itemCount] = newItem;
        itemCount++;
        printf("Item added successfully!\n");
    } else {
        printf("Inventory is full. Cannot add more items.\n");
    }
}


void displayItems() {
    if (itemCount == 0) {
        printf("No items in inventory.\n");
        return;
    }
    printf("\n--- Current Inventory ---\n");
    printf("itemID\tName\tQuantity\tPrice\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n",inventory[i].itemID,inventory[i].nameChars,inventory[i].quantity,inventory[i].price);
    }
    printf("-------------------------\n");
}


void updateQuantity(){ 
     int exsistingID, newQuantity;
    printf("Enter Item ID to update quantity: ");
    scanf("%d", &exsistingID);
     int found_item = 0;
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].itemID == exsistingID) {
            printf("Enter new quantity for %s: ",inventory[itemCount].nameChars[50]);
            scanf("%d", &newQuantity);
            inventory[i].quantity = newQuantity;
            found_item = 1;
            printf("Quantity updated successfully!\n");
            break;
        }
    }
    if (!found_item) {
        printf("Item not found.\n");
    }
}

int main() {
   int choice;

    do {
        printf("\n--- Grocery Store Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Update Item Quantity\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                updateQuantity();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

        return 0;
}


ABSTRACT

The Grocery Store Management System is a simple console-based application developed in the C programming language.
The main objective of this project is to manage grocery store inventory efficiently by providing basic operations such as adding items, displaying all items, and updating item quantities.

This program uses structures and arrays to store the details of grocery items such as Item ID, Name, Quantity, and Price. It supports up to 10 items and uses menu-driven interaction for user-friendly operation.

This project demonstrates key concepts of C including structures, arrays, loops, conditionals, and functions. It is ideal for beginners who want to develop practical applications using C programming.

FUNCTIONAL REQUIREMENTS
1. Add Item

User can add a new grocery item.

Input required:

Item ID

Item Name

Quantity

Price

Item is stored in the inventory array.

2. Display All Items

Shows the complete list of items in inventory.

Displays:

Item ID

Name

Quantity

Price

3. Update Item Quantity

User enters an existing Item ID.

Program searches for item.

If found:

Asks for new quantity.

Updates item's quantity.

If not found:

Shows “Item not found.”

4. Exit Program

Closes the application safely.

PROJECT FEATURES
Structured Data Storage

Uses struct groceryitem to store item attributes.

Fixed Inventory Size

Stores up to 10 items (configurable using #define max_length 10).

Menu-Driven Interface

Easy navigation using numbered menu options.

Input Validation

Shows appropriate messages for:

Full inventory

No items available

Invalid Item ID

Modular Programming

Function-based design:

addItem()

displayItems()

updateQuantity()

 SCREENSHOTS OF OUTPUT (TEXT SIMULATION)

(These are console-based screenshot examples.)

Screenshot 1: Main Menu
<img width="415" height="154" alt="Screenshot 2025-11-20 102416" src="https://github.com/user-attachments/assets/6be918e2-b92c-4941-9ba0-3b3390c317a7" />

Screenshot 2: Adding an Item
<img width="256" height="137" alt="Screenshot 2025-11-20 102627" src="https://github.com/user-attachments/assets/cff12618-4bfd-4ff4-8e11-7e9911d63eb2" />

Screenshot 3: Display Inventory
<img width="381" height="104" alt="Screenshot 2025-11-20 102700" src="https://github.com/user-attachments/assets/6704469b-66fc-4645-8b0d-2a12426422c3" />

Screenshot 4: Updating Quantity
<img width="371" height="68" alt="Screenshot 2025-11-20 103212" src="https://github.com/user-attachments/assets/256a31a8-ccc2-4a35-b20d-43819abf5fb3" />

Screenshot 5: Item Not Found
<img width="348" height="49" alt="Screenshot 2025-11-20 102730" src="https://github.com/user-attachments/assets/3454babb-8d6b-4199-9293-eea086c484dc" />

Screenshot 6: Exit Program
<img width="257" height="46" alt="Screenshot 2025-11-20 102759" src="https://github.com/user-attachments/assets/830dd6bd-973e-4865-b5d1-0eb9d09fac33" />
