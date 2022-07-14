% Creation of bus variable ACE8_FCC1_8
AEMACE10_OUTPUT = Simulink.Bus; 
% Signals name ------------------------------------------------------------
AEMACE10_OUTPUT.Elements(1).Name = 'AEMACE10_command';
AEMACE10_OUTPUT.Elements(2).Name = 'AEMACE10_mode';
AEMACE10_OUTPUT.Elements(3).Name = 'AEMACE10_gearingAPP';
AEMACE10_OUTPUT.Elements(4).Name = 'AEMACE10_RAM_POS';
AEMACE10_OUTPUT.Elements(5).Name = 'AEMACE10_ROLL_POS';
AEMACE10_OUTPUT.Elements(6).Name = 'AEMACE10_SPD_SEL';
% Signals kind ------------------------------------------------------------
AEMACE10_OUTPUT.Elements(1).DataType = 'single';
AEMACE10_OUTPUT.Elements(2).DataType = 'uint8';
AEMACE10_OUTPUT.Elements(3).DataType = 'single';
AEMACE10_OUTPUT.Elements(4).DataType = 'single';
AEMACE10_OUTPUT.Elements(5).DataType = 'single';
AEMACE10_OUTPUT.Elements(6).DataType = 'uint8';
% Save bus object
save('AEMACE10_OUTPUT.mat',"AEMACE10_OUTPUT");