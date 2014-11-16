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
    private int age;
    
    //You can change the value of static fields/properties throughout all classes
    //Rarely desirable
    public static int anotherAnswerToLife = 49;
    
    //Set to 'final' to prevent changes/great way to make a constant
    public static final double INTEREST_RATE = 4.9;
    
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
    
    /**
     * @param age_input integer
     * @return 
     */
    public boolean setAge(int age_input) {
        //Assertions will be checked if assertion checking is activated (typically during debugging)
        //In practice, it isn't sensible to rely on them
        //Usually better to validate inputs and throw an exception
        //They are much more useful in non-public methods however
        //Think of preconditions and postconditions as contracts
        assert age_input >= 0;
        
        age = age_input;
        return true;
    }
    
    public String getName() {
        return name;
    }
    
    //A static method is called regardless i.e. not on an instance
    //Animal.getTheAnswerToLife() would work from anywhere
    public static int getTheAnswerToLife() {
        return 49;
    }
    
    public static int getTheOtherAnswerToLife() {
        return anotherAnswerToLife;
    }

//    private Animal(String default_name) {
//        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//    }
}
