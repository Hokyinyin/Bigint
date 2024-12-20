class triangle
{
public:
    // Constructors
    triangle();                                                     // Default constructor
    triangle(const double &_a);                                     // Constructor for equilateral triangle
    triangle(const double &_a, const double &_b);                   // Constructor for right triangle
    triangle(const double &_a, const double &_b, const double &_c); // General constructor

    // Method to print the sides
    void print();
    void change_sides(const double &_a, const double &_b, const double &_c);

private:
    // The lengths of the sides
    double a = 0, b = 0, c = 0;
};
