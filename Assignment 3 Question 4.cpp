using System;

class MatrixAddition
{
    static void Main()
    {
        Console.WriteLine("Enter the number of rows for the matrices:");
        int rows = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter the number of columns for the matrices:");
        int cols = int.Parse(Console.ReadLine());

        int[,] matrix1 = new int[rows, cols];
        int[,] matrix2 = new int[rows, cols];
        int[,] resultMatrix = new int[rows, cols];

        Console.WriteLine("Enter the elements of the first matrix:");
        InputMatrix(matrix1);

        Console.WriteLine("Enter the elements of the second matrix:");
        InputMatrix(matrix2);

        Console.WriteLine("Matrix Addition Result:");
        AddMatrices(matrix1, matrix2, resultMatrix);
        PrintMatrix(resultMatrix);
    }

    static void InputMatrix(int[,] matrix)
    {
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                Console.WriteLine($"Enter element [{i + 1},{j + 1}]:");
                matrix[i, j] = int.Parse(Console.ReadLine());
            }
        }
    }

    static void AddMatrices(int[,] matrix1, int[,] matrix2, int[,] resultMatrix)
    {
        for (int i = 0; i < matrix1.GetLength(0); i++)
        {
            for (int j = 0; j < matrix1.GetLength(1); j++)
            {
                resultMatrix[i, j] = matrix1[i, j] + matrix2[i, j];
            }
        }
    }

    static void PrintMatrix(int[,] matrix)
    {
        for (int i = 0; i < matrix.GetLength(0); i++)
        {
            for (int j = 0; j < matrix.GetLength(1); j++)
            {
                Console.Write(matrix[i, j] + "\t");
            }
            Console.WriteLine();
        }
    }
}
