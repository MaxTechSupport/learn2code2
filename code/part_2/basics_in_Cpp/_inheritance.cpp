#include <iostream>

class PaintCost {
    public:
        auto get_cost(double area) -> double{
            return area * 70;
        }
};

class Shape {        
  public:             
    void set_height(int height){
        height_ = height;
    }
    void set_width(int width){
        width_ = width;
    }
    protected:
        int width_;
        int height_;
};

class Rectangle: public Shape, public PaintCost{
    public:
        auto get_area() -> int32_t
        {
            return height_*width_;
        }
};


auto main() -> int
{

    Rectangle rect;
    rect.set_height(10);
    rect.set_width(10);
    double area = (double)rect.get_area();
    std::cout << area << "\n";
    std::cout << rect.get_cost(area);
}