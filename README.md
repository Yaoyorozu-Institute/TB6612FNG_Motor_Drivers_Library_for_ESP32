# TB6612FNG_Motor_Drivers_Library_for_ESP32
ESP32を用いて、TB6612FNGを介してモーターを動かすためのライブラリです。
動作検証済み回路の構成は以下の通りです。

ＥＳＰ３２－ＤｅｖＫｉｔＣ－３２Ｅ　ＥＳＰ３２－ＷＲＯＯＭ－３２Ｅ開発ボード　４ＭＢ

https://akizukidenshi.com/catalog/g/gM-15673/

ＴＢ６６１２モータドライバ　ブレークアウトボードキット

https://akizukidenshi.com/catalog/g/gK-16947/

exampleでは、IO12をAIN1に、IO14をAIN2に、PWMAを27に接続し、ESP32内のタイマーチャンネルとして5番を使用しています。
