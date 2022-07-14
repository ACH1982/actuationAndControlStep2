% Creation of bus variable ACE8_FCC1_8
SEMACE1_OUTPUT = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE1_OUTPUT.Elements(1).Name = 'SEMACE1_command';
SEMACE1_OUTPUT.Elements(2).Name = 'SEMACE1_mode';
SEMACE1_OUTPUT.Elements(3).Name = 'SEMACE1_gearingAPP';
SEMACE1_OUTPUT.Elements(4).Name = 'SEMACE1_RAM_POS';
SEMACE1_OUTPUT.Elements(5).Name = 'SEMACE1_ROLL_POS';
SEMACE1_OUTPUT.Elements(6).Name = 'SEMACE1_SPD_SEL';
% Signals kind ------------------------------------------------------------
SEMACE1_OUTPUT.Elements(1).DataType = 'single';
SEMACE1_OUTPUT.Elements(2).DataType = 'uint8';
SEMACE1_OUTPUT.Elements(3).DataType = 'single';
SEMACE1_OUTPUT.Elements(4).DataType = 'single';
SEMACE1_OUTPUT.Elements(5).DataType = 'single';
SEMACE1_OUTPUT.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE1_OUTPUT.mat',"SEMACE1_OUTPUT");