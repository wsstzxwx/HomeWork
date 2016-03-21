package work;

import java.text.DecimalFormat;

public class test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double principal=100000.0;
		double rate=0.065;
		int year=10;
		double need;
		for(int i=0;i<year;i++)
		{
			principal=principal*(1+rate);
		}
		need=principal/120;
		DecimalFormat dc=new DecimalFormat("#.00");
		System.out.println("每月需还"+dc.format(need)+"元");
		
	}

}
