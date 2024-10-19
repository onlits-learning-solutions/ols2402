package ols2402.adt;

public class Utilities {

    public static final String RED = "\u001B[31m";
    public static final String GREEN = "\u001B[32m";
    public static final String BLUE = "\u001B[34m";
    public static final String RESET = "\u001B[37m";

    public static final String BOLD = "\u001B[1m";
    public static final String OFF = "\u001B[21m";

    public static final int ERROR = 0;
    public static final int INFO = 1;
    public static final int NORMAL = 2;

    public static void drawLine(int n, int type) // O(n)
    {
        for (int i = 1; i <= n; i++) {
            if (type == INFO)
                System.out.printf(GREEN + BOLD + "-" + OFF + RESET);
            else if (type == ERROR)
                System.out.printf(RED + BOLD + "-" + OFF + RESET);
            else
                System.out.printf("-");
        }
    }

public static void messageBox(String message, int type) // O(1)
{
    System.out.printf("\n");
    drawLine(message.length(), type);
    if (type == INFO)
    System.out.printf(GREEN + BOLD + "\n%s\n" + OFF + RESET, message);
    else if (type == ERROR)
    System.out.printf(RED + BOLD + "\n%s\n" + OFF + RESET, message);
    else
    System.out.printf("\n%s\n", message);
    drawLine(message.length(), type);
    System.out.printf("\n");
}
}
