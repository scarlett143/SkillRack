import java.util.*;
public class SolveQuadraticEquation.java{
public static void main(String[] Strings){
  
  Scanner input=new Scanner(System.in);
  System.out.println("Input a b c");
  double a=input.nextDouble(),b=input.nextDouble(),c=input.nextDouble();
  
  double result= b * b - 4.0 * a * c;
  
  if(result > 0.0){
    double r1= (-b+ Math.pow(result,0.5)) / (2.0 * a);
    double r2= (-b- Math.pow(result,0.5)) / (2.0 * a);
    System.out.println("The roots are" + r1 + "and" + r2);
  }
  else if(result == 0.0){
    double r3= -b / 2.0 * a;
    System.out.println("The root is:" +r3);
  }
  else{
    System.out.println("There are no real roots");
  }
}
}
