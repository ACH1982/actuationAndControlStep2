% Creation of bus variable for AEMACE8_AECU8_1
% Bus object creation -----------------------------------------------------
AEMACE8_AECU8_1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
AEMACE8_AECU8_1.Elements(1).Name = 'AEMACE8_AECU8_OPERATIONAL_MODE_CMD';
AEMACE8_AECU8_1.Elements(2).Name = 'AEMACE8_AECU8_WOW1';
AEMACE8_AECU8_1.Elements(3).Name = 'AEMACE8_AECU8_WOW2';
AEMACE8_AECU8_1.Elements(4).Name = 'AEMACE8_AECU8_BRAKE_CMD_AWARENESS';
AEMACE8_AECU8_1.Elements(5).Name = 'AEMACE8_AECU8_HB';
AEMACE8_AECU8_1.Elements(6).Name = 'AEMACE8_AECU8_ACTUATOR_SPEED_CMD';
AEMACE8_AECU8_1.Elements(7).Name = 'AEMACE8_AECU8_DELTAP_FAILURE';
% Signals kind ------------------------------------------------------------
AEMACE8_AECU8_1.Elements(1).DataType = 'uint8';
AEMACE8_AECU8_1.Elements(2).DataType = 'boolean';
AEMACE8_AECU8_1.Elements(3).DataType = 'boolean';
AEMACE8_AECU8_1.Elements(4).DataType = 'boolean';
AEMACE8_AECU8_1.Elements(5).DataType = 'boolean';
AEMACE8_AECU8_1.Elements(6).DataType = 'single';
AEMACE8_AECU8_1.Elements(7).DataType = 'boolean';
% Save bus object
save('AEMACE8_AECU8_1.mat',"AEMACE8_AECU8_1");