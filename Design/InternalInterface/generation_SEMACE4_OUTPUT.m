% Creation of bus variable ACE8_FCC1_8
SEMACE4_OUTPUT = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE4_OUTPUT.Elements(1).Name = 'SEMACE4_command';
SEMACE4_OUTPUT.Elements(2).Name = 'SEMACE4_mode';
SEMACE4_OUTPUT.Elements(3).Name = 'SEMACE4_gearingAPP';
SEMACE4_OUTPUT.Elements(4).Name = 'SEMACE4_RAM_POS';
SEMACE4_OUTPUT.Elements(5).Name = 'SEMACE4_ROLL_POS';
SEMACE4_OUTPUT.Elements(6).Name = 'SEMACE4_SPD_SEL';
% Signals kind ------------------------------------------------------------
SEMACE4_OUTPUT.Elements(1).DataType = 'single';
SEMACE4_OUTPUT.Elements(2).DataType = 'uint8';
SEMACE4_OUTPUT.Elements(3).DataType = 'single';
SEMACE4_OUTPUT.Elements(4).DataType = 'single';
SEMACE4_OUTPUT.Elements(5).DataType = 'single';
SEMACE4_OUTPUT.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE4_OUTPUT.mat',"SEMACE4_OUTPUT");