/*
 * Testing exceptions
 */
package myexception;

/**
 * @author N0612202
 */
public class MyException {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Exception testing.\n");
        
        double result = 0;
        boolean success = true;
        
        try
        {
            //result = divideTwoNumbers(1, 3);
            result = divideTwoNumbers(1, 0);
        }
        catch (DivideByZeroException e)
        {
            success = false;
            System.out.println("Exception while dividing: " + e.getMessage());
        }
        
        if (success)
        {
            System.out.println("Division result: " + result + "\n");
        }
    }
    
    public static double divideTwoNumbers(double a, double b) throws DivideByZeroException
    {
        if (a == 0 || b == 0)
        {
            throw new DivideByZeroException("Cannot divide by zero.");
        }
        
        return a/b;
    }
    
}

