class Bird {
public:
    virtual ~Bird() {}
};

class FlyingBird : public Bird {
public:
    virtual void fly() = 0;
};

class Sparrow : public FlyingBird {
public:
    void fly() override {
    }
};

class Ostrich : public Bird {
public:
    void run() {
    }
};

int main() {
    Sparrow sparrow;
    sparrow.fly();

    Ostrich ostrich;
    ostrich.run();

    return 0;
}
