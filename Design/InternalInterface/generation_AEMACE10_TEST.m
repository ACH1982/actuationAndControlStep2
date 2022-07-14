% Creation of bus variable ACE8_FCC1_8
AEMACE10_TEST = Simulink.Bus; 
% Signals name ------------------------------------------------------------
AEMACE10_TEST.Elements(1).Name = 'AEMACE10_demandDCL';
AEMACE10_TEST.Elements(2).Name = 'AEMACE10_RLimitedOffsetFCL';
AEMACE10_TEST.Elements(3).Name = 'AEMACE10_demand';
AEMACE10_TEST.Elements(4).Name = 'AEMACE10_RLimitedDemand';
AEMACE10_TEST.Elements(5).Name = 'AEMACE10_command';
AEMACE10_TEST.Elements(6).Name = 'AEMACE10_mode';
% Signals kind ------------------------------------------------------------
AEMACE10_TEST.Elements(1).DataType = 'single';
AEMACE10_TEST.Elements(2).DataType = 'single';
AEMACE10_TEST.Elements(3).DataType = 'single';
AEMACE10_TEST.Elements(4).DataType = 'single';
AEMACE10_TEST.Elements(5).DataType = 'single';
AEMACE10_TEST.Elements(6).DataType = 'uint8';
% Save bus object
save('AEMACE10_TEST.mat',"AEMACE10_TEST");