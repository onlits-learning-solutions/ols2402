package ols2402.classobject;

import java.util.Date;

public class Invoice {
    private int invoiceNo;
    private Date invoiceDate;
    private Date invoiceDueDate;
    private String sellerName;
    private String sellerAddress;
    private String customerName;
    private String customerAddress;
    private InvoiceParticulars[] invoiceParticulars;

    public void setInvoiceNo(int invoiceNo) {
        this.invoiceNo = invoiceNo;
    }

    public int getInvoiceNo() {
        return invoiceNo;
    }

    public void setInvoiceDate(Date invoiceDate) {
        this.invoiceDate = invoiceDate;
    }

    public Date getInvoiceDate() {
        return invoiceDate;
    }

    public void setInvoiceDueDate(Date invoiceDueDate) {
        this.invoiceDueDate = invoiceDueDate;
    }

    public Date getInvoiceDueDate() {
        return invoiceDueDate;
    }

    public void setSellerName(String sellerName) {
        this.sellerName = sellerName;
    }

    public void setSellerAddress(String sellerAddress) {
        this.sellerAddress  = sellerAddress;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public void setCustomerAddress(String customerAddress) {
        this.customerAddress = customerAddress;
    }

    public void getInvoice() {
        System.out.println("INVOICE");
        System.out.println("-------------------------------------------------");
        System.out.println("Seller Name: " + sellerName);
        System.out.println("Seller Address: " + sellerAddress);
        System.out.println("-------------------------------------------------");
        System.out.println("Invoice No: " + invoiceNo);
        System.out.println("Invoice Date: " + invoiceDate);
        System.out.println("Invoice Due Date: " + invoiceDueDate);
        System.out.println("-------------------------------------------------");
        System.out.println("Customer Name: " + customerName);
        System.out.println("Customer Address: " + customerAddress);
        System.out.println("-------------------------------------------------");
        System.out.println("Space for invoice particulars");
        System.out.println("-------------------------------------------------");
        System.out.println("Thankyou!");
        System.out.println("Visit Again...");
    }

    class InvoiceParticulars {
        private int id; // instance variable
        private int quantity;
        private String description;
        private float unitPrice;
        private float amount;
    }
}
