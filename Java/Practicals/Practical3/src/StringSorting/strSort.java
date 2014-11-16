/* source file that contains the main function that initializes a string
   array and calls a sort method (asort()) of another class (sort)
   to sort the array in ascending order
*/

package StringSorting;

public class strSort
{
   public static void main(String[] args)
   {
     // make an array of five strings and intialise it
      String [] s = {"potato", "cucumber", "onion", "cabbage", "mint"};
      int i;
      // create a sort object
      sort mySort = new sort();
      // call the asort function to sort ascending
      mySort.ascendingSort(s);
      // print the sorted array
      for (i = 0; i < s.length; i++)
         System.out.println(s[i]);
   }
}

