package Project.ackerman;
import java.util.Scanner;
public class oop 
{
    //java array
    Scanner inputData = new Scanner(System.in);
    Scanner inputMatkul = new Scanner(System.in);
    Scanner inputSks = new Scanner(System.in);
    int Sks[]=new int[100],
    umur; 
    String Matkul[]=new String[100],
    nama;
    public void test()
    {
        System.out.println("Masukkan nama anda:");
        nama=inputData.nextLine();
        System.out.println("Masukkan Umur anda:");
        umur=inputData.nextInt();

    }
    public void matkul()
    {
        System.out.println("Masukkan Matkul dan Sks anda: ");
        for (int v=1;v<=5;v++)
        {
            System.out.println("No."+v+": Mata kuliah");
            // v for store data in array 
            Matkul[v]=inputMatkul.nextLine();
            System.out.println(+v+": Sks anda ");
            Sks[v]=inputSks.nextInt();
        }
    }
}
class Main
{
    public static void main (String[]args)
    {
        oop coba= new oop();
        coba.test();
        coba.matkul();
    }
}
