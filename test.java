import java.io.*;
import java.util.*;
import java.lang.Math;
public class test {  
  public static void main (String[] args) {
    Scanner sc = new Scanner(System.in);
    int row = 6;
    for (int i = 1; i<=row; i++){
      for (int j = 1; j<=row; j++){
        System.out.print(j<=row-i?" ":"*");
      }
      System.out.println();
    }
    System.exit(0);
  }
}
