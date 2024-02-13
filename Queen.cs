using System;
using System.Collections.Generic;
using System.IO;
namespace Solution{
    class Solution { 
	    static void Main(String[] args) { 
		    int i = 4; 
			double d = 4.0; 
			string s = "Polyilaro ";
			int abc;
            
			double def;
            
			string ghi;

			abc = Convert.ToInt32(Console.ReadLine());
		
			def = Convert.ToDouble(Console.ReadLine());
	
			ghi = Console.ReadLine();
            
			Console.WriteLine(i + abc);
            
			Console.WriteLine(string.Format("{0:0.00}", (d + def)));
            
			Console.WriteLine(s + ghi);
		}
	}
}
