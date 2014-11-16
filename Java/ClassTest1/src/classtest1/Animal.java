/*
 * 
 */
package classtest1;

/**
 *
 * @author User
 */
public final class Animal {
    
    private String name;
    
    public Animal() {
//        Animal("Default name");
        this("Default name");
        System.out.println("Animal constructor 1");
    }
    
    public Animal(String name_input) {
        System.out.println("Animal constructor 2");
        setName(name_input);
    }
    
    public boolean setName(String name_input) {
        name = name_input;
        return true;
    }
    
    public String getName() {
        return name;
    }

//    private Animal(String default_name) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
}
