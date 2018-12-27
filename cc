//a1
import java.io.*;

public class Test {
    public static void main(String [] args) {

        // The name of the file to open.
        String fileName = "temp.txt";

        // This will reference one line at a time
        String line = null;

        try {
            // FileReader reads text files in the default encoding.
            FileReader fileReader = 
                new FileReader(fileName);

            // Always wrap FileReader in BufferedReader.
            BufferedReader bufferedReader = 
                new BufferedReader(fileReader);

            while((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }   

            // Always close files.
            bufferedReader.close();         
        }
        catch(FileNotFoundException ex) {
            System.out.println(
                "able to open file '" + 
                fileName + "'");                
        }
        catch(IOException ex) {
            System.out.println(
                "Error reading file '" 
                + fileName + "'");                  
            // Or we could just do this: 
            // ex.printStackTrace();
        }
    }
}


//------------------------------------------------------
//a2


import javax.swing.*;
import java.io.*;
public class file
{
public static void main(String []args)throws IOException
{
FileWriter ryt=new FileWriter("alpe.jacl");
BufferedWriter out=new BufferedWriter(ryt);
String name=JOptionPane.showInputDialog("Enter webserverName");
out.write("set webservername " +name);
String name1=JOptionPane.showInputDialog("Enter serverName");
out.write("set serverName " +name1);
String name2=JOptionPane.showInputDialog("Enter ClusterName");
out.write("set ClusterName " +name2);
out.write("\r\nThis the simple txt file that you created!");
out.close();
}}

/---------------------------------------------------------------------
//a3

import java.util.Collections;
import java.util.List;
 
public class MyObjectNCopies {
 
    public static void main(String a[]){
         
        String temp = "JAVA2NOVICE";
        //List<String> tempCopies = Collections.nCopies(5, temp);
        //System.out.println(tempCopies);
        Empy emp = new Empy(10, "Raghu", 25000);
        List<Empy> empCopies = Collections.nCopies(5, emp);
        for(Empy e:empCopies){
            System.out.println(e);
        }
    }
}
 
class Empy{
     
    private int id;
    private String name;
    private Integer salary;
 
    public Empy(int id, String name, Integer sal){
        this.id = id;
        this.name = name;
        this.salary = sal;
    }
     
   public String toString(){
        return id+"  "+name+"   "+salary;
    } 
}

//--------------------------------------------------------------------------------------------------------
//a4

import java.net.InetAddress;
import java.net.UnknownHostException;
 
public class MyIpByHost {
 
    public static void main(String a[]){
     
        try {
            InetAddress host = InetAddress.getByName("www.java2novice.com");
            System.out.println(host.getHostAddress());
        } catch (UnknownHostException ex) {
            ex.printStackTrace();
        }
    }
}

//-------------------------------------------------------------------------------------------------------------
//a5

import java.util.Scanner;
public class BATM {

public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    String username;
    String password;

    System.out.println("Log in:");
    System.out.println("username: ");
    username = input.next();

    System.out.println("password: ");
    password = input.next();

    //users check = new users(username, password);

    if(username.equals(username) && password.equals(password)) 
        System.out.println("You are logged in");



}

}

//-------------------------------------------------------------------------------------------------------------------
//b1

import java.io.*;
 
public class FileMerge 
{
    public static void main(String[] args) throws IOException 
    {
        // PrintWriter object for file3.txt
        PrintWriter pw = new PrintWriter("file3.txt");
         
        // BufferedReader object for file1.txt
        BufferedReader br = new BufferedReader(new FileReader("file1.txt"));
         
         
        // loop to copy each line of 
        // file1.txt to  file3.txt

	String line=null;
        while ((line = br.readLine())!=null)
        {
            pw.println(line);
            //line = br.readLine();
        }
         
        br = new BufferedReader(new FileReader("file2.txt"));
         
        line = br.readLine();
         
        // loop to copy each line of 
        // file2.txt to  file3.txt
        while(line != null)
        {
            pw.println(line);
            line = br.readLine();
        }
         
        pw.flush();
         
        // closing resources
        br.close();
        pw.close();
         
        System.out.println("Merged file1.txt and file2.txt into file3.txt");
    }
}

//-----------------------------------------------------------------------------------------------
//b2
import java.util.Scanner;
import java.io.*;

