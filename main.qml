import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true
signal addition()

    Column{
        spacing: 5
        anchors.centerIn: parent

        Rectangle{
            id: button
            width: 100
            height: 30

            color: "#0066ff"

            TextInput {
                id: buttonLabel
                text: "Add"
                color: "#ffffff"
                anchors.centerIn: parent
            }

            MouseArea{
                id:mouseArea1
                anchors.fill:parent
                hoverEnabled: true

                onClicked:{ addition()}
            }
        }

        Rectangle{
            id:textinputRect1

            width: 100
            height: 18

            color: "#ffffff"

            TextInput{
                id:textinput1
                objectName: "textinput1"
                color:"#0066ff"
                selectionColor: "blue"
                font.pixelSize: 12
                width:parent.width-4
                anchors.centerIn: parent
                focus: true
                text:"1"
            }
        }
        Rectangle{
            id:textinputRect2

            width: 100
            height: 18

            color:"#ffffff"

            TextInput{
                id:textinput2
                objectName: "textinput2"
                color:"#0066ff"
                selectionColor: "blue"
                font.pixelSize: 12
                width: parent.width-4
                anchors.centerIn: parent
                focus: true
                text:"1"
            }
        }
        Rectangle{
            id:memoRect

            width: 100
            height: 35

            color:"#ffffff"

            TextInput{
                id:memo
                color:"#0066ff"
                objectName: "memo"
                wrapMode: TextEdit.Wrap
                width: parent.width
                readOnly:true
            }
        }
    }


}
