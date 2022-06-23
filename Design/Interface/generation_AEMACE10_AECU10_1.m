% Creation of bus variable for AEMACE10_AECU10_1
% Bus object creation -----------------------------------------------------
AEMACE10_AECU10_1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
AEMACE10_AECU10_1.Elements(1).Name = 'AEMACE10_AECU10_OPERATIONAL_MODE_CMD';
AEMACE10_AECU10_1.Elements(2).Name = 'AEMACE10_AECU10_WOW1';
AEMACE10_AECU10_1.Elements(3).Name = 'AEMACE10_AECU10_WOW2';
AEMACE10_AECU10_1.Elements(4).Name = 'AEMACE10_AECU10_BRAKE_CMD_AWARENESS';
AEMACE10_AECU10_1.Elements(5).Name = 'AEMACE10_AECU10_HB';
AEMACE10_AECU10_1.Elements(6).Name = 'AEMACE10_AECU10_ACTUATOR_SPEED_CMD';
AEMACE10_AECU10_1.Elements(7).Name = 'AEMACE10_AECU10_DELTAP_FAILURE';
% Signals kind ------------------------------------------------------------
AEMACE10_AECU10_1.Elements(1).DataType = 'uint8';
AEMACE10_AECU10_1.Elements(2).DataType = 'boolean';
AEMACE10_AECU10_1.Elements(3).DataType = 'boolean';
AEMACE10_AECU10_1.Elements(4).DataType = 'boolean';
AEMACE10_AECU10_1.Elements(5).DataType = 'boolean';
AEMACE10_AECU10_1.Elements(6).DataType = 'single';
AEMACE10_AECU10_1.Elements(7).DataType = 'boolean';
% Save bus object
save('AEMACE10_AECU10_1.mat',"AEMACE10_AECU10_1");