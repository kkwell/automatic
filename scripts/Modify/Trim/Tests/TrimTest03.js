// Auto generated by Testing Dashboard
// File        : scripts/Modify/Trim/Tests/TrimTest03.js
// Timestamp   : 2015-11-04 15:54:10
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function TrimTest03() {
    TdbTest.call(this, 'scripts/Modify/Trim/Tests/TrimTest03.js');
}

TrimTest03.prototype = new TdbTest();

TrimTest03.prototype.test00 = function() {
    qDebug('running TrimTest03.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::PolylineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::PolylineToolsPanel::DrawPolylineButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(10, 10.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(10.1, 20.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('DrawPolyline/ArcSegment', 'true');
    this.setToolOption('DrawPolyline/Radius', '10');
    this.setToolOption('DrawPolyline/Sweep', '0.0');
    this.setToolOption('DrawPolyline/Restrict', 'false');
    this.updateToolOptions();
    this.setToolOption('DrawPolyline/ArcSegment', 'true');
    this.setToolOption('DrawPolyline/Radius', '10');
    this.setToolOption('DrawPolyline/Sweep', '0.0');
    this.setToolOption('DrawPolyline/Restrict', 'false');
    this.updateToolOptions();
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(20.1, 29.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(23.6, 23.5);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(16, 24.6);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(19.7, 20.2);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(30.1, 20);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(37.3, 25.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(35.8, 24.8);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(35.7, 25.1);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(35.3, 25);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ModifyToolsPanel::TrimButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(12.4, 26.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(16.5, 23.6);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(24.5, 26.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('TrimTest03_000.dxf');
    this.tearDown();
    qDebug('finished TrimTest03.test00()');
};

