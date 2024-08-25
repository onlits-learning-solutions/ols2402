package ols2402.classobject;

import java.util.Date;

public class Priyanka {
    public static void main(String[] args) {
        Invoice anisha = new Invoice();
        anisha.setInvoiceNo(1);
        anisha.setInvoiceDate(new Date("2024/08/25"));
        anisha.setInvoiceDueDate(new Date("2024/08/25"));
        anisha.setSellerName("Priyanka Kumari");
        anisha.setSellerAddress("Muzaffarpur, Bihar");
        anisha.setCustomerName("Anisha Kumari");
        anisha.setCustomerAddress("Chapra, Bihar");

        anisha.getInvoice();
    }
}