class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> my_vect;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                my_vect.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                my_vect.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                my_vect.push_back("Buzz");
            }
            else
            {
                my_vect.push_back(to_string(i));
            }
        }
        return my_vect;
    }
};