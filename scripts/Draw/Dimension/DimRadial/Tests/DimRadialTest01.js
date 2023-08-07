// Auto generated by Testing Dashboard
// File        : scripts/Draw/Dimension/DimRadial/Tests/DimRadialTest01.js
// Timestamp   : 2021-11-15 14:34:19
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function DimRadialTest01() {
    TdbTest.call(this, 'scripts/Draw/Dimension/DimRadial/Tests/DimRadialTest01.js');
}

DimRadialTest01.prototype = new TdbTest();

DimRadialTest01.prototype.test00 = function() {
    qDebug('running DimRadialTest01.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::CircleToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::CircleToolsPanel::CircleCPButton');
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(20, 20);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(40, 19.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(49.7, 36.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(49.2, 37.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::DimensionToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::DimensionToolsPanel::DimRadialButton');
    this.setToolOption('Dimension/Prefix', '(No prefix)');
    this.setToolOption('Dimension/Text', '');
    this.setToolOption('Dimension/UpperTolerance', '');
    this.setToolOption('Dimension/LowerTolerance', '');
    this.setToolOption('Dimension/Scale', '1:1');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(32.4, 35.8);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(29.9, 30.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(40, 46.8);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(39.3, 47);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(30, 29.6);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(32.3, 32.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5,5));
    var p = new RVector(40.9, 41.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.verifyDrawing('DimRadialTest01_000.dxf');
    this.tearDown();
    qDebug('finished DimRadialTest01.test00()');
};

