% Creation of bus variable ACE8_FCC1_8
SEMACE2_TEST = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE2_TEST.Elements(1).Name = 'SEMACE2_demandDCL';
SEMACE2_TEST.Elements(2).Name = 'SEMACE2_RLimitedOffsetFCL';
SEMACE2_TEST.Elements(3).Name = 'SEMACE2_demand';
SEMACE2_TEST.Elements(4).Name = 'SEMACE2_RLimitedDemand';
SEMACE2_TEST.Elements(5).Name = 'SEMACE2_command';
SEMACE2_TEST.Elements(6).Name = 'SEMACE2_mode';
% Signals kind ------------------------------------------------------------
SEMACE2_TEST.Elements(1).DataType = 'single';
SEMACE2_TEST.Elements(2).DataType = 'single';
SEMACE2_TEST.Elements(3).DataType = 'single';
SEMACE2_TEST.Elements(4).DataType = 'single';
SEMACE2_TEST.Elements(5).DataType = 'single';
SEMACE2_TEST.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE2_TEST.mat',"SEMACE2_TEST");