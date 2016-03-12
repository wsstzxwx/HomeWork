package fuli;

import java.util.Scanner;


public class woccc22 {

	public static void main(String[] args) {
		System.out.println("请输入你的本金");
		Scanner scanner=new Scanner(System.in);
		int principal=scanner.nextInt();//本金
		System.out.println("请输入你的年利率");
		double rate=scanner.nextFloat();
		System.out.println("请输入你要存储的时间长，单位为年");
		int year=scanner.nextInt();
		// TODO Auto-generated method stub
		double sum=principal;
		double d=0;
		for(int i=1;i<year;i++){
			d=(double) (rate)*sum;
			sum=sum+d;
		}
		sum=(int)(sum*10)/10.0;
		System.out.println("你的所得钱数为"+sum);
	}
	

}
