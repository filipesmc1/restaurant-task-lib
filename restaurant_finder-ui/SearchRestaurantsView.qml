import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15



Grid {
        id: gridFront

        x: 100; y: 100; height: 300; width: 300;

        columns: 3; rows: 3; spacing: 50;

        property alias searchRestaurantsButton: searchRestaurantsButton
        property alias restaurantListView: restaurantListView
        readonly property string time: getTime()


        function getTime(){

            const result = "%1:%2";
            const hora = hoursTumbler.currentIndex
            const minuto = minutesTumbler.currentIndex

            console.log(hora, minuto)
            if(hora.currentIndex === -1){

                hora.currentIndex = 0

            }else if(minuto.currentIndex === -1){

                minuto.currentIndex = 0
            }

            return result.replace("%1", hora).replace("%2", minuto)
        }


    Rectangle {

                width: frame.implicitWidth + 15
                height: frame.implicitHeight + 15

                FontMetrics {
                    id: fontMetrics
                }

                Component {
                    id: delegateComponent

                    Label {

                        opacity: 1.0 - Math.abs(Tumbler.displacement) / (Tumbler.tumbler.visibleItemCount / 2)
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                        font.pixelSize: fontMetrics.font.pixelSize * 1.25
                    }
                }

            Frame {
                id: frame
                padding: 0
                anchors.centerIn: parent

                Row {
                    id: row

                    Tumbler {
                        id: hoursTumbler
                        model:

                            ["00", "01", "02", "03", "04", "05", "06", "07",
                             "08", "09", "10", "11", "12", "13", "14", "15",
                             "16","17","18","19","20","21","22","23"]
                    }

                    Tumbler {
                        id: minutesTumbler
                        model:
                            ["00", "01", "02", "03", "04", "05", "06", "07", "08", "09",
                            "10","11", "12", "13", "14", "15", "16", "17","18", "19", "20",
                            "21","22", "23", "24", "25", "26", "27", "28", "29", "30", "31",
                            "32", "33", "34", "35", "36", "37", "38", "39", "40", "41","42",
                            "43","44", "45", "46", "47", "48","49", "50", "51", "52","53",
                            "54","55", "56", "57", "58", "59"]

                    }
                }

            }
        }
        Rectangle {
            Button {
            x:5; y: 215;
            id: searchRestaurantsButton
            text: qsTr("Buscar Restaurantes")
            }
        }
        Rectangle {

                id: restaurantViewContainer

                width: 200;
                height: 300;

                ListView{

                    id: restaurantListView
                    anchors.fill: parent
                    clip: true


                    model: ListModel{

                        ListElement {restaurant: "Filipe"}
                        ListElement {restaurant: "Adelia"}
                        ListElement {restaurant: "Maria"}
                        ListElement {restaurant: "Rurik"}
                    }

                    delegate: ItemDelegate {
                                text: modelData.restaurant || model.restaurant
                                font.bold: true

                }


             }
       }
}

