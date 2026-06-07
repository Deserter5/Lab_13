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
