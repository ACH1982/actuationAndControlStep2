% Creation of bus variable for SEMACE1_SECU1_1
% Bus object creation -----------------------------------------------------
SEMACE1_SECU1_1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
SEMACE1_SECU1_1.Elements(1).Name = 'SEMACE1_SECU1_OPERATIONAL_MODE_CMD';
SEMACE1_SECU1_1.Elements(2).Name = 'SEMACE1_SECU1_WOW1';
SEMACE1_SECU1_1.Elements(3).Name = 'SEMACE1_SECU1_WOW2';
SEMACE1_SECU1_1.Elements(4).Name = 'SEMACE1_SECU1_BRAKE_CMD_AWARENESS';
SEMACE1_SECU1_1.Elements(5).Name = 'SEMACE1_SECU1_HB';
SEMACE1_SECU1_1.Elements(6).Name = 'SEMACE1_SECU1_ACTUATOR_SPEED_CMD';
SEMACE1_SECU1_1.Elements(7).Name = 'SEMACE1_SECU1_DELTAP_FAILURE';
% Signals kind ------------------------------------------------------------
SEMACE1_SECU1_1.Elements(1).DataType = 'uint8';
SEMACE1_SECU1_1.Elements(2).DataType = 'boolean';
SEMACE1_SECU1_1.Elements(3).DataType = 'boolean';
SEMACE1_SECU1_1.Elements(4).DataType = 'boolean';
SEMACE1_SECU1_1.Elements(5).DataType = 'boolean';
SEMACE1_SECU1_1.Elements(6).DataType = 'single';
SEMACE1_SECU1_1.Elements(7).DataType = 'boolean';
% Save bus object
save('SEMACE1_SECU1_1.mat',"SEMACE1_SECU1_1");