import java.io.*;
class thread1 extends Thread
{
public void run()
{
try
{
for(int i=1;i<=5;i++)
{
System.out.println("i="+ i);
Thread.sleep(1000);
}
}
catch(InterruptedException e)
{
System.out.println("error");
}
}
}
class thread2 extends Thread
{
public void run()
{
try
{
for(int j=1;j<=5;j++)
{
System.out.println("j="+ j);
Thread.sleep(1000);
}
}
catch(InterruptedException e)
{
System.out.println("error");
}
}
}
class multithread1
{
public static void main(String args[])
{
thread1 t1=new thread1();
thread2 t2=new thread2();
t1.start();
t2.start();
}
}
