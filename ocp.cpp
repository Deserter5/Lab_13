class Shape {
public:
    virtual double getArea() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() override {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
    double side;
public:
    Square(double s) {
        side = s;
    }
    double getArea() override {
        return side * side;
    }
};

class AreaCalculator {
public:
    double calculateArea(Shape* shape) {
        return shape->getArea();
    }
};

int main() {
    Circle c(5);
    Square s(5);
    AreaCalculator calc;
    
    calc.calculateArea(&c);
    calc.calculateArea(&s);
    
    return 0;
}
//Клас AreaCalculator перевіряв типи через умовні оператори. При додаванні нової фігури довелося б змінювати цей клас. Замість цього ми створюємо базовий абстрактний клас Shape з віртуальним методом обчислення площі. Тепер AreaCalculator закритий для модифікацій, але відкритий для розширення шляхом додавання нових класів фігур.