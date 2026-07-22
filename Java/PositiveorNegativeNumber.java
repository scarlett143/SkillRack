import java.util.*;
public class PositiveorNegativeNumber{
  public static void main(String[] args){
    
    Scanner input= new Scanner(System.in);
    int n=input.nextInt();
    
    if(n > 0){
      System.out.println("Number is positive");
    }
    else if(n < 0){
      System.out.println("Number is negative");
    }
    else{
      System.out.println("Zero");
    }
    
  }
}
