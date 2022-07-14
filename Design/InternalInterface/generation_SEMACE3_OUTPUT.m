% Creation of bus variable ACE8_FCC1_8
SEMACE3_OUTPUT = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SEMACE3_OUTPUT.Elements(1).Name = 'SEMACE3_command';
SEMACE3_OUTPUT.Elements(2).Name = 'SEMACE3_mode';
SEMACE3_OUTPUT.Elements(3).Name = 'SEMACE3_gearingAPP';
SEMACE3_OUTPUT.Elements(4).Name = 'SEMACE3_RAM_POS';
SEMACE3_OUTPUT.Elements(5).Name = 'SEMACE3_ROLL_POS';
SEMACE3_OUTPUT.Elements(6).Name = 'SEMACE3_SPD_SEL';
% Signals kind ------------------------------------------------------------
SEMACE3_OUTPUT.Elements(1).DataType = 'single';
SEMACE3_OUTPUT.Elements(2).DataType = 'uint8';
SEMACE3_OUTPUT.Elements(3).DataType = 'single';
SEMACE3_OUTPUT.Elements(4).DataType = 'single';
SEMACE3_OUTPUT.Elements(5).DataType = 'single';
SEMACE3_OUTPUT.Elements(6).DataType = 'uint8';
% Save bus object
save('SEMACE3_OUTPUT.mat',"SEMACE3_OUTPUT");