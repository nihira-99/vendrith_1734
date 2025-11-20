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





















