package mygraphics;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.Line2D;
import javax.swing.JComponent;

/**
 *
 * @author Jonathan Hassall
 */
public class LineComponent extends JComponent
{
    @Override
    public void paintComponent(Graphics g)
    {
        //Drawing instructions go here
        //Recover Graphics2D
        Graphics2D g2 = (Graphics2D) g;
        
        Line2D.Double segment = new Line2D.Double(10, 10, 50, 50);
        
        g2.draw(segment);
    }
}
