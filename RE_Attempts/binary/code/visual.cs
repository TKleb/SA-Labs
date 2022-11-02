static void Main(string[] args)
{
    Console.WriteLine("Checking for external File...");
    try
    {
        string text = System.IO.File.ReadAllText(args[0]);
        Console.WriteLine("File Found.");
        if (text == "giveFlag")
        {
            Console.WriteLine("Success! The Flag is: externalFiles");
        }
    } 
    catch
    {
        Console.WriteLine("Couldn't find file...");
    }

    Console.WriteLine("Press any key to close program.");
    Console.ReadKey();
}