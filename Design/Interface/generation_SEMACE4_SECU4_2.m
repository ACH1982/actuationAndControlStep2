% Creation of bus variable for SEMACE4_SECU4_2
% Bus object creation -----------------------------------------------------
SEMACE4_SECU4_2 = Simulink.Bus;
% Signals name ------------------------------------------------------------
SEMACE4_SECU4_2.Elements(1).Name = 'SEMACE4_SECU4_OPERATIONAL_MODE_CMD';
SEMACE4_SECU4_2.Elements(2).Name = 'SEMACE4_SECU4_WOW1';
SEMACE4_SECU4_2.Elements(3).Name = 'SEMACE4_SECU4_WOW2';
SEMACE4_SECU4_2.Elements(4).Name = 'SEMACE4_SECU4_BRAKE_CMD_AWARENESS';
SEMACE4_SECU4_2.Elements(5).Name = 'SEMACE4_SECU4_HB';
SEMACE4_SECU4_2.Elements(6).Name = 'SEMACE4_SECU4_ACTUATOR_SPEED_CMD';
SEMACE4_SECU4_2.Elements(7).Name = 'SEMACE4_SECU4_DELTAP_FAILURE';
% Signals kind ------------------------------------------------------------
SEMACE4_SECU4_2.Elements(1).DataType = 'uint8';
SEMACE4_SECU4_2.Elements(2).DataType = 'boolean';
SEMACE4_SECU4_2.Elements(3).DataType = 'boolean';
SEMACE4_SECU4_2.Elements(4).DataType = 'boolean';
SEMACE4_SECU4_2.Elements(5).DataType = 'boolean';
SEMACE4_SECU4_2.Elements(6).DataType = 'single';
SEMACE4_SECU4_2.Elements(7).DataType = 'boolean';
% Save bus object
save('SEMACE4_SECU4_2.mat',"SEMACE4_SECU4_2");