/*
 * Custom exception type
 */
package myexception;

/**
 *
 * @author N0612202
 */
public class DivideByZeroException extends Exception {
    public DivideByZeroException(String message) {
        super(message);
    }
}