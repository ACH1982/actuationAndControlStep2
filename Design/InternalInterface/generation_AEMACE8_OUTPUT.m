% Creation of bus variable ACE8_FCC1_8
AEMACE8_OUTPUT = Simulink.Bus; 
% Signals name ------------------------------------------------------------
AEMACE8_OUTPUT.Elements(1).Name = 'AEMACE8_command';
AEMACE8_OUTPUT.Elements(2).Name = 'AEMACE8_mode';
AEMACE8_OUTPUT.Elements(3).Name = 'AEMACE8_gearingAPP';
AEMACE8_OUTPUT.Elements(4).Name = 'AEMACE8_RAM_POS';
AEMACE8_OUTPUT.Elements(5).Name = 'AEMACE8_ROLL_POS';
AEMACE8_OUTPUT.Elements(6).Name = 'AEMACE8_SPD_SEL';
% Signals kind ------------------------------------------------------------
AEMACE8_OUTPUT.Elements(1).DataType = 'single';
AEMACE8_OUTPUT.Elements(2).DataType = 'uint8';
AEMACE8_OUTPUT.Elements(3).DataType = 'single';
AEMACE8_OUTPUT.Elements(4).DataType = 'single';
AEMACE8_OUTPUT.Elements(5).DataType = 'single';
AEMACE8_OUTPUT.Elements(6).DataType = 'uint8';
% Save bus object
save('AEMACE8_OUTPUT.mat',"AEMACE8_OUTPUT");