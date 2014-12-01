package mygraphics;

import javax.swing.JFrame;

/**
 *
 * @author Jonathan Hassall
 */
public class MyGraphics
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        JFrame frame = new JFrame();
        frame.setSize(250, 200);
        frame.setLocation(10, 30);
        frame.setTitle("Rectangle");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        RectangleComponent myRectangleComponent = new RectangleComponent();
        frame.add(myRectangleComponent);
        frame.setVisible(true);
        
        
        JFrame frame2 = new JFrame();
        frame2.setSize(250, 200);
        frame2.setLocation(260, 30);
        frame2.setTitle("Ellipse");
        frame2.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);      
        
        EllipseComponent myEllipseComponent = new EllipseComponent();
        frame2.add(myEllipseComponent);
        frame2.setVisible(true);
        
        
        JFrame frame3 = new JFrame();
        frame3.setSize(250, 200);
        frame3.setLocation(510, 30);
        frame3.setTitle("Line");
        frame3.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);      
        
        LineComponent myLineComponent = new LineComponent();
        frame3.add(myLineComponent);
        frame3.setVisible(true);
        
        
        JFrame frame4 = new JFrame();
        frame4.setSize(250, 200);
        frame4.setLocation(10, 250);
        frame4.setTitle("Face");
        frame4.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);      
        
        FaceComponent myFaceComponent = new FaceComponent();
        frame4.add(myFaceComponent);
        frame4.setVisible(true);
        

        

        
        
    }
    
}

