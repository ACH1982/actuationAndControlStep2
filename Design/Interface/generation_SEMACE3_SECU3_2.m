% Creation of bus variable for SEMACE3_SECU3_2
% Bus object creation -----------------------------------------------------
SEMACE3_SECU3_2 = Simulink.Bus;
% Signals name ------------------------------------------------------------
SEMACE3_SECU3_2.Elements(1).Name = 'SEMACE3_SECU3_OPERATIONAL_MODE_CMD';
SEMACE3_SECU3_2.Elements(2).Name = 'SEMACE3_SECU3_WOW1';
SEMACE3_SECU3_2.Elements(3).Name = 'SEMACE3_SECU3_WOW2';
SEMACE3_SECU3_2.Elements(4).Name = 'SEMACE3_SECU3_BRAKE_CMD_AWARENESS';
SEMACE3_SECU3_2.Elements(5).Name = 'SEMACE3_SECU3_HB';
SEMACE3_SECU3_2.Elements(6).Name = 'SEMACE3_SECU3_ACTUATOR_SPEED_CMD';
SEMACE3_SECU3_2.Elements(7).Name = 'SEMACE3_SECU3_DELTAP_FAILURE';
% Signals kind ------------------------------------------------------------
SEMACE3_SECU3_2.Elements(1).DataType = 'uint8';
SEMACE3_SECU3_2.Elements(2).DataType = 'boolean';
SEMACE3_SECU3_2.Elements(3).DataType = 'boolean';
SEMACE3_SECU3_2.Elements(4).DataType = 'boolean';
SEMACE3_SECU3_2.Elements(5).DataType = 'boolean';
SEMACE3_SECU3_2.Elements(6).DataType = 'single';
SEMACE3_SECU3_2.Elements(7).DataType = 'boolean';
% Save bus object
save('SEMACE3_SECU3_2.mat',"SEMACE3_SECU3_2");