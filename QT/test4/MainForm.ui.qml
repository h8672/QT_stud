import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: item1
    width: 640
    height: 480

    property alias button1: button1
    property alias button2: button2

    RowLayout {
        anchors.top: parent.top
        anchors.topMargin: 28
        transformOrigin: Item.Top
        anchors.verticalCenterOffset: -201
        anchors.horizontalCenterOffset: 1
        anchors.centerIn: parent

        Button {
            id: button1
            text: qsTr("Press Me 1")
        }

        Button {
            id: button2
            text: qsTr("Press Me 2")
        }
    }
}
