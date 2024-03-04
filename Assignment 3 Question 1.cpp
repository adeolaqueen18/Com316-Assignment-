using System;

class Array
{
    static void Main(string[] args)
    {
        // Prompt the user to input three numbers
        Console.WriteLine("Enter three numbers:");

        // Read input from the user
        Console.Write("First number: ");
        int num1 = int.Parse(Console.ReadLine());

        Console.Write("Second number: ");
        int num2 = int.Parse(Console.ReadLine());

        Console.Write("Third number: ");
        int num3 = int.Parse(Console.ReadLine());

        // Sort the numbers in ascending order
        int[] numbers = { num1, num2, num3 };
        Array.Sort(numbers);

        // Output the numbers in ascending order
        Console.WriteLine("Numbers in ascending order:");
        foreach (int number in numbers)
        {
            Console.WriteLine(number);
        }
    }
}
