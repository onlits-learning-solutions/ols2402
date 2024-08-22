package ols2402.classobject;

import java.util.Date;

public class Invoice {
    class InvoiceParticulars {
        private int id;
        private int quantity;
        private String description;
        private float unitPrice;
        private float amount;

    }

    private int invoiceNo;
    private Date invoiceDate;
    private String sellerName;
    private String sellerAddress;
}
