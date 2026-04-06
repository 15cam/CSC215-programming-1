//function 4 
int divide(int operation)
//code block with c++ pointers 
{
    //if user types in divide, go to this function (in other words, only this function gets called) 
    if (operation == 3)
    {
        int a, b;
        int* pa = &a;
        int* pb = &b;
        cout << "Enter two numbers to divide: ";
        cin >> *pa >> *pb;
        if (*pb == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        cout << "Result: " << (*pa) / (*pb) << endl;
    }
    return 0;
}