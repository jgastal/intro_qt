import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    title: "Animations"
    visible: true
    minimumWidth: 800;
    minimumHeight: 600

    Rectangle {
        id: r1
        x: 50
        y: 50
        width: 100
        height: 100
        color: "red"

        Behavior on x {
            PropertyAnimation {
                duration: 5000
                easing.type: Easing.OutElastic
            }
        }
        Behavior on y {
            PropertyAnimation {
                duration: 5000
                easing.type: Easing.OutElastic
            }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                parent.x = 300
                parent.y = 300
            }
        }
    }

    Rectangle {
        id: r2
        anchors.left: r1.left
        anchors.top: r1.bottom
        width: 100
        height: 100
        color: "green"
    }

    Rectangle {
        anchors.left: r2.right
        anchors.verticalCenter: r2.top
        width: 100
        height: 100
        color: "blue"
    }
}
