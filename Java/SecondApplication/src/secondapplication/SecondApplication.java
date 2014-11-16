/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package secondapplication;

/**
 *
 * @author User
 */
public class SecondApplication {

    private static int myInt;
    private static boolean myBool;
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.print("Print a line without a line break");
        System.out.print("Print a line without a line break");
        System.out.println("Print a line with a line break");
        System.out.println("Print a line with a line break");
        
        System.err.println("Error message");
        
        showValues();
        
        myInt = 10;
        myBool = true;
        
        showValues();
        
        setValues(123, false);
        
        showValues();
    }
    
    /**
     * 
     * @param myInt_input
     * @param myBool_input
     */
    public static void setValues(int myInt_input, boolean myBool_input) {
        myInt = myInt_input;
        myBool = myBool_input;
    }
    /**
     * 
     */
    public static void showValues() {
        System.out.println(myInt);
        System.out.println(myBool);
    }
    
}
