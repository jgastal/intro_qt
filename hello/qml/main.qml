import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    title: "Hello"
    visible: true
    x: 10
    y: 10
    width: 600
    height: 200
    toolBar: ToolBar {
        id: toolbar

        RowLayout {
            ToolButton {
                text: "Undo"
                onClicked: { console.log("undo"); }
            }

            ToolButton {
                text: "Redo"
                onClicked: { console.log("redo"); }
            }
        }
    }

    Rectangle {
        anchors.centerIn: parent
        width: parent.width * 2 / 3
        height: parent.height * 2 /3
        color: "red"

        Text {
            anchors.centerIn: parent
            color: "green"
            text: "Qt Rocks!"
            font.pointSize: 30
        }
    }
}
