package ols2402.classobject;

import java.util.Date;

public class Invoice {
    class InvoiceParticulars {
        private int id; // instance variable
        private int quantity;
        private String description;
        private float unitPrice;
        private float amount;
    
        InvoiceParticulars(int id, int quantity, float unitPrice, float amount) {        //Constructor
        
        }

        void setQuantity(int quantity) {

        }

        int getQuantity() {
            return quantity;
        }

        void setDescription(String description) {
            this.description = description;
        }
    }

    private int invoiceNo;
    private Date invoiceDate;
    private String sellerName;
    private String sellerAddress;

    public void setInvoiceNo(int invoiceNo) {
        this.invoiceNo = invoiceNo;
        System.out.println("Invoice Number set.");
    }
}
