package ols2402.adt;

import java.util.Scanner;

public class TestLinkedList {
    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();
        Scanner scanner = new Scanner(System.in);

        int ch;
        int linesize = "1.  Display list (Traversal)".length();

        while (true) // Cannot determine complexity as this process does not comply
        { // standard algorithm definition
            System.out.printf(Utilities.BOLD + "\nMAIN MENU\n" + Utilities.OFF);
            Utilities.drawLine(linesize, Utilities.NORMAL);
            System.out.printf("\n1. Display list (Traversal)\n");
            System.out.printf("2. Insert\n");
            System.out.printf("3. Delete\n");
            System.out.printf("4. Search\n");
            System.out.printf("5. Check sort status\n");
            System.out.printf("6. Sort\n");
            System.out.printf("7. Seed Array\n");
            Utilities.drawLine(linesize, Utilities.NORMAL);
            System.out.printf("\nEnter choice [0 to exit]: ");
            ch = scanner.nextInt();

            switch (ch) {
                case 0:
                    System.out.printf(Utilities.BLUE + Utilities.BOLD + "\nbye!\n\n" + Utilities.RESET);
                    System.exit(0);
                    break;
                case 1:
                    linkedList.display();
                    break;
                case 2:
                    // insertMenu(arr, &size);
                    break;
                case 3:
                    // deleteMenu(arr, &size);
                    break;
                case 4:
                    // searchMenu(arr, size);
                    break;
                case 5:
                    // isSorted(arr, size);
                    break;
                case 6:
                    // sortMenu(arr, size);
                    break;
                case 7:
                    // seed(arr, &size);
                    break;
                default:
                    Utilities.messageBox("Invalid Option!", Utilities.ERROR);
                    break;
            }
        }
    }
}
