using System;

namespace REExercise
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Checking for external File...");

            if (args.Length >= 1)
            {
                string text = System.IO.File.ReadAllText(args[0]);
                Console.WriteLine("File Found.");
                if (text == "giveFlag")
                {
                    Console.WriteLine("Success! The Flag is: externalFiles");
                    Console.ReadKey();

                    return;
                }
            }
            
            Console.WriteLine("Couldn't find file...");

            Console.WriteLine("Press any key to close program.");
            Console.ReadKey();
        }
    }
}
