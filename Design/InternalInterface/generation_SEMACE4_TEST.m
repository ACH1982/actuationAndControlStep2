% Creation of bus variable ACE8_FCC1_8
SEMACE4_TEST = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE4_TEST.Elements(1).Name = 'SEMACE4_demandDCL';
SEMACE4_TEST.Elements(2).Name = 'SEMACE4_RLimitedOffsetFCL';
SEMACE4_TEST.Elements(3).Name = 'SEMACE4_demand';
SEMACE4_TEST.Elements(4).Name = 'SEMACE4_RLimitedDemand';
SEMACE4_TEST.Elements(5).Name = 'SEMACE4_command';
SEMACE4_TEST.Elements(6).Name = 'SEMACE4_mode';
% Signals kind ------------------------------------------------------------
SEMACE4_TEST.Elements(1).DataType = 'single';
SEMACE4_TEST.Elements(2).DataType = 'single';
SEMACE4_TEST.Elements(3).DataType = 'single';
SEMACE4_TEST.Elements(4).DataType = 'single';
SEMACE4_TEST.Elements(5).DataType = 'single';
SEMACE4_TEST.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE4_TEST.mat',"SEMACE4_TEST");