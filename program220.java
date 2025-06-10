import java.util.Scanner;       // Specific import
                                // Actual class Designing 
class NNumberX
{
    public int Arr[];              // taking parameter here

    public NNumberX(int isize)
    {
        System.out.println("Allocating the Resourses...");
        Arr = new int[isize];       // Resourse Allocation
    }

    protected void finalize()       // finalize to deallocate memory
    {
        System.out.println("Deallocating the Resourses...");
        Arr = null;
    }

    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements : ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)       // this indicates that we are taking characterstics
        {
            this.Arr[iCnt] = sobj.nextInt();
        }

        sobj = null;        // Dealloacating sobj
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            System.out.println(this.Arr[iCnt]);
        }
    }

    public int CountEven()
    {
        int iCnt = 0, iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] %2) == 0)
            {
                iCount++;
            }
        }   
        return iCount;
    }
}

class program220
{            
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements : ");
        int isize = sobj.nextInt();

        NNumberX nobj = new NNumberX(isize);

        nobj.Accept();
        nobj.Display();

       int iRet = 0;

       iRet = nobj.CountEven();

       System.out.println("Even Elements in the array are : "+iRet);    


       // used to deallocate memory
        sobj = null;        // if finalize method is there then this will be in finalize  
    }
}

//