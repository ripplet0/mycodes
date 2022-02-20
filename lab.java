import java.io.*;
import java.util.*;
class String1
{
public static void main(String Args[])
{
String first="";
String second="";
Scanner sc=new Scanner(System.in);
System.out.println("String Operation");
System.out.println();
System.out.println("Enter the first string");
first=sc.nextLine();
System.out.println("enter the second string");
second=sc.nextLine();
System.out.println("the strings are:"+first+","+second);
System.out.println("the length of the first string is:"+first.length());
System.out.println("the length of the second string is:"+second.length());
System.out.println("the concatenation of the first and second stringis:"+first.concat(" "+second));
System.out.println("the first character of " +first +first.charAt(0));
System.out.println("the upper case of " +first+":"+first.toUpperCase());
System.out.println("the lower case of " +first+":"+first.toLowerCase());
System.out.println("enter the ocurrence of acharacter in" +first+":");
String str=sc.next();
char c=str.charAt(0);
System.out.println("the"+c+"occursat position"+first.indexOf(c)+"in"+first);
System.out.println("the sub string of"+first+"starting from index1 ending at3 is:"+first.substring(1,3));
System.out.println("replacing'h'with'c'in"+first+"\n"+first.replace('h','c'));
}
}
