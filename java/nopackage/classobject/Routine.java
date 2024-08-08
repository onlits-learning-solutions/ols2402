class Period {
    private int id;
    private String day;
    private String time;
    private String subject;
    private String teacher;

    Period(int id, String day, String time, String subject, String teacher) {
        this.id = id;
        this.day = day;
        this.time = time;
        this.subject = subject;
        this.teacher = teacher;
    }

    void setId(int id) // setter method
    {
        this.id = id;
    }

    int getId() // getter method
    {
        return id;
    }

    void setDay(String day) {
        this.day = day;
    }
}

public class Routine {
    Period period1 = new Period(1, "Monday", "9:00-10:00", "Hindi", "RKS"); //explicit call to constructor

    void setRoutine() {
        // period1.setPeriod(1, "Monday", "9:00-10:00", "Hindi", "RKS");
    }

    public static void main(String[] args) {

    }
}
