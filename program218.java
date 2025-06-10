import java.util.Scanner;       // Specific import
                                // Actual class Designing 
class NNumberX
{
    public int Arr[];              // taking parameter here

    public NNumberX(int isize)
    {
        Arr = new int[isize];
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

class program218  
{            
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements : ");
        int isize = sobj.nextInt();

        NNumberX nobj = new NNumberX(isize);

        int iCnt = 0;

        System.out.println("Enter the Elements : ");
        for(iCnt = 0; iCnt < nobj.Arr.length; iCnt++)
        {
            nobj.Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < nobj.Arr.length; iCnt++)
        {
            System.out.println(nobj.Arr[iCnt]);
        }
    

       int iRet = 0;

       iRet = nobj.CountEven();

       System.out.println("Even Elements in the array are : "+iRet);    


       // used to deallocate memory
        sobj = null;        // if finalize method is there then this will be in finalize  
    }
}

//