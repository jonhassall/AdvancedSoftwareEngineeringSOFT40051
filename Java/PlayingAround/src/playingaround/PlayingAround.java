package playingaround;

import java.awt.Rectangle;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Jonathan Hassall
 */
public class PlayingAround
{

    private static final Logger LOG = Logger.getLogger(PlayingAround.class.getName());

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        String myName = "Jonathan";
        System.out.println("Hello world");
        LOG.log(Level.INFO, "Everything is OK");
        
        int index, negativeNumberSum;
        negativeNumberSum = 0;
        int[] intArray =
        {
            4, 0, -1, 3, -7, 5, -8
        };
        
        for (int i = 0; i < intArray.length; i++)
        {
            if (intArray[i] < 0)
            {
                negativeNumberSum = negativeNumberSum + intArray[i];
            }
        }
        
        System.out.println("Total: " + negativeNumberSum);
    
        Rectangle myRectangle = new Rectangle(5, 10, 20, 30);
        myRectangle.translate(20, 30);
        
        //This makes a reference to the original rectangle, not a new rectangle
        Rectangle rectangleReference = myRectangle;
        rectangleReference.translate(100, 100);
        
        System.out.println("X: " + myRectangle.x);
        System.out.println("Y: " + myRectangle.y); 
       

        System.out.println(randomWithRange(5,20));
    }

    static public int randomWithRange(int min, int max)
    {
       int range = (max - min) + 1;     
       return (int)(Math.random() * range) + min;
    }
}
