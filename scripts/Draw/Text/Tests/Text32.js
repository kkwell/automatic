// Auto generated by Testing Dashboard
// File        : scripts/Draw/Text/Tests/Text32.js
// Timestamp   : 2021-02-03
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function Text32() {
    TdbTest.call(this, 'scripts/Draw/Text/Tests/Text32.js');
}

Text32.prototype = new TdbTest();

Text32.prototype.test00 = function() {
    qDebug('running Text32.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Text/Tests/data/text32.dxf');
    this.selectAll();
    this.triggerCommand('explode');
    this.verifyDrawing('Text32_000.dxf');
    this.triggerCommand('explode');
    this.deselectAll();
    this.verifyDrawing('Text32_001.dxf');
    this.tearDown();
    qDebug('finished Text32.test00()');
};

