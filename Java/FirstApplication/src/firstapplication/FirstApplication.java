/*
 * Jonathan Hassall 16/11/2014
 * Testing out various concepts
 */
package firstapplication;

/**
 *
 * @author Jonathan Hassall
 */
public class FirstApplication {

    /**
     * @param args The command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Hello world!");
        
        boolean end = false;
        int counter = 0;
        
        while (end == false) {
            System.out.println(counter);
            counter++;
            
            if (counter > 20)
            {
                end = true;
            }
        }
        
        char myGrade = 'A';
        checkGrade(myGrade);
        
        showContactDetails();
        
        System.out.println(checkStringsMatch("Test", "Test"));
        System.out.println(checkStringsMatch("Test2", "Test2"));
        System.out.println(checkStringsMatch("Test", "Different"));
        
        char arrayGrades[] = new char[6];
        arrayGrades[0] = 'A';
        arrayGrades[1] = 'B';
        arrayGrades[2] = 'C';
        arrayGrades[3] = 'D';
        arrayGrades[4] = 'E';
        arrayGrades[5] = 'F';
        
        for (int i = 0; i < arrayGrades.length; i++)
        {
            checkGrade(arrayGrades[i]);
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
    
    public static void showContactDetails()
    {
        String name = "Jonathan Hassall";
        String email = "jon@jonhassall.com";
        
        System.out.println("Contact details:\n" + name + "\n" + email);
        
        System.out.println("Abbreviated name: " + name.substring(0, 3));
        
        System.out.println("Email address length: " + showStringLength(email));
        
        System.out.println("Index of @ symbol in email address: " + getAtSymbolIndex(email));
        
        System.out.println("Domain name: " + getEmailDomain(email));
    }
    
    /**
     * @param string1
     * @param string2
     * @return boolean True if match, false otherwise
     */
    public static boolean checkStringsMatch(String string1, String string2)
    {
//        if (string1.equals(string2))
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
        
        return string1.equals(string2);
    }
    
    /**
     * 
     * @param string1
     * @return integer Length of string
     */
    public static int showStringLength(String string1)
    {
        return string1.length();
    }
    
    /**
     * 
     * @param email
     * @return integer Index of first @ symbol
     */
    public static int getAtSymbolIndex(String email)
    {
        return email.indexOf('@');
    }
    
    /**
     * 
     * @param email String
     * @return String Returns domain (simply String after @ symbol)
     */
    public static String getEmailDomain(String email)
    {
        int atSymbolIndex = email.indexOf('@');
        int emailLength = email.length();
        
        return email.substring(atSymbolIndex + 1);
    }
}
