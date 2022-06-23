% Creation of bus variable for SEMACE2_SECU2_1
% Bus object creation -----------------------------------------------------
SEMACE2_SECU2_1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
SEMACE2_SECU2_1.Elements(1).Name = 'SEMACE2_SECU2_OPERATIONAL_MODE_CMD';
SEMACE2_SECU2_1.Elements(2).Name = 'SEMACE2_SECU2_WOW1';
SEMACE2_SECU2_1.Elements(3).Name = 'SEMACE2_SECU2_WOW2';
SEMACE2_SECU2_1.Elements(4).Name = 'SEMACE2_SECU2_BRAKE_CMD_AWARENESS';
SEMACE2_SECU2_1.Elements(5).Name = 'SEMACE2_SECU2_HB';
SEMACE2_SECU2_1.Elements(6).Name = 'SEMACE2_SECU2_ACTUATOR_SPEED_CMD';
SEMACE2_SECU2_1.Elements(7).Name = 'SEMACE2_SECU2_DELTAP_FAILURE';
% Signals kind ------------------------------------------------------------
SEMACE2_SECU2_1.Elements(1).DataType = 'uint8';
SEMACE2_SECU2_1.Elements(2).DataType = 'boolean';
SEMACE2_SECU2_1.Elements(3).DataType = 'boolean';
SEMACE2_SECU2_1.Elements(4).DataType = 'boolean';
SEMACE2_SECU2_1.Elements(5).DataType = 'boolean';
SEMACE2_SECU2_1.Elements(6).DataType = 'single';
SEMACE2_SECU2_1.Elements(7).DataType = 'boolean';
% Save bus object
save('SEMACE2_SECU2_1.mat',"SEMACE2_SECU2_1");