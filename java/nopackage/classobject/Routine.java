class Period {
    private int id;
    private String day;
    private String time;
    private String subject;
    private String teacher;
}

public class Routine {
    Period periods;     //here periods is just a reference variable not an object
    
    void setRoutine() {
        periods.id = 1;
    }
    public static void main(String[] args) {

    }
}
