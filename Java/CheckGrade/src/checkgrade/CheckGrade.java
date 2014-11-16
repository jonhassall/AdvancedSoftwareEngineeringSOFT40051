/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package checkgrade;

import java.io.*;

/**
 *
 * @author User
 */
public class CheckGrade {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        boolean end = false;
        
        while (end == false)
        {
            String grade = "";
            InputStreamReader isr;
            BufferedReader br;

            try {  //setup reading streams
                isr = new InputStreamReader(System.in);
                br = new BufferedReader(isr);

                //prompt user to enter name
                System.out.println("Please enter your grade, or Q to quit:\n");
                //read user input
                grade = br.readLine();
            } catch (IOException e) {
                System.out.println("IO Exception ocuured " + e);
            } finally {
                System.out.println("This 'finally' section always executes even if an exception is caught.");
            }
            
            if (grade.contentEquals("Q") || grade.contentEquals("q"))
            {
                end = true;
                System.out.println("Goodbye.");
            }
            else
            {
                //checkGrade requires a char, and text is input with a string
                //Use the charAt method to get the first char from the string
                //Check for an exception in case user did not input anything
                try {
                    checkGrade( grade.charAt(0) );    
                } catch (Exception e)
                {
                    System.out.println("Error checking grade.");
                }
            }

        }
        
    }

    /**
     * @param myGrade Input grade e.g. A
     * @return boolean Success or failure
     */
    public static boolean checkGrade(char myGrade) {

        switch (myGrade) {
            case 'A':
            case 'a':
                System.out.println("Very very good!");
                break;
            case 'B':
            case 'b':
                System.out.println("Very good!");
                break;
            case 'C':
            case 'c':
                System.out.println("Pretty good!");
                break;
            case 'D':
            case 'd':
                System.out.println("Well done!");
                break;

            default:
                System.out.println("I have no opinion.");
                return false;
        }

        return true;
    }
        
}
