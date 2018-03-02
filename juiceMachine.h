class cashRegister {
    public:
        int getCurrentBalance() const;
        //Function to show the current amount in the cash register.
        //Postcondition: The value of cashOnHand is returned.

        void acceptAmount(int amountIn);
        //Function to recieve the amount deposited by the customer and
        //update the amount in the register.
        //Postcondition: cashOnHand = cashOnHand + amountIn;

        cashRegister(int cashIn = 500);
        //Constructor
        //Sets the cash in the register to a specific amount.
        //Postcondition: cashOnHand = cashIn;
        //If no value is specified when the object is declared,
        // the default value assigned to cashOnHand is 500.

    private:
        int cashOnHand;
};

class dispenserType {
    public:
        int getNoOfItems() const;
        //Function to show number of items in the machine.
        //Postcondition: the value of numberOfItems is returned.

        int getCost() const;
        //Function to show the cost of the item.
        //Postcondition: the value of cost is returned.

        void makeSale();
        //Function to reduce the number of items by 1.
        //Postcondition: numberOfItems--;

        dispenserType(int setNoOfItems = 50, int setCost =50);
        //Constructor
        //Sets the cost and number of items in the dispenser the the values
        //set by the user.
        //Postcondition: numberOfItems = setNoOfItems;

    private:
        int numberOfItems;
        //Variable to store the number of items in the dispenser.

        int cost;
        //Variable to store the cost of an item
};