public class JavaProgram
{
    public static void main(String[] input)
    {
        String fname;
        Scanner scan = new Scanner(System.in);
        
        /* enter filename with extension to open and read its content */
        
        System.out.print("openstack is running with down the time: ");
        fname = scan.nextLine();
        
        /* this will reference only one line at a time */
        
        String line = null;
        try
        {
            /* FileReader reads text files in the default encoding */
            FileReader fileReader = new FileReader(fname);
            
            /* always wrap the FileReader in BufferedReader */
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            
            while((line = bufferedReader.readLine()) != null)
            {
                System.out.println(line);
            }
            
            /* always close the file after use */
            bufferedReader.close();
        }
        catch(IOException ex)
        {
            System.out.println("time is incorrect '" + fname + "'");
        }
    }
}

//------------------------------------------------------------------------------------------------------------------
//b3
import java.net.*;
import java.io.*;
import java.util.*;
import java.net.InetAddress;
 
public class JavaProgram
{
    public static void main(String args[]) throws Exception
    {
        // Returns the instance of InetAddress containing
        // local host name and address
        InetAddress localhost = InetAddress.getLocalHost();
        System.out.println("System IP Address : " +
                      (localhost.getHostAddress()).trim());
 
        // Find public IP address
        String systemipaddress = "";
        try
        {
            URL url_name = new URL("http://bot.whatismyipaddress.com");
 
            BufferedReader sc =
            new BufferedReader(new InputStreamReader(url_name.openStream()));
 
            // reads system IPAddress
            systemipaddress = sc.readLine().trim();
        }
        catch (Exception e)
        {
            systemipaddress = "Cannot Execute Properly";
        }
        System.out.println("Public IP Address: " + systemipaddress +"\n");
    }
}

//---------------------------------------------------------------------------------------------------------------------
//b4
import java.net.InetAddress;
import java.net.UnknownHostException;
 
public class MyAllIpAddresses {
 
    public static void main(String a[]){
     
        try {
            InetAddress[] myHost = InetAddress.getAllByName("www.google.com");
            for(InetAddress host:myHost){
                System.out.println(host.getHostAddress());
            }
        } catch (UnknownHostException ex) {
            ex.printStackTrace();
        }
    }
}

//-----------------------------------------------------------------------------------------------------------------------
//b5

import java.util.Scanner;
public class threadexample
{
    public static void main(String[] args)
                           throws InterruptedException
    {
        final PC pc = new PC();
 
        // Create a thread object that calls pc.produce()
        Thread t1 = new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                try
                {
                    pc.produce();
                }
                catch(InterruptedException e)
                {
                    e.printStackTrace();
                }
            }
        });
 
        // Create another thread object that calls
        // pc.consume()
        Thread t2 = new Thread(new Runnable()
        {
            @Override
            public void run()
            {
                try
                {
                    pc.consume();
                }
                catch(InterruptedException e)
                {
                    e.printStackTrace();
                }
            }
        });
 
        // Start both threads
        t1.start();
        t2.start();
 
        // t1 finishes before t2
        //t1.join();
        //t2.join();
    }
 
    // PC (Produce Consumer) class with produce() and
    // consume() methods.
    public static class PC
    {
        // Prints a string and waits for consume()
        public void produce()throws InterruptedException
        {
            // synchronized block ensures only one thread
            // running at a time.
            //synchronized(this)
            //{
                System.out.println("producer thread running");
 
                // releases the lock on shared resource
                //wait();
 
                // and waits till some other method invokes notify().
                System.out.println("Resumed");
            //}
        }
 
        // Sleeps for some time and waits for a key press. After key
        // is pressed, it notifies produce().
        public void consume()throws InterruptedException
        {
            // this makes the produce thread to run first.
            Thread.sleep(1000);
            Scanner s = new Scanner(System.in);
 
            // synchronized block ensures only one thread
            // running at a time.
            //synchronized(this)
            //{
                System.out.println("Waiting for return key.");
                s.nextLine();
                System.out.println("Return key pressed");
 
                // notifies the produce thread that it
                // can wake up.
                //notify();
 
                // Sleep
                Thread.sleep(2000);
	    //        }
        }
    }
}


//----------------------------------------------------------------------------------------------
