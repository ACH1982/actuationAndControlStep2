% Creation of bus variable for SECU2_SEMACE2_1
% Bus object creation -----------------------------------------------------
SECU2_SEMACE2_1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
SECU2_SEMACE2_1.Elements(1).Name = 'SECU2_SEMACE2_BRAKE1_CURR';
SECU2_SEMACE2_1.Elements(2).Name = 'SECU2_SEMACE2_BRAKE1_TEMP';
SECU2_SEMACE2_1.Elements(3).Name = 'SECU2_SEMACE2_BRAKE1_STATUS';
SECU2_SEMACE2_1.Elements(4).Name = 'SECU2_SEMACE2_BRAKE2_CURR';
SECU2_SEMACE2_1.Elements(5).Name = 'SECU2_SEMACE2_BRAKE2_TEMP';
SECU2_SEMACE2_1.Elements(6).Name = 'SECU2_SEMACE2_BRAKE2_STATUS';
SECU2_SEMACE2_1.Elements(7).Name = 'SECU2_SEMACE2_BUS_VOLTAGE';
SECU2_SEMACE2_1.Elements(8).Name = 'SECU2_SEMACE2_BUS_CURR';
SECU2_SEMACE2_1.Elements(9).Name = 'SECU2_SEMACE2_WINDING_TEMP1';
SECU2_SEMACE2_1.Elements(10).Name = 'SECU2_SEMACE2_WINDING_TEMP2';
SECU2_SEMACE2_1.Elements(11).Name = 'SECU2_SEMACE2_ACTUATOR_SPD';
SECU2_SEMACE2_1.Elements(12).Name = 'SECU2_SEMACE2_ECU_TEMP';
SECU2_SEMACE2_1.Elements(13).Name = 'SECU2_SEMACE2_EDM_TEMP';
SECU2_SEMACE2_1.Elements(14).Name = 'SECU2_SEMACE2_EDM_CURR';
SECU2_SEMACE2_1.Elements(15).Name = 'SECU2_SEMACE2_EDM_STATUS';
SECU2_SEMACE2_1.Elements(16).Name = 'SECU2_SEMACE2_ACTUATOR_FORCE';
SECU2_SEMACE2_1.Elements(17).Name = 'SECU2_SEMACE2_ECU_MODE';
SECU2_SEMACE2_1.Elements(18).Name = 'SECU2_SEMACE2_ECU_SUBMODE';
SECU2_SEMACE2_1.Elements(19).Name = 'SECU2_SEMACE2_ECU_FUNC_SEL';
SECU2_SEMACE2_1.Elements(20).Name = 'SECU2_SEMACE2_ECU_ENGINEERING_FUNC';
SECU2_SEMACE2_1.Elements(21).Name = 'SECU2_SEMACE2_CBIT_RESULT';
SECU2_SEMACE2_1.Elements(22).Name = 'SECU2_SEMACE2_CBIT_TIMEOUT';
SECU2_SEMACE2_1.Elements(23).Name = ['SECU2_SEMACE2_CBIT_SYSTEM_FAILURE'];
SECU2_SEMACE2_1.Elements(24).Name = 'SECU2_SEMACE2_CBIT_OPERATIONAL_FAILURE';
SECU2_SEMACE2_1.Elements(25).Name = 'SECU2_SEMACE2_CBIT_FUNCTIONAL_FAILURE';
SECU2_SEMACE2_1.Elements(26).Name = 'SECU2_SEMACE2_CBIT_MINOR_FAILURE';
SECU2_SEMACE2_1.Elements(27).Name = 'SECU2_SEMACE2_IBIT_RESULT';
SECU2_SEMACE2_1.Elements(28).Name = 'SECU2_SEMACE2_IBIT_TIMEOUT';
SECU2_SEMACE2_1.Elements(29).Name = 'SECU2_SEMACE2_IBIT_SYSTEM_FAILURE';
SECU2_SEMACE2_1.Elements(30).Name = 'SECU2_SEMACE2_IBIT_OPERATIONAL_FAILURE';
SECU2_SEMACE2_1.Elements(31).Name = 'SECU2_SEMACE2_IBIT_FUNCTIONAL_FAILURE';
SECU2_SEMACE2_1.Elements(32).Name = 'SECU2_SEMACE2_IBIT_MINOR_FAILURE';
SECU2_SEMACE2_1.Elements(33).Name = 'SECU2_SEMACE2_PBIT_RESULT';
SECU2_SEMACE2_1.Elements(34).Name = 'SECU2_SEMACE2_PBIT_TIMEOUT';
SECU2_SEMACE2_1.Elements(35).Name = 'SECU2_SEMACE2_PBIT_SYSTEM_FAILURE';
SECU2_SEMACE2_1.Elements(36).Name = 'SECU2_SEMACE2_PBIT_OPERATIONAL_FAILURE';
SECU2_SEMACE2_1.Elements(37).Name = 'SECU2_SEMACE2_PBIT_FUNCTIONAL_FAILURE';
SECU2_SEMACE2_1.Elements(38).Name = 'SECU2_SEMACE2_PBIT_MINOR_FAILURE';
% Signals kind ------------------------------------------------------------
SECU2_SEMACE2_1.Elements(1).DataType = 'single';
SECU2_SEMACE2_1.Elements(2).DataType = 'single';
SECU2_SEMACE2_1.Elements(3).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(4).DataType = 'single';
SECU2_SEMACE2_1.Elements(5).DataType = 'single';
SECU2_SEMACE2_1.Elements(6).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(7).DataType = 'single';
SECU2_SEMACE2_1.Elements(8).DataType = 'single';
SECU2_SEMACE2_1.Elements(9).DataType = 'single';
SECU2_SEMACE2_1.Elements(10).DataType = 'single';
SECU2_SEMACE2_1.Elements(11).DataType = 'single';
SECU2_SEMACE2_1.Elements(12).DataType = 'single';
SECU2_SEMACE2_1.Elements(13).DataType = 'single';
SECU2_SEMACE2_1.Elements(14).DataType = 'single';
SECU2_SEMACE2_1.Elements(15).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(16).DataType = 'single';
SECU2_SEMACE2_1.Elements(17).DataType = 'uint8';
SECU2_SEMACE2_1.Elements(18).DataType = 'uint8';
SECU2_SEMACE2_1.Elements(19).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(20).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(21).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(22).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(23).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(24).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(25).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(26).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(27).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(28).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(29).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(30).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(31).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(32).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(33).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(34).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(35).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(36).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(37).DataType = 'boolean';
SECU2_SEMACE2_1.Elements(38).DataType = 'boolean';
% Save bus object
save('SECU2_SEMACE2_1.mat',"SECU2_SEMACE2_1");