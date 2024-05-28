#include <iostream>
#include <windows.h>
using namespace std;

class VideoCard 
{
public:
    void initialize() 
    {
        cout << "���������� ����������������..." << endl; 
        Sleep(500);
    }

    void checkMonitorConnection() 
    {
        cout << "���������� ��������� ����� � ���������..." << endl;
        Sleep(500);
    }

    void displayRAMInfo() 
    {
        cout << "���������� ������� ������ �� ����������� ������..." << endl;
        Sleep(500);
    }

    void displayOpticalDriveInfo() 
    {
        cout << "���������� ������� ���������� �� ���������� ������ ������..." << endl;
        Sleep(500);
    }

    void displayHardDriveInfo()
    {
        cout << "���������� ������� ������ � ����������..." << endl;
        Sleep(500);
    }

    void displayShutdownMessage()
    {
        cout << "���������� ������� ���������� ���������..." << endl;
        Sleep(500);
    }
};

class RAM 
{
public:
    void initialize() 
    {
        cout << "����������� ������ �����������..." << endl;
        Sleep(500);
    }

    void analyze() 
    {
        cout << "����������� ������ �������������..." << endl;
        Sleep(500);
    }

    void clear()
    {
        cout << "����������� ������ ���������..." << endl;
        Sleep(500);
    }
};

class HardDrive 
{
public:
    void spinUp() 
    {
        cout << "��������� ��������������..." << endl;
        Sleep(500);
    }

    void checkBootSector() 
    {
        cout << "��������� ��������� ����������� ������..." << endl;
        Sleep(500);
    }

    void spinDown() 
    {
        cout << "��������� ���������������..." << endl;
        Sleep(500);
    }
};

class OpticalDrive 
{
public:
    void initialize() 
    {
        cout << "���������� ������ ���������� ������ �����������..." << endl;
        Sleep(500);
    }

    void checkDisk() 
    {
        cout << "���������� ������ ���������� ������ ��������� ������� �����..." << endl;
        Sleep(500);
    }

    void reset()
    {
        cout << "���������� ������ ���������� ������ ������������ � �������� �������..." << endl;
        Sleep(500);
    }
};

class PowerSupply 
{
public:
    void powerOn() 
    {
        cout << "���� ������� ����������..." << endl;
        Sleep(500);
    }

    void powerOnVideoCard() 
    {
        cout << "���� ������� ������ ������� �� ����������..." << endl;
        Sleep(500);
    }

    void powerOnRAM() 
    {
        cout << "���� ������� ������ ������� �� ����������� ������..." << endl;
        Sleep(500);
    }

    void powerOnOpticalDrive() 
    {
        cout << "���� ������� ������ ������� �� ���������� ������ ������..." << endl;
        Sleep(500);
    }

    void powerOnHardDrive() 
    {
        cout << "���� ������� ������ ������� �� ���������..." << endl;
        Sleep(500);
    }

    void powerOffVideoCard() 
    {
        cout << "���� ������� ���������� ������� ����������..." << endl;
        Sleep(500);
    }

    void powerOffRAM() 
    {
        cout << "���� ������� ���������� ������� ����������� ������..." << endl;
        Sleep(500);
    }

    void powerOffOpticalDrive() 
    {
        cout << "���� ������� ���������� ������� ���������� ������ ������..." << endl;
        Sleep(500);
    }

    void powerOffHardDrive() 
    {
        cout << "���� ������� ���������� ������� ����������..." << endl;
        Sleep(500);
    }

    void powerOff() 
    {
        cout << "���� ������� �����������..." << endl;
        Sleep(500);
    }
};

class Sensors 
{
public:
    void checkVoltage() 
    {
        cout << "������� ��������� ����������..." << endl;
        Sleep(500);
    }

    void checkPowerSupplyTemperature() 
    {
        cout << "������� ��������� ����������� � ����� �������..." << endl;
        Sleep(500);
    }

    void checkVideoCardTemperature() 
    {
        cout << "������� ��������� ����������� � ����������..." << endl;
        Sleep(500);
    }

    void checkRAMTemperature() 
    {
        cout << "������� ��������� ����������� � ����������� ������..." << endl;
        Sleep(500);
    }

    void checkAllTemperatures() 
    {
        cout << "������� ��������� ����������� ���� ������..." << endl;
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
        cout << "\n\t\t  ��������� ����������!\n";
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
        cout << "\n\t\t  ���������� ����������!\n";
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
