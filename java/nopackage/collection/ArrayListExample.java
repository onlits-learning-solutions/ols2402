import java.util.Scanner;
import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        int ch, value;
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>();
        while (true) {
            System.out.printf("\nMAIN MENU\n");
            System.out.printf("1. Display List\n");
            System.out.printf("2. Add to List\n");
            System.out.printf("Enter choice (0 to exit): ");
            ch = scanner.nextInt();
            switch (ch) {
                case 0:
                    System.out.printf("\nBye!\n");
                    System.exit(0);
                    break;
                case 1:
                    System.out.println("\nList Content:");
                    System.out.println("----------------------");
                    for (int item : list) {
                        System.out.println(item);
                    }
                    System.out.println("----------------------\n");
                    break;
                case 2:
                    System.out.printf("\nEnter an integer value: ");
                    value = scanner.nextInt();
                    list.add(value);
                    //add(list, value);
                    break;
                default:
                    System.out.printf("\nInvalide Option\n\n");
            }
        }
    }
}