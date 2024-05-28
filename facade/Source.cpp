#include <iostream>
#include <windows.h>
using namespace std;

class VideoCard 
{
public:
    void initialize() 
    {
        cout << "Видеокарта инициализируется..." << endl; 
        Sleep(500);
    }

    void checkMonitorConnection() 
    {
        cout << "Видеокарта проверяет связь с монитором..." << endl;
        Sleep(500);
    }

    void displayRAMInfo() 
    {
        cout << "Видеокарта выводит данные об оперативной памяти..." << endl;
        Sleep(500);
    }

    void displayOpticalDriveInfo() 
    {
        cout << "Видеокарта выводит информацию об устройстве чтения дисков..." << endl;
        Sleep(500);
    }

    void displayHardDriveInfo()
    {
        cout << "Видеокарта выводит данные о винчестере..." << endl;
        Sleep(500);
    }

    void displayShutdownMessage()
    {
        cout << "Видеокарта выводит прощальное сообщение..." << endl;
        Sleep(500);
    }
};

class RAM 
{
public:
    void initialize() 
    {
        cout << "Оперативная память загружается..." << endl;
        Sleep(500);
    }

    void analyze() 
    {
        cout << "Оперативная память анализируется..." << endl;
        Sleep(500);
    }

    void clear()
    {
        cout << "Оперативная память очищается..." << endl;
        Sleep(500);
    }
};

class HardDrive 
{
public:
    void spinUp() 
    {
        cout << "Винчестер раскручивается..." << endl;
        Sleep(500);
    }

    void checkBootSector() 
    {
        cout << "Винчестер проверяет загрузочный сектор..." << endl;
        Sleep(500);
    }

    void spinDown() 
    {
        cout << "Винчестер останавливается..." << endl;
        Sleep(500);
    }
};

class OpticalDrive 
{
public:
    void initialize() 
    {
        cout << "Устройство чтения оптических дисков запускается..." << endl;
        Sleep(500);
    }

    void checkDisk() 
    {
        cout << "Устройство чтения оптических дисков проверяет наличие диска..." << endl;
        Sleep(500);
    }

    void reset()
    {
        cout << "Устройство чтения оптических дисков возвращается в исходную позицию..." << endl;
        Sleep(500);
    }
};

class PowerSupply 
{
public:
    void powerOn() 
    {
        cout << "Блок питания включается..." << endl;
        Sleep(500);
    }

    void powerOnVideoCard() 
    {
        cout << "Блок питания подает питание на видеокарту..." << endl;
        Sleep(500);
    }

    void powerOnRAM() 
    {
        cout << "Блок питания подает питание на оперативную память..." << endl;
        Sleep(500);
    }

    void powerOnOpticalDrive() 
    {
        cout << "Блок питания подает питание на устройство чтения дисков..." << endl;
        Sleep(500);
    }

    void powerOnHardDrive() 
    {
        cout << "Блок питания подает питание на винчестер..." << endl;
        Sleep(500);
    }

    void powerOffVideoCard() 
    {
        cout << "Блок питания прекращает питание видеокарты..." << endl;
        Sleep(500);
    }

    void powerOffRAM() 
    {
        cout << "Блок питания прекращает питание оперативной памяти..." << endl;
        Sleep(500);
    }

    void powerOffOpticalDrive() 
    {
        cout << "Блок питания прекращает питание устройства чтения дисков..." << endl;
        Sleep(500);
    }

    void powerOffHardDrive() 
    {
        cout << "Блок питания прекращает питание винчестера..." << endl;
        Sleep(500);
    }

    void powerOff() 
    {
        cout << "Блок питания выключается..." << endl;
        Sleep(500);
    }
};

class Sensors 
{
public:
    void checkVoltage() 
    {
        cout << "Датчики проверяют напряжение..." << endl;
        Sleep(500);
    }

    void checkPowerSupplyTemperature() 
    {
        cout << "Датчики проверяют температуру в блоке питания..." << endl;
        Sleep(500);
    }

    void checkVideoCardTemperature() 
    {
        cout << "Датчики проверяют температуру в видеокарте..." << endl;
        Sleep(500);
    }

    void checkRAMTemperature() 
    {
        cout << "Датчики проверяют температуру в оперативной памяти..." << endl;
        Sleep(500);
    }

    void checkAllTemperatures() 
    {
        cout << "Датчики проверяют температуру всех систем..." << endl;
        Sleep(500);
    }
};

class ComputerFacade 
{
    VideoCard videoCard;
    RAM ram;
    HardDrive hardDrive;
    OpticalDrive opticalDrive;
    PowerSupply powerSupply;
    Sensors sensors;
public:
    void BeginWork() 
    {
        powerSupply.powerOn();
        sensors.checkVoltage();
        sensors.checkPowerSupplyTemperature(); 
        sensors.checkVideoCardTemperature(); 
        powerSupply.powerOnVideoCard(); 
        videoCard.initialize(); 
        videoCard.checkMonitorConnection(); 
        sensors.checkRAMTemperature(); 
        powerSupply.powerOnRAM(); 
        ram.initialize(); 
        ram.analyze(); 
        videoCard.displayRAMInfo(); 
        powerSupply.powerOnOpticalDrive(); 
        opticalDrive.initialize(); 
        opticalDrive.checkDisk(); 
        videoCard.displayOpticalDriveInfo(); 
        powerSupply.powerOnHardDrive(); 
        hardDrive.spinUp(); 
        hardDrive.checkBootSector(); 
        videoCard.displayHardDriveInfo(); 
        sensors.checkAllTemperatures();
        cout << "|--------------------------------------------------------------|";
        cout << "\n\t\t  Компьютер запустился!\n";
        cout << "|--------------------------------------------------------------|\n";
    }


    void Shutdown() 
    {
        cout << "\n25%\n";
        Sleep(1000);
        cout << "50%\n";
        Sleep(1000);
        cout << "75%\n\n";
        Sleep(1000);
        cout << "|--------------------------------------------------------------|";
        cout << "\n\t\t  Выключение компьютера!\n";
        cout << "|--------------------------------------------------------------|\n";
        Sleep(2000);
        hardDrive.spinDown();
        ram.clear();
        ram.analyze();
        videoCard.displayShutdownMessage();
        opticalDrive.reset();
        powerSupply.powerOffVideoCard();
        powerSupply.powerOffRAM();
        powerSupply.powerOffOpticalDrive();
        powerSupply.powerOffHardDrive();
        sensors.checkVoltage();
        powerSupply.powerOff();
    }
};

int main() 
{
    system("chcp 1251");
    ComputerFacade computer;
    computer.BeginWork();
    Sleep(1000);
    computer.Shutdown();
    return 0;
}
