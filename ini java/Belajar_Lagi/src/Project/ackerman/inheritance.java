package Project.ackerman;
import java.util.*;

public class inheritance 
{
    Scanner inputHewan  = new Scanner(System.in);
    String nama;
    void cek()
    {   
        System.out.println("Masukkan nama Hewan: ");
        nama=inputHewan.nextLine();
    }
}
class Output extends inheritance
{
    void display()
    {
        System.out.println("Animal : "+nama);
    }
}
class Lari
{
    public static void main(String[]args) 
    {
        Output cek = new Output();

        cek.cek();
        cek.display();
    }
}
