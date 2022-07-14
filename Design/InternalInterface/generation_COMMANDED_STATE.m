% Creation of bus variable ACE8_FCC1_8
COMMANDED_STATE = Simulink.Bus; 
% Signals name ------------------------------------------------------------
COMMANDED_STATE.Elements(1).Name = 'AEMACE8_ON';
COMMANDED_STATE.Elements(2).Name = 'AEMACE10_ON';
COMMANDED_STATE.Elements(3).Name = 'SEMACE1_ON';
COMMANDED_STATE.Elements(4).Name = 'SEMACE2_ON';
COMMANDED_STATE.Elements(5).Name = 'SEMACE3_ON';
COMMANDED_STATE.Elements(6).Name = 'SEMACE4_ON';
COMMANDED_STATE.Elements(7).Name = 'WEMACE1_ON';
COMMANDED_STATE.Elements(8).Name = 'WEMACE2_ON';
COMMANDED_STATE.Elements(9).Name = 'AEMACE8_STBY';
COMMANDED_STATE.Elements(10).Name = 'AEMACE10_STBY';
COMMANDED_STATE.Elements(11).Name = 'SEMACE1_STBY';
COMMANDED_STATE.Elements(12).Name = 'SEMACE2_STBY';
COMMANDED_STATE.Elements(13).Name = 'SEMACE3_STBY';
COMMANDED_STATE.Elements(14).Name = 'SEMACE4_STBY';
COMMANDED_STATE.Elements(15).Name = 'WEMACE1_STBY';
COMMANDED_STATE.Elements(16).Name = 'WEMACE2_STBY';
% Signals kind ------------------------------------------------------------
COMMANDED_STATE.Elements(1).DataType = 'boolean';
COMMANDED_STATE.Elements(2).DataType = 'boolean';
COMMANDED_STATE.Elements(3).DataType = 'boolean';
COMMANDED_STATE.Elements(4).DataType = 'boolean';
COMMANDED_STATE.Elements(5).DataType = 'boolean';
COMMANDED_STATE.Elements(6).DataType = 'boolean';
COMMANDED_STATE.Elements(7).DataType = 'boolean';
COMMANDED_STATE.Elements(8).DataType = 'boolean';
COMMANDED_STATE.Elements(9).DataType = 'boolean';
COMMANDED_STATE.Elements(10).DataType = 'boolean';
COMMANDED_STATE.Elements(11).DataType = 'boolean';
COMMANDED_STATE.Elements(12).DataType = 'boolean';
COMMANDED_STATE.Elements(13).DataType = 'boolean';
COMMANDED_STATE.Elements(14).DataType = 'boolean';
COMMANDED_STATE.Elements(15).DataType = 'boolean';
COMMANDED_STATE.Elements(16).DataType = 'boolean';
% Save bus object
save('COMMANDED_STATE.mat',"COMMANDED_STATE");