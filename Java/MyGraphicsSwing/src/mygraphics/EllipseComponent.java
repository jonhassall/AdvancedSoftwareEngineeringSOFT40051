package mygraphics;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
import javax.swing.JComponent;

/**
 *
 * @author Jonathan Hassall
 */
public class EllipseComponent extends JComponent
{
    @Override
    public void paintComponent(Graphics g)
    {
        //Drawing instructions go here
        //Recover Graphics2D
        Graphics2D g2 = (Graphics2D) g;
        
        Ellipse2D.Double ellipse = new Ellipse2D.Double(10, 50, 10, 10);
        
        g2.draw(ellipse);
        
        ellipse.x += 20;
        g2.draw(ellipse);
        
        ellipse.x += 20;
        g2.draw(ellipse);
        
        ellipse.x += 20;
        g2.draw(ellipse);
    }
}
