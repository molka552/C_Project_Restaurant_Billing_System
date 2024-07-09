# C_Project_Restaurant_Billing_System

A C-based restaurant billing system designed for efficient order processing and invoicing. This project allows users to input customer details, order items with quantities and prices, and generates comprehensive invoices that include subtotal, discounts, and taxes (CGST, SGST). Invoices can be saved to a file (`RestaurantBill.dat`) for record-keeping.

## Features

- :computer: Input customer details and order items.
- :receipt: Generate detailed invoices with subtotal, discounts, and taxes.
- :floppy_disk: Save invoices to file (`RestaurantBill.dat`).

## Usage

To use the restaurant billing system:

1. **Compile:**
   Compile the source files using a C compiler (e.g., GCC).

   ```bash
   gcc main.c bill_template.c data.c -o restaurant_billing
   ```

2. **Run:**
   Execute the compiled executable to start processing orders.

   ```bash
   ./restaurant_billing
   ```

3. **Instructions:**
   Follow on-screen prompts to enter customer information, order details, and choose whether to save the invoice.

## Screenshots

![Screenshot](images/screenshot.png)

## Future Enhancements

- :sparkles: Integration of a graphical user interface (GUI) for easier interaction.
- :shield: Enhanced error handling and input validation.

## Contributing

Contributions are welcome! Fork this repository, make your changes, and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

