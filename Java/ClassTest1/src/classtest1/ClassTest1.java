/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classtest1;

//import classtest1.Rectangle;

/**
 *
 * @author User
 */
public class ClassTest1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Animal myAnimal = new Animal();
        Animal myAnimal2 = new Animal("Roger");
        
        System.out.println(myAnimal.getName());
        System.out.println(myAnimal2.getName());
        
        myAnimal.setAge(30);
        myAnimal2.setAge(-10);
        
        System.out.println(Animal.getTheAnswerToLife());
        Animal.anotherAnswerToLife = 123;
        System.out.println(Animal.getTheOtherAnswerToLife());
        
    }
    
}
