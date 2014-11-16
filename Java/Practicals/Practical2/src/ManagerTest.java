
public class ManagerTest
{  public static void main(String[] args)
   {

      Employee[] staff = new Employee[3];

      staff[0] = new Employee("Harry Hacker", 35000, 1998);
      staff[1] = new Manager("Carl Cracker", 75000, 2005);
      staff[2] = new Employee("Tony Tester", 38000, 2005);
      int i;
      for (i = 0; i < 3; i++) staff[i].raiseSalary(5);
      for (i = 0; i < 3; i++) staff[i].print();
   }
}

class Employee
{  public Employee(String n, double s, int y)
   {  name = n;
      salary = s;
      hireYear = y;
   }
   public void print()
   {  System.out.println(name + " " + salary + " " + hireYear());
   }
   public void raiseSalary(double byPercent)
   {  salary *= 1 + byPercent / 100;
   }
   public int hireYear()
   {  return hireYear;
   }

   private String name;
   private double salary;
   private int hireYear;
}

class Manager extends Employee
{  public Manager(String n, double s, int y)
   {  super(n, s, y);
      secretaryName = "";
   }

   public void raiseSalary(double byPercent)
   {  // add 1/2% bonus for every year of service
      int thisYear = 2020;
      double bonus = 0.5 * (thisYear - hireYear());
      super.raiseSalary(byPercent + bonus);
   }
   
   public void setSecretaryName(String n)
   {  secretaryName = n;
   }

   public String getSecretaryName()
   {  return secretaryName;
   }
   
   private String secretaryName;
}


