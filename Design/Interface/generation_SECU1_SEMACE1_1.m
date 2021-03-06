% Creation of bus variable for SECU1_SEMACE1_1
% Bus object creation -----------------------------------------------------
SECU1_SEMACE1_1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
SECU1_SEMACE1_1.Elements(1).Name = 'SECU1_SEMACE1_BRAKE1_CURR';
SECU1_SEMACE1_1.Elements(2).Name = 'SECU1_SEMACE1_BRAKE1_TEMP';
SECU1_SEMACE1_1.Elements(3).Name = 'SECU1_SEMACE1_BRAKE1_STATUS';
SECU1_SEMACE1_1.Elements(4).Name = 'SECU1_SEMACE1_BRAKE2_CURR';
SECU1_SEMACE1_1.Elements(5).Name = 'SECU1_SEMACE1_BRAKE2_TEMP';
SECU1_SEMACE1_1.Elements(6).Name = 'SECU1_SEMACE1_BRAKE2_STATUS';
SECU1_SEMACE1_1.Elements(7).Name = 'SECU1_SEMACE1_BUS_VOLTAGE';
SECU1_SEMACE1_1.Elements(8).Name = 'SECU1_SEMACE1_BUS_CURR';
SECU1_SEMACE1_1.Elements(9).Name = 'SECU1_SEMACE1_WINDING_TEMP1';
SECU1_SEMACE1_1.Elements(10).Name = 'SECU1_SEMACE1_WINDING_TEMP2';
SECU1_SEMACE1_1.Elements(11).Name = 'SECU1_SEMACE1_ACTUATOR_SPD';
SECU1_SEMACE1_1.Elements(12).Name = 'SECU1_SEMACE1_ECU_TEMP';
SECU1_SEMACE1_1.Elements(13).Name = 'SECU1_SEMACE1_EDM_TEMP';
SECU1_SEMACE1_1.Elements(14).Name = 'SECU1_SEMACE1_EDM_CURR';
SECU1_SEMACE1_1.Elements(15).Name = 'SECU1_SEMACE1_EDM_STATUS';
SECU1_SEMACE1_1.Elements(16).Name = 'SECU1_SEMACE1_ACTUATOR_FORCE';
SECU1_SEMACE1_1.Elements(17).Name = 'SECU1_SEMACE1_ECU_MODE';
SECU1_SEMACE1_1.Elements(18).Name = 'SECU1_SEMACE1_ECU_SUBMODE';
SECU1_SEMACE1_1.Elements(19).Name = 'SECU1_SEMACE1_ECU_FUNC_SEL';
SECU1_SEMACE1_1.Elements(20).Name = 'SECU1_SEMACE1_ECU_ENGINEERING_FUNC';
SECU1_SEMACE1_1.Elements(21).Name = 'SECU1_SEMACE1_CBIT_RESULT';
SECU1_SEMACE1_1.Elements(22).Name = 'SECU1_SEMACE1_CBIT_TIMEOUT';
SECU1_SEMACE1_1.Elements(23).Name = ['SECU1_SEMACE1_CBIT_SYSTEM_FAILURE'];
SECU1_SEMACE1_1.Elements(24).Name = 'SECU1_SEMACE1_CBIT_OPERATIONAL_FAILURE';
SECU1_SEMACE1_1.Elements(25).Name = 'SECU1_SEMACE1_CBIT_FUNCTIONAL_FAILURE';
SECU1_SEMACE1_1.Elements(26).Name = 'SECU1_SEMACE1_CBIT_MINOR_FAILURE';
SECU1_SEMACE1_1.Elements(27).Name = 'SECU1_SEMACE1_IBIT_RESULT';
SECU1_SEMACE1_1.Elements(28).Name = 'SECU1_SEMACE1_IBIT_TIMEOUT';
SECU1_SEMACE1_1.Elements(29).Name = 'SECU1_SEMACE1_IBIT_SYSTEM_FAILURE';
SECU1_SEMACE1_1.Elements(30).Name = 'SECU1_SEMACE1_IBIT_OPERATIONAL_FAILURE';
SECU1_SEMACE1_1.Elements(31).Name = 'SECU1_SEMACE1_IBIT_FUNCTIONAL_FAILURE';
SECU1_SEMACE1_1.Elements(32).Name = 'SECU1_SEMACE1_IBIT_MINOR_FAILURE';
SECU1_SEMACE1_1.Elements(33).Name = 'SECU1_SEMACE1_PBIT_RESULT';
SECU1_SEMACE1_1.Elements(34).Name = 'SECU1_SEMACE1_PBIT_TIMEOUT';
SECU1_SEMACE1_1.Elements(35).Name = 'SECU1_SEMACE1_PBIT_SYSTEM_FAILURE';
SECU1_SEMACE1_1.Elements(36).Name = 'SECU1_SEMACE1_PBIT_OPERATIONAL_FAILURE';
SECU1_SEMACE1_1.Elements(37).Name = 'SECU1_SEMACE1_PBIT_FUNCTIONAL_FAILURE';
SECU1_SEMACE1_1.Elements(38).Name = 'SECU1_SEMACE1_PBIT_MINOR_FAILURE';
% Signals kind ------------------------------------------------------------
SECU1_SEMACE1_1.Elements(1).DataType = 'single';
SECU1_SEMACE1_1.Elements(2).DataType = 'single';
SECU1_SEMACE1_1.Elements(3).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(4).DataType = 'single';
SECU1_SEMACE1_1.Elements(5).DataType = 'single';
SECU1_SEMACE1_1.Elements(6).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(7).DataType = 'single';
SECU1_SEMACE1_1.Elements(8).DataType = 'single';
SECU1_SEMACE1_1.Elements(9).DataType = 'single';
SECU1_SEMACE1_1.Elements(10).DataType = 'single';
SECU1_SEMACE1_1.Elements(11).DataType = 'single';
SECU1_SEMACE1_1.Elements(12).DataType = 'single';
SECU1_SEMACE1_1.Elements(13).DataType = 'single';
SECU1_SEMACE1_1.Elements(14).DataType = 'single';
SECU1_SEMACE1_1.Elements(15).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(16).DataType = 'single';
SECU1_SEMACE1_1.Elements(17).DataType = 'uint8';
SECU1_SEMACE1_1.Elements(18).DataType = 'uint8';
SECU1_SEMACE1_1.Elements(19).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(20).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(21).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(22).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(23).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(24).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(25).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(26).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(27).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(28).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(29).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(30).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(31).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(32).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(33).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(34).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(35).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(36).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(37).DataType = 'boolean';
SECU1_SEMACE1_1.Elements(38).DataType = 'boolean';
% Save bus object
save('SECU1_SEMACE1_1.mat',"SECU1_SEMACE1_1");