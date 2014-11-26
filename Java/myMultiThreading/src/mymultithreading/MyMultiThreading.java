/*
 * Testing multithreading
 * Note the 'synchronized' keyword
 */
package mymultithreading;

import static java.lang.Thread.yield;

/**
 *
 * @author Jonathan Hassall
 */
public class MyMultiThreading {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Multitheading test.");
        
        /*Coffee thread1 = new Coffee();
        thread1.start();
        Tea thread2 = new Tea();
        thread2.start();*/
        
        //Start 25 threads, of tea and coffee
        for (int i = 0; i < 25; i++) {
            if (i % 2 == 0)
            {
                new Coffee().start();
            }
            else
            {
                new Tea().start();
            }
        }
    }
}

class Coffee extends Thread {

    @Override
    public void run() {
        while (true) {
            System.out.println("Thread ID: " + Thread.currentThread().getId() + " - Trying to drink coffee");
            if (!CaffeineSafety.drinkCaffeineIfSafe())
            {
                System.out.println("Stopping thread");
                this.stop();
            }
            yield();
        }
    }
}

class Tea extends Thread {

    @Override
    public void run() {
        while (true) {
            System.out.println("Thread ID: " + Thread.currentThread().getId() + " - Trying to drink tea");
            if (!CaffeineSafety.drinkCaffeineIfSafe())
            {
                System.out.println("Stopping thread");
                this.stop();
            }
            yield();
        }
    }
}

//Use 'synchronized' keyword to prevent race conditions when multiple threads are accessing a property/variable etc.
class CaffeineSafety {
    static int caffeineGauge = 0;
    static final int safetyLimit = 250;
    
    synchronized public static boolean drinkCaffeineIfSafe()
    {
        if (caffeineGauge < safetyLimit)
        {
            System.out.println("Caffeine level is at " + caffeineGauge + " and is below safety limit so it is OK to drink.");
            caffeineGauge++;
            return true;
        }
        else
        {
            System.out.println("Caffeine level is at " + caffeineGauge + " and at or above safety limit, so not allowing you to drink!");
            return false;
        }
    }
}