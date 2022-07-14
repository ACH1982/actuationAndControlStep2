% Creation of bus variable ACE8_FCC1_8
SEMACE2_OUTPUT = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE2_OUTPUT.Elements(1).Name = 'SEMACE2_command';
SEMACE2_OUTPUT.Elements(2).Name = 'SEMACE2_mode';
SEMACE2_OUTPUT.Elements(3).Name = 'SEMACE2_gearingAPP';
SEMACE2_OUTPUT.Elements(4).Name = 'SEMACE2_RAM_POS';
SEMACE2_OUTPUT.Elements(5).Name = 'SEMACE2_ROLL_POS';
SEMACE2_OUTPUT.Elements(6).Name = 'SEMACE2_SPD_SEL';
% Signals kind ------------------------------------------------------------
SEMACE2_OUTPUT.Elements(1).DataType = 'single';
SEMACE2_OUTPUT.Elements(2).DataType = 'uint8';
SEMACE2_OUTPUT.Elements(3).DataType = 'single';
SEMACE2_OUTPUT.Elements(4).DataType = 'single';
SEMACE2_OUTPUT.Elements(5).DataType = 'single';
SEMACE2_OUTPUT.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE2_OUTPUT.mat',"SEMACE2_OUTPUT");