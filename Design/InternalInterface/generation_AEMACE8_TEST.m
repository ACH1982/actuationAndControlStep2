% Creation of bus variable ACE8_FCC1_8
AEMACE8_TEST = Simulink.Bus; 
% Signals name ------------------------------------------------------------
AEMACE8_TEST.Elements(1).Name = 'AEMACE8_demandDCL';
AEMACE8_TEST.Elements(2).Name = 'AEMACE8_RLimitedOffsetFCL';
AEMACE8_TEST.Elements(3).Name = 'AEMACE8_demand';
AEMACE8_TEST.Elements(4).Name = 'AEMACE8_RLimitedDemand';
AEMACE8_TEST.Elements(5).Name = 'AEMACE8_command';
AEMACE8_TEST.Elements(6).Name = 'AEMACE8_mode';
% Signals kind ------------------------------------------------------------
AEMACE8_TEST.Elements(1).DataType = 'single';
AEMACE8_TEST.Elements(2).DataType = 'single';
AEMACE8_TEST.Elements(3).DataType = 'single';
AEMACE8_TEST.Elements(4).DataType = 'single';
AEMACE8_TEST.Elements(5).DataType = 'single';
AEMACE8_TEST.Elements(6).DataType = 'uint8';
% Save bus object
save('AEMACE8_TEST.mat',"AEMACE8_TEST");