% Creation of bus variable ACE8_FCC1_8
SEMACE3_TEST = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE3_TEST.Elements(1).Name = 'SEMACE3_demandDCL';
SEMACE3_TEST.Elements(2).Name = 'SEMACE3_RLimitedOffsetFCL';
SEMACE3_TEST.Elements(3).Name = 'SEMACE3_demand';
SEMACE3_TEST.Elements(4).Name = 'SEMACE3_RLimitedDemand';
SEMACE3_TEST.Elements(5).Name = 'SEMACE3_command';
SEMACE3_TEST.Elements(6).Name = 'SEMACE3_mode';
% Signals kind ------------------------------------------------------------
SEMACE3_TEST.Elements(1).DataType = 'single';
SEMACE3_TEST.Elements(2).DataType = 'single';
SEMACE3_TEST.Elements(3).DataType = 'single';
SEMACE3_TEST.Elements(4).DataType = 'single';
SEMACE3_TEST.Elements(5).DataType = 'single';
SEMACE3_TEST.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE3_TEST.mat',"SEMACE3_TEST");