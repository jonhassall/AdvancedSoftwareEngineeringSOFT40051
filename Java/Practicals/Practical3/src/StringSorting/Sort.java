package StringSorting;

/**
 *
 * @author Jonathan Hassall TODO: Tidy up debugging lines and variable names
 * Look into QuickSort algorithm Look into any kind of array type with push in
 * Java Accept user input
 */
public class Sort
{
    //Note that Java effectively passes by reference on object instances
    public String[] ascendingSort(String[] stringArray)
    {
        int maxLength = 0;

        //Find the maximum length
        for (int i = 0; i < stringArray.length; i++)
        {
            System.out.println(stringArray[i] + "Length: " + stringArray[i].length());
            if (stringArray[i].length() > maxLength)
            {
                maxLength = stringArray[i].length();
            }
        }
        System.out.println("Maximum length is " + maxLength);

        //Make a new array of strings for the sorted list
        String[] sortedByLength = new String[stringArray.length];
        int sortedByLengthCounter = 0;
        //Loop around each length from 1 to the maximum length
        //and insert any strings that match the length into the output array of strings
        for (int i_targetlength = 1; i_targetlength <= maxLength; i_targetlength++)
        {
            System.out.println("Sorting for length " + i_targetlength);

            for (int i = 0; i < stringArray.length; i++)
            {
                System.out.println(stringArray[i]);
                if (stringArray[i].length() == i_targetlength)
                {
                    System.out.println("Length match");
                    sortedByLength[sortedByLengthCounter] = stringArray[i];
                    sortedByLengthCounter++;
                }
            }
        }

        return sortedByLength;
    }
}
