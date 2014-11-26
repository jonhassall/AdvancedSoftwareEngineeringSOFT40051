package StringSorting;

/**
 *
 * @author Jonathan Hassall
 * TODO:    Tidy up debugging lines and variable names
 *          Look into QuickSort algorithm
 *          Look into any kind of array type with push in Java
 *          Accept user input
 */
public class Sort {
    
    //Note that Java effectively passes by reference on object instances
    public String [] ascendingSort(String [] s)
    {
//        for (int i = 0; i < s.length; i++) {
        
        int maxLength = 0;
        //Find the maximum length
        for (int i = 0; i < s.length; i++) {
            System.out.println(s[i] + "Length: " + s[i].length());
            if (s[i].length() > maxLength)
            {
                maxLength = s[i].length();
            }
        }
        
        System.out.println("Maximum length is " + maxLength);
       
        String [] sortedByLength = new String[s.length];
        int sortedByLengthCounter = 0;
        for (int i = 1; i <= maxLength; i++) {
            System.out.println("Sorting for length " + i);
            
            for (int j = 0; j < s.length; j++) {
                System.out.println(s[j]);
                if (s[j].length() == i)
                {System.out.println("Length match");
                    sortedByLength[sortedByLengthCounter] = s[j];
                    sortedByLengthCounter++;
                }
            }
        }
        
//        System.out.println("Printing sorted list:");
//        for (int i = 0; i < sortedByLength.length; i++) {
//            System.out.println(sortedByLength[i]);
//        }
        
        return sortedByLength;
//        s = sortedByLength;
//        sortedByLength = s;
    }
}
