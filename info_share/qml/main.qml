import QtQuick 2.1
import QtQuick.Controls 1.0
import Changer 1.0

ApplicationWindow {
    title: "Info sharing"
    visible: true
    width: 800;
    height: 600

    Changer {
        anchors.centerIn: parent
        width: parent.width / 2
        height: parent.height / 2
        Rectangle {
            anchors.fill: parent
            color: parent.color
        }
    }
}
