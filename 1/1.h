namespace arithmetic
{
    enum Operations
    {
        ADD = '+',
        SUBTRACT = '-',
        MULTIPLY = '*',
        DIVIDE = '/',
        MODULUS = '%'
    };

    int add(int a, int b);
    float add(float a, float b);
    double add(double a, double b);

    int subtract(int a, int b);
    float subtract(float a, float b);
    double subtract(double a, double b);

    int multiply(int a, int b);
    float multiply(float a, float b);
    double multiply(double a, double b);

    int divide(int a, int b);
    float divide(float a, float b);
    double divide(double a, double b);

    int modulus(int a, int b);

    int calculate(int a, int b, Operations operation)
    {
        switch (operation)
        {
        case ADD:
            return arithmetic::add(a, b);
        case SUBTRACT:
            return arithmetic::subtract(a, b);
        case MULTIPLY:
            return arithmetic::multiply(a, b);
        case DIVIDE:
            return arithmetic::divide(a, b);
        case MODULUS:
            return arithmetic::modulus(a, b);
        default:
            return 0;
        }
    }
    float calculate(float a, float b, Operations operation)
    {
        switch (operation)
        {
        case ADD:
            return arithmetic::add(a, b);
        case SUBTRACT:
            return arithmetic::subtract(a, b);
        case MULTIPLY:
            return arithmetic::multiply(a, b);
        case DIVIDE:
            return arithmetic::divide(a, b);
        case MODULUS:
            return arithmetic::modulus(a, b);
        default:
            return 0;
        }
    }
    double calculate(double a, double b, Operations operation)
    {
        switch (operation)
        {
        case ADD:
            return arithmetic::add(a, b);
        case SUBTRACT:
            return arithmetic::subtract(a, b);
        case MULTIPLY:
            return arithmetic::multiply(a, b);
        case DIVIDE:
            return arithmetic::divide(a, b);
        case MODULUS:
            return arithmetic::modulus(a, b);
        default:
            return 0;
        }
    }

    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }
    float subtract(float a, float b)
    {
        return a - b;
    }
    double subtract(double a, double b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
    float multiply(float a, float b)
    {
        return a * b;
    }
    double multiply(double a, double b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }
    float divide(float a, float b)
    {
        return a / b;
    }
    double divide(double a, double b)
    {
        return a / b;
    }

    int modulus(int a, int b)
    {
        return a % b;
    }

}
