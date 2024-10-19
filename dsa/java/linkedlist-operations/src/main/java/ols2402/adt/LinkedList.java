package ols2402.adt;

public class LinkedList {
    private Node head = null;

    public void display() {
        if (head == null) {
            Utilities.messageBox("List empty!", Utilities.ERROR);
            return;
        }

        Node iterator = head;

        System.out.println("Contents of the list");
        Utilities.drawLine("Contents of the list".length(), Utilities.NORMAL);

        while(iterator.getNext() != null) {
            System.out.println(iterator.getData());
        }

        Utilities.drawLine("Contents of the list".length(), Utilities.NORMAL);
    }
}
