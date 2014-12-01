package mygraphics;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import javax.swing.JComponent;

/**
 *
 * @author Jonathan Hassall
 */
public class RectangleComponent extends JComponent
{
    @Override
    public void paintComponent(Graphics g)
    {
        //Drawing instructions go here
        //Recover Graphics2D
        Graphics2D g2 = (Graphics2D) g;
        
        Color magenta = new Color(255, 0, 255);
        g2.setColor(magenta);
        
        Rectangle box = new Rectangle(5, 10, 20, 30);
        g2.draw(box);
        
        g2.setColor(Color.RED);
        box.translate(15, 20);
        g2.draw(box);
        
        g2.setColor(Color.BLUE);
        box.translate(15, 20);
        g2.fill(box);
        
        g2.setColor(Color.YELLOW);
        box.translate(15, 20);
        g2.draw(box);
        
        g2.setColor(Color.GREEN);
        box.translate(15, 20);
        g2.fill(box);
    }
}
