package Project.ackerman;
import java.util.*;

public class cekSuper 
{
    Scanner Untuk  = new Scanner(System.in);
    String inputajah;
      // default or no-arg constructor of class cekSuper
    cekSuper()
    {
        System.out.println("Constructor input :");
        inputajah=Untuk.nextLine();
    }
}
class Bawah extends cekSuper
{
      // default or no-arg constructor of class Bawah
    Bawah()
    {
        // calling default constructor of the superclass
        super();
        System.out.println("Input class dari super(): "+inputajah);
    }

}
class Jostar
{
    public static void main(String[] args)
     {
        Bawah r1 = new Bawah();
        
    }
}
