#ifndef UNTITLED_COMPUTER_H
#define UNTITLED_COMPUTER_H
#include "header.h"
#include <iostream>
#include <cstdlib>

const int SIZE = 30;

enum operatingSystem {Windows, MacOS, Linux, Android, IOS, noname};
enum chargingType {USB_C, microUSB, Lightning, noPower};

operatingSystem choiceSystem ();
chargingType choicePower();






class Computer
{
protected:
    char brandName[SIZE]{};                   //имя бренда
    char modelName[SIZE]{};                   //имя модели
    int RAM;                                //количество оперативной памяти
    double storageCapacity;                 //объем хранилища
    operatingSystem system;                 //тип операционной системы
    double price;                           //цена
    double weight;                          //вес
public:
    Computer();
    Computer(const Computer &other);
    void inputComputerData ();

    void setBrandName ();
    char* getBrandName ();

    void setModelName ();
    char* getModelName ();

    void setRAM ();
    [[nodiscard]] int getRAM () const;

    void setStorageCapacity();
    [[nodiscard]] double getStorageCapacity() const;

    void setSystem();
    operatingSystem getSystem();

    void setPrice();
    [[nodiscard]] double getPrice() const;

    void setWeight();
    [[nodiscard]] double getWeight() const;
};






class Desktop : public Computer
{
protected:
    char computerCase[SIZE]{};                //тип корпуса
    char graphicCardModel[SIZE]{};            //модель графической карты
    int portCount;                          //кол-во портов
    double powerBlock;                      //мощность блока питания
public:
    Desktop();
    Desktop(const Desktop& other);
    void inputDeskTopData();

    void setComputerCase();
    char* getComputerCase();

    void setGraphicCardModel();
    char* getGraphicCardModel();

    void setPortCount();
    [[nodiscard]] int getPortCount() const;

    void setPowerBlock();
    [[nodiscard]] double getPowerBlock() const;
};






class Monoblock : public Desktop
{
protected:
    double screenSize;                      //размер экрана
    bool hasTouchscreen;                    //сенсорный ли экран
    int cameraResolution;                   //разрешение камеры
public:
    Monoblock();
    Monoblock(const Monoblock& other);
    void inputMonoblockData();

    void setScreenSize();
    [[nodiscard]] double getScreenSize() const;

    void setHasTouchscreen();
    [[nodiscard]] bool getHasTouchscreen() const;

    void setCameraResolution();
    [[nodiscard]] int getCameraResolution() const;
};






class PortableDevice : public Computer
{
protected:
    int batteryPower;                       //мощность батареи
    double screenSize;                      //размер экрана
    bool hasWiFi;                           //наличие wi-fi
    bool hasBluetooth;                      //наличие bluetooth
public:
    PortableDevice();
    PortableDevice(const PortableDevice& other);
    void inputPortableDeviceData();

    void setBatteryPower();
    [[nodiscard]] int getBatteryPower() const;

    void setScreenSize();
    [[nodiscard]] double getScreenSize() const;

    void setHasWiFi();
    [[nodiscard]] bool getHasWiFi() const;

    void setHasBluetooth();
    [[nodiscard]] bool getHasBluetooth() const;
};






class Laptop : public PortableDevice
{
protected:
    int keyCount;
    int portCount;                          //кол-во портов
    bool keyboardBacklight;                 //подсветка клавиатуры
    double touchpadSize;                    //размер тачпада
public:
    Laptop();
    Laptop(const Laptop &other);
    void inputLaptopData ();

    void setKeyCount();
    [[nodiscard]] int getKeyCount() const;

    void setPortCount();
    [[nodiscard]] int getPortCount() const;

    void setKeyboardBacklight();
    [[nodiscard]] bool getKeyboardBacklight() const;

    void setTouchpadSize();
    [[nodiscard]] double getTouchpadSize() const;
};






class tabletComputer : public PortableDevice
{
protected:
    bool hasStylus;                         //наличие стилуса
    bool hasSIM;                            //наличие симки
    bool hasGPS;                            //наличие GPS;
    chargingType power;                     //тип зарядки
    double screenSize;                      //размер экрана
public:
    tabletComputer();
    tabletComputer(const tabletComputer& other);
    void inputTabletComputerData();

    void setHasStylus();
    [[nodiscard]] bool getHasStylus() const;

    void setHasSIM();
    [[nodiscard]] bool getHasSIM() const;

    void setHasGPS();
    [[nodiscard]] bool getHasGPS() const;

    void setPower();
    [[nodiscard]] chargingType getPower() const;

    void setSizeScreen();
    [[nodiscard]] double getSizeScreen() const;
};






#endif //UNTITLED_COMPUTER_H
