function xcp = ARINCFCCD2CUxcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);

    

   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.008;
xcp.events(1).offset     = 0.0;
         
xcp.events(2).id         = 1;
xcp.events(2).sampletime = 0.016;
xcp.events(2).offset     = 0.0;
         
xcp.events(3).id         = 2;
xcp.events(3).sampletime = 0.064;
xcp.events(3).offset     = 0.0;

function n = getNumParameters
n = 0;

function n = getNumSignals
n = 0;

function n = getNumEvents
n = 3;

function n = getNumModels
n = 1;

