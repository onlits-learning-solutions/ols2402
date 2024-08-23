package ols2402.classobject;

public class InvoiceMain {
    public static void main(String[] args) {
        Invoice invoice = new Invoice();
        invoice.setInvoiceNo(1);
        System.out.println(invoice);

        invoice.getQuantity(10);
    }
}
