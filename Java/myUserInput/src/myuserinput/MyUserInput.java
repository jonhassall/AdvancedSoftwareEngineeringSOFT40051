/*
 * Testing getting user input
 */
package myuserinput;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author Jonathan Hassall
 */
public class MyUserInput {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Testing user input");

        String inputText = "";
        InputStreamReader isr;
        BufferedReader br;

        try {  //setup reading streams
            isr = new InputStreamReader(System.in);
            br = new BufferedReader(isr);

            //Prompt to enter text
            System.out.println("Please enter text");
            
            inputText = br.readLine();
        } catch (IOException e) {
            System.out.println("IO Exception ocuured " + e);
        } finally {
            System.out.println("This 'finally' section always executes even if an exception is caught.");
        }
        
        System.out.println("Input was " + inputText);
    }
}
