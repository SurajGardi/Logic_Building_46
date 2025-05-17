import java.util.*;

class program52 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        System.out.println("Enter Your Age : ");
        int Age = sobj.nextInt();

        System.out.println("Enter Your Marks : ");
        float Marks = sobj.nextFloat();

        System.out.println("Name : "+name);
        System.out.println("Age : "+Age);
        System.out.println("Marks : "+Marks);

    }
}
