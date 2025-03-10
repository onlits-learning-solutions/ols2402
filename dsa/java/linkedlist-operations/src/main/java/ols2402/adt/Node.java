package ols2402.adt;

public class Node {
    private int data;
    private Node next;

    void setData(int data) {
        this.data = data;
    }

    int getData() {
        return data;
    }

    void setNext(Node next) {
        this.next = next;
    }

    Node getNext() {
        return next;
    }
}
