% Creation of bus variable ACE8_FCC1_8
SEMACE1_TEST = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE1_TEST.Elements(1).Name = 'SEMACE1_demandDCL';
SEMACE1_TEST.Elements(2).Name = 'SEMACE1_RLimitedOffsetFCL';
SEMACE1_TEST.Elements(3).Name = 'SEMACE1_demand';
SEMACE1_TEST.Elements(4).Name = 'SEMACE1_RLimitedDemand';
SEMACE1_TEST.Elements(5).Name = 'SEMACE1_command';
SEMACE1_TEST.Elements(6).Name = 'SEMACE1_mode';
% Signals kind ------------------------------------------------------------
SEMACE1_TEST.Elements(1).DataType = 'single';
SEMACE1_TEST.Elements(2).DataType = 'single';
SEMACE1_TEST.Elements(3).DataType = 'single';
SEMACE1_TEST.Elements(4).DataType = 'single';
SEMACE1_TEST.Elements(5).DataType = 'single';
SEMACE1_TEST.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE1_TEST.mat',"SEMACE1_TEST");