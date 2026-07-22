import java.util.*;
public class FindGreatest{
  public static void main(String[] args){
    
    Scanner input=new Scanner(System.in);
    
   System.out.println("Input Three Numbers:");
   int a=input.nextInt(),b=input.nextInt(),c=input.nextInt();
   
   if(a>b && a>c){
     System.out.println("The greatest:"+ a);
   }
   else if(b>c){
     System.out.println("The greatest:"+ b);
   }
   else{
     System.out.println("The greatest:"+ c);
   }
  }
}
