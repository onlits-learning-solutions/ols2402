package ols2402.lms;

import java.sql.Connection;
import java.sql.DriverManager;
import java.util.Scanner;

public class Book {
    private int id;
    private String title;
    private String author;

    public void newBook() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter title: ");
        title = scanner.nextLine();
        System.out.print("Enter author: ");
        author = scanner.nextLine();

        String url = null;
        Connection connection = DriverManager.getConnection(url);
    }
}