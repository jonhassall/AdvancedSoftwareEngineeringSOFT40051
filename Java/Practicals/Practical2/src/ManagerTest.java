public class ManagerTest {

    public static void main(String[] args) {

        Employee[] staff = new Employee[3];

        staff[0] = new Employee("Harry Hacker", 35000, 1998);
        staff[1] = new Manager("Carl Cracker", 75000, 2005);
        staff[2] = new Employee("Tony Tester", 38000, 2005);
        int i;
        for (i = 0; i < 3; i++) {
            staff[i].raiseSalary(5);
        }
        for (i = 0; i < 3; i++) {
            staff[i].print();
        }
        
        staff[0].eatBreakfast();
        staff[0].eatLunch();
        staff[0].eatDinner();
        
        Employee.showEmployeeCount();
    }
}

class Employee implements PensionScheme, Meals {

    public Employee(String n, double s, int y) {
        name = n;
        salary = s;
        hireYear = y;
        
        if (employeeCount < 1)
        {
            employeeCount = 1;
        }
        else
        {
            employeeCount++;
        }
        
        this.serialNumber = employeeCount;
    }

    public void print() {
        System.out.println(name + " Serial number: " + serialNumber + " " + salary + " " + hireYear());
    }

    public void raiseSalary(double byPercent) {
        salary *= 1 + byPercent / 100;
    }

    public int hireYear() {
        return hireYear;
    }
    
    public void showEmployeeSerialNumber()
    {
        System.out.println("Employee serial number: " + this.serialNumber);
    }
    
    public static void showEmployeeCount()
    {
        System.out.println("Employee count is currently: " + Employee.employeeCount);
    }
    
    @Override
    public double calculatePension()
    {
        return salary * 0.25;
    }
    
    @Override
    public void eatBreakfast()
    {
        this.weight = this.weight + 0.5;
        System.out.println("Mmm breakfast");
        showWeight();
    }
    
    @Override
    public void eatLunch()
    {
        this.weight = this.weight + 1.1;
        System.out.println("Mmm lunch");
        showWeight();
    }
    
    @Override
    public void eatDinner()
    {
        this.weight = this.weight + 2.0;
        System.out.println("Mmm dinner");
        showWeight();
    }
    
    @Override
    public void showWeight()
    {
        System.out.println(this.name + "'s weight is now: " + this.weight);
    }

    private String name;
    private double salary;
    private int hireYear;
    private double weight;
    
    private static int employeeCount;
    private int serialNumber;
}

class Manager extends Employee {

    public Manager(String n, double s, int y) {
        super(n, s, y);
        secretaryName = "";
    }

    @Override
    public void raiseSalary(double byPercent) {  // add 1/2% bonus for every year of service
        int thisYear = 2020;
        double bonus = 0.5 * (thisYear - hireYear());
        super.raiseSalary(byPercent + bonus);
    }

    public void setSecretaryName(String n) {
        secretaryName = n;
    }

    public String getSecretaryName() {
        return secretaryName;
    }

    private String secretaryName;
}


