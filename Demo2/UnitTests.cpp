#include "ui_mainwindow.h"
#include <QtTest/QtTest>
#include "mainwindow.h"

class TestGUI: public QObject
{
    Q_OBJECT



private slots:

    void testGUIButtons();
    void testGUICheckBoxes();
    void testGUIComboBoxes();
};


//Testing all GUI Buttons

void TestGUI::testGUIButtons()
{
    //Testing Left Click on Open Image button

    QPushButton but_openImage;

    QTest::mouseClick(&but_openImage, Qt::LeftButton);

    //Testing Left Click on Sort Image button

    QPushButton but_Sortimage;

    QTest::mouseClick(&but_Sortimage, Qt::LeftButton);

    //Testing Left Click on Add Class button

    QPushButton but_AddClass;

    QTest::mouseClick(&but_AddClass, Qt::LeftButton);

    //Testing Left Click on Remove Class button

    QPushButton but_RemoveClass;

    QTest::mouseClick(&but_RemoveClass, Qt::LeftButton);

    //Testing Left Click on Create Polygon button

    QPushButton but_CreatePolygon;

    QTest::mouseClick(&but_CreatePolygon, Qt::LeftButton);
 }

void TestGUI::testGUICheckBoxes()
{
    //Testing Left Click on Sort By Date checkbox

    QCheckBox checkBox_Date;

    QTest::mouseClick(&checkBox_Date, Qt::LeftButton);

    //Testing Left Click on Sort By File Name checkbox

    QCheckBox checkBox_File;

    QTest::mouseClick(&checkBox_File, Qt::LeftButton);
}

void TestGUI::testGUIComboBoxes()
{

    //Testing Left Click on Choose Shape combo box

    QComboBox comboBox_ChooseShape;

    QTest::mouseClick(&comboBox_ChooseShape, Qt::LeftButton);

    //Testing Left Click on Choose Class combo box

    QComboBox comboBox_Class;

    QTest::mouseClick(&comboBox_Class, Qt::LeftButton);

    //Testing Left Click on Images combo box

    QComboBox comboBoxImages;

    QTest::mouseClick(&comboBoxImages, Qt::LeftButton);

}
/*
void TestGUI::testSignals()
{

}
*/

QTEST_MAIN(TestGUI)
#include "TestGUI.moc"


