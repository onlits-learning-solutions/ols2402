class Period {
    private int id;
    private String day;
    private String time;
    private String subject;
    private String teacher;

    void setPeriod(int id, String day, String time, String subject, String teacher) {
        this.id = id;
    }

    void setId(int id) // setter method
    {
        this.id = id;
    }

    int getId() // getter method
    {
        return id;
    }
}

public class Routine {
    Period periods; // here periods is just a reference variable not an object

    void setRoutine() {

    }

    void setDay(String day) {
        day = day;
    }

    public static void main(String[] args) {

    }
}
