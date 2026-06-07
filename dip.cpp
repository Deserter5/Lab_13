class ISwitchable {
public:
    virtual void turnOn() = 0;
    virtual ~ISwitchable() {}
};

class LightBulb : public ISwitchable {
public:
    void turnOn() override {
    }
};

class Switch {
    ISwitchable* device;
public:
    Switch(ISwitchable* dev) {
        device = dev;
    }
    void operate() {
        device->turnOn();
    }
};

int main() {
    LightBulb bulb;
    Switch mySwitch(&bulb);
    mySwitch.operate();

    return 0;
}
//Клас вимикача Switch напряму залежав від конкретного класу LightBulb. Згідно з DIP, високорівневі модулі не повинні залежати від низькорівневих, обидва мають залежати від абстракцій. Ми створили інтерфейс ISwitchable, який тепер використовується вимикачем. Це дозволяє підключати до вимикача будь-який пристрій.