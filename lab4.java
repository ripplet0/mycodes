import java.io.*;

public class Filet
{
public static void main(String Args[])throws IOException
{
FileReader in=null;
FileWriter out=null;
try
{
in=new FileReader("Input.txt");
System.out.println("Input file created");
out=new FileWriter("Output.txt");
System.out.println("Output created");
int c;
while((c=in.read())!=-1)
{
out.write(c);
}
}
catch(FileNotFoundException e)
{
    System.out.println("Files not found");
}
finally
{
if(in!=null)
{
in.close();
System.out.println("File not closed");
}
if(out!=null)
{
out.close();
System.out.println("Output files closed");
}
}
}
}
