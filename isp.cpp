class IWorkable {
public:
    virtual void work() = 0;
    virtual ~IWorkable() {}
};

class IEatable {
public:
    virtual void eat() = 0;
    virtual ~IEatable() {}
};

class Human : public IWorkable, public IEatable {
public:
    void work() override {
    }
    void eat() override {
    }
};

class Robot : public IWorkable {
public:
    void work() override {
    }
};

int main() {
    Human human;
    human.work();
    human.eat();

    Robot robot;
    robot.work();

    return 0;
}
