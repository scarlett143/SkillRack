import java.util.*;
public class CheckSignWithRange{
  public static void main(String[] args){
    
    Scanner input = new Scanner(System.in);
    
    System.out.println("The input value is:");
    double n=input.nextInt();
    
    if(n>0){
      if(n<1){
        System.out.println("Positive small number");
      }
      else if(n>1000000){
        System.out.println("Positive large number");
      }
      else{
        System.out.println("Positive number");
      }
    }
    else if(n<0){
      if(Math.abs(n)<1){
        System.out.println("Negative small number");
      }
      else if(Math.abs(n)>1000000){
        System.out.println("Negative large number");
      }
      else{
        System.out.println("Negative number");
      }
    }
    else{
      System.out.println("Zero");
    }
    
  }
}
