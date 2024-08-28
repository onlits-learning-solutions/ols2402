package ols2402.classobject;

import java.util.Date;
import java.util.ArrayList;


public class Priyanka {
    public static void main(String[] args) {
        Invoice anisha = new Invoice();
        anisha.setInvoiceNo(1);
        anisha.setInvoiceDate(new Date("2024/08/26"));
        anisha.setInvoiceDueDate(new Date("2024/08/26"));
        anisha.setSellerName("Priyanka Kumari");
        anisha.setSellerAddress("Muzaffarpur, Bihar");
        anisha.setCustomerName("Anisha Kumari");
        anisha.setCustomerAddress("Chapra, Bihar");

        ArrayList<InvoiceParticulars> invoiceParticulars = new ArrayList<InvoiceParticulars>();
        invoiceParticulars.add(new InvoiceParticulars(1, "Britania Mariegold", 2, 45));
        invoiceParticulars.add(new InvoiceParticulars(2, "Britania Gooday", 5, 35));
        anisha.setInvoiceParticulars(invoiceParticulars);

        anisha.getInvoice();
    }
}