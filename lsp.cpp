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
//Страус не вміє літати, тому його не можна використовувати там, де очікується птах, здатний до польоту. Щоб не порушувати принцип LSP, ми змінюємо ієрархію: створюємо загальний клас Bird, а здатність літати виносимо у клас FlyingBird. Тепер Ostrich наслідує тільки базового птаха і не має невластивого йому методу.