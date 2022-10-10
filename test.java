import java.io.*;
import java.util.*;
import java.lang.Math;
public class test {  
  public static void main (String[] args) {
    Scanner sc = new Scanner(System.in);
    Double a,b,c,d,r;
    a = sc.nextDouble();
    b = sc.nextDouble();
    c = sc.nextDouble();
    d = sc.nextDouble();
    r = sc.nextDouble();

    Double w = (c-a)/2.0;
    Double h = (d-b)/2.0;

    if (w*w + h*h <= r*r){
      System.out.println(w*h*4.0);
    }else{
      Double h1 = Math.min(h,r);
      Double w1 = Math.min(w,r);

      Double a1 = Math.acos(h1/r);
      Double a2 = Math.acos(w1/r);
      Double a3 = Math.PI/2.0 - a1 - a2;

      Double s1 = h1 * r * Math.sin(a1) / 2.0;
      Double s2 = w1 * r * Math.sin(a2) / 2.0;
      Double s3 = r * r * a3 / 2.0;

      System.out.println((s1+s2+s3)*4.0);


    }
    System.exit(0);
  }
}
