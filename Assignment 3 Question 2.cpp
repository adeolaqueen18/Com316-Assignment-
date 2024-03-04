using System;

class PHPfunction
{
    static int SmallestIndex(int[] array)
    {
        int minIndex = 0;
        for (int i = 1; i < array.Length; i++)
        {
            if (array[i] < array[minIndex])
            {
                minIndex = i;
            }
        }
        return minIndex;
    }

    static void Main(string[] args)
    {
        int[] numbers = { 10, 5, 8, 3, 7 };
        int smallestIndex = SmallestIndex(numbers);
        Console.WriteLine("The index of the smallest element is: " + smallestIndex);
    }
}
