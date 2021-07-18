package daa;

import java.util.Scanner;

public class Linear_search {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in =new Scanner(System.in);
		System.out.print("Enter length of array: ");
		int n=in.nextInt();
		int fg=0;
		int a[]=new int[n];
		System.out.print("Enter number to be checked: ");
		int key=in.nextInt();
		System.out.println("Enter elements of array: ");
		for(int i=0;i<n;i++) {
			a[i]=in.nextInt();
		}
		for(int i=0;i<n;i++) {
			if(key==a[i]) {
				fg=1;
				System.out.println("Found");
				System.out.println("No. of comparison are: "+(i+1));
				break;
			}
		}
		if(fg==0) {
			System.out.println("Not Found");
		}
	}

}
