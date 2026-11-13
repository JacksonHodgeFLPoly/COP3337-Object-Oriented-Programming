#include <iostream>

class Gun {
public:
    int bullets;
    int magazine;
    Gun(int magazine = 10) : magazine(magazine), bullets(magazine) {
        
    }
    virtual void shoot() {
        if (bullets > 0) {
            std::cout << "BANG!" << std::endl;
            bullets--;
        }
        else {
            std::cout << "CLICK!" << std::endl;
        }
    }

    void reload(int amount) {
        if (amount <= 0) return;

        int available = magazine - bullets;

        if (amount > available)
            amount = available;

        bullets += amount;
    }
};

class MachineGun : public Gun {
public:
    MachineGun(int magazine = 20) : Gun(magazine) {

    }
    void shoot() override {
        if (bullets == 0) {
            std::cout << "CLICK!" << std::endl;
            return;
        }
        while (bullets > 0) {
            std::cout << "BANG! ";
            bullets--;
        }
        
        std::cout << "\n";
    }
};

class Player {
public:
    void shoot(Gun& gun) {
        gun.shoot();
    }
    void reload(Gun& gun, int bullets) {
        gun.reload(bullets);
    }
};

int main(void) {
    Gun revolver;
    MachineGun machineGun;
    Player player;

    player.shoot(revolver);
    player.shoot(machineGun);
    player.shoot(machineGun);
    
    player.reload(machineGun, 5);
    player.shoot(machineGun);


    return 0;
}