package ols2402.classobject;

import java.time.LocalDate;
import java.util.ArrayList;

public class Invoice {
    private int invoiceNo;
    private LocalDate invoiceDate;
    private LocalDate invoiceDueDate;
    private String sellerName;
    private String sellerAddress;
    private String customerName;
    private String customerAddress;
    private ArrayList<InvoiceParticulars> invoiceParticulars;

    public void setInvoiceNo(int invoiceNo) {
        this.invoiceNo = invoiceNo;
    }

    public int getInvoiceNo() {
        return invoiceNo;
    }

    public void setInvoiceDate(LocalDate invoiceDate) {
        this.invoiceDate = invoiceDate;
    }

    public LocalDate getInvoiceDate() {
        return invoiceDate;
    }

    public void setInvoiceDueDate(LocalDate invoiceDueDate) {
        this.invoiceDueDate = invoiceDueDate;
    }

    public LocalDate getInvoiceDueDate() {
        return invoiceDueDate;
    }

    public void setSellerName(String sellerName) {
        this.sellerName = sellerName;
    }

    public void setSellerAddress(String sellerAddress) {
        this.sellerAddress = sellerAddress;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public void setCustomerAddress(String customerAddress) {
        this.customerAddress = customerAddress;
    }

    public void setInvoiceParticulars(ArrayList<InvoiceParticulars> invoiceParticulars) {
        this.invoiceParticulars = invoiceParticulars;
    }

    void printLine(int n) {
        for (int i = 1; i <= n; i++)
            System.out.print("-");

        System.out.println();
    }

    public void getInvoice() {
        final int LINE_SIZE = 60;
        System.out.println("INVOICE");
        printLine(LINE_SIZE);
        System.out.println("Seller Name: " + sellerName);
        System.out.println("Seller Address: " + sellerAddress);
        printLine(LINE_SIZE);
        System.out.println("Invoice No: " + invoiceNo);
        System.out.println("Invoice Date: " + invoiceDate);
        System.out.println("Invoice Due Date: " + invoiceDueDate);
        printLine(LINE_SIZE);
        System.out.println("Customer Name: " + customerName);
        System.out.println("Customer Address: " + customerAddress);
        printLine(LINE_SIZE);
        System.out.printf("%-25s%-10s%-15s%-10s\n", "Description", "Quantity", "Unit Price", "Amount");
        printLine(LINE_SIZE);
        for (InvoiceParticulars invoiceParticular : invoiceParticulars) {
            if (invoiceParticular.getDescription() != null) {
                System.out.printf("%-25s%-10d%15.2f%10.2f", invoiceParticular.getDescription(),
                        invoiceParticular.getQuantity(), invoiceParticular.getUnitPrice(),
                        invoiceParticular.getAmount());
            }
            System.out.println();
        }
        printLine(LINE_SIZE);
        System.out.println("Thankyou!");
        System.out.println("Visit Again...");
    }
}

class InvoiceParticulars {
    private int id; // instance variable
    private String description;
    private int quantity;
    private float unitPrice;
    private float amount;

    public InvoiceParticulars() {
    }

    public InvoiceParticulars(int id, String description, int quantity, float unitPrice) {
        this.id = id;
        this.description = description;
        this.quantity = quantity;
        this.unitPrice = unitPrice;
        this.amount = quantity * unitPrice;
    }

    public int getId() {
        return id;
    }

    public String getDescription() {
        return description;
    }

    public int getQuantity() {
        return quantity;
    }

    public float getUnitPrice() {
        return unitPrice;
    }

    public float getAmount() {
        return amount;
    }
}
