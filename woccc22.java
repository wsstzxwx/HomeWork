package fuli;

import java.util.Scanner;


public class woccc22 {

	public static void main(String[] args) {
		System.out.println("��������ı���");
		Scanner scanner=new Scanner(System.in);
		int principal=scanner.nextInt();//����
		System.out.println("���������������");
		double rate=scanner.nextFloat();
		System.out.println("��������Ҫ�洢��ʱ�䳤����λΪ��");
		int year=scanner.nextInt();
		// TODO Auto-generated method stub
		double sum=principal;
		double d=0;
		for(int i=1;i<year;i++){
			d=(double) (rate)*sum;
			sum=sum+d;
		}
		sum=(int)(sum*10)/10.0;
		System.out.println("�������Ǯ��Ϊ"+sum);
	}
	

}
