// Auto generated by Testing Dashboard
// File        : scripts/Draw/Text/Tests/Text31.js
// Timestamp   : 2021-02-03
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function Text31() {
    TdbTest.call(this, 'scripts/Draw/Text/Tests/Text31.js');
}

Text31.prototype = new TdbTest();

Text31.prototype.test00 = function() {
    qDebug('running Text31.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Text/Tests/data/text31.dxf');
    this.selectAll();
    this.triggerCommand('explode');
    this.verifyDrawing('Text31_000.dxf');
    this.triggerCommand('explode');
    this.deselectAll();
    this.verifyDrawing('Text31_001.dxf');
    this.tearDown();
    qDebug('finished Text31.test00()');
};

