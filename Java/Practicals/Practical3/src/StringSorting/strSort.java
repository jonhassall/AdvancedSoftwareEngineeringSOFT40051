/* Lab exercise: Create a class that sorts this array in order of length
 */
package StringSorting;

public class strSort
{

    public static void main(String[] args)
    {
        // make an array of five strings and intialise it
        String[] s =
        {
            "potato", "cucumber", "onion", "cabbage", "mint"
        };

        // create a sort object
        Sort mySort = new Sort();
        // call the asort function to sort ascending
        s = mySort.ascendingSort(s);
        // print the sorted array
        System.out.println("Printing sorted list:");

        for (int i = 0; i < s.length; i++)
        {
            System.out.println(s[i]);
        }
    }

}
