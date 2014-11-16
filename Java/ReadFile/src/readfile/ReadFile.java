/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package readfile;

import java.io.*;
import java.nio.file.Path;
import java.nio.file.Paths;

/**
 *
 * @author User
 */
public class ReadFile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        //Get current path, and use correct separator between filename
        Path currentRelativePath = Paths.get("");
        String filename = currentRelativePath.toAbsolutePath().toString() + File.separator + "src" + File.separator + "ascii.txt";
        System.out.println(filename);
        
        readFile(filename);
        System.out.println();        
    }
    
    /**
     * 
     * @param filename String
     * @return boolean
     */
    public static boolean readFile(String filename) {
        File file = new File(filename);
        FileInputStream fis = null;

        try {
                fis = new FileInputStream(file);

                System.out.println("Total file size to read (in bytes) : " + file.length());

                int content;
                while ((content = fis.read()) != -1) {
                        // convert to char and display it
                        System.out.print((char) content);
                }

        } catch (IOException e) {
                //e.printStackTrace();
        } finally {
                try {
                        if (fis != null)
                                fis.close();
                } catch (IOException ex) {
                        //ex.printStackTrace();
                }
        }

        return true;
    }
}
