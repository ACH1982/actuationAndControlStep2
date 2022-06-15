% Creation of bus variable for TC_FCC_RX_11
% Bus object creation -----------------------------------------------------
TC_FCC1_RX_11 = Simulink.Bus;
% Signals name ------------------------------------------------------------
TC_FCC1_RX_11.Elements(1).Name = 'SEMACE1_FCC1xD2CU_GEARING_APPLIED';
TC_FCC1_RX_11.Elements(2).Name = 'SEMACE1_FCC1xD2CU_SPD';
TC_FCC1_RX_11.Elements(3).Name = 'SEMACE1_FCC1xD2CU_SPD_FAILURE';
TC_FCC1_RX_11.Elements(4).Name = 'SEMACE1_FCC1xD2CU_GEARING_FAIL';
TC_FCC1_RX_11.Elements(5).Name = 'SEMACE1_FCC1xD2CU_GEARING_FLAG';
TC_FCC1_RX_11.Elements(6).Name = 'SEMACE1_FCC1xD2CU_SEMACE1_MODE';
TC_FCC1_RX_11.Elements(7).Name = 'SEMACE1_FCC1xD2CU_RAM_POS';
TC_FCC1_RX_11.Elements(8).Name = 'SEMACE1_FCC1xD2CU_RAM_POS_FAILURE';
TC_FCC1_RX_11.Elements(9).Name = 'SEMACE1_FCC1xD2CU_ROLL_POS';
TC_FCC1_RX_11.Elements(10).Name = 'SEMACE1_FCC1xD2CU_ROLL_POS_FAILURE';
TC_FCC1_RX_11.Elements(11).Name = 'SEMACE1_FCC1xD2CU_FCC_ARINC1_ERR';
TC_FCC1_RX_11.Elements(12).Name = 'SEMACE1_FCC1xD2CU_IBIT_STATUS_C';
TC_FCC1_RX_11.Elements(13).Name = 'SEMACE1_FCC1xD2CU_IBIT_STATUS_M';
TC_FCC1_RX_11.Elements(14).Name = 'SEMACE3_FCC1xD2CU_GEARING_APPLIED';
TC_FCC1_RX_11.Elements(15).Name = 'SEMACE3_FCC1xD2CU_SPD';
TC_FCC1_RX_11.Elements(16).Name = 'SEMACE3_FCC1xD2CU_SPD_FAILURE';
TC_FCC1_RX_11.Elements(17).Name = 'SEMACE3_FCC1xD2CU_GEARING_FAIL';
TC_FCC1_RX_11.Elements(18).Name = 'SEMACE3_FCC1xD2CU_GEARING_FLAG';
TC_FCC1_RX_11.Elements(19).Name = 'SEMACE3_FCC1xD2CU_SEMACE3_MODE';
TC_FCC1_RX_11.Elements(20).Name = 'SEMACE3_FCC1xD2CU_RAM_POS';
TC_FCC1_RX_11.Elements(21).Name = 'SEMACE3_FCC1xD2CU_RAM_POS_FAILURE';
TC_FCC1_RX_11.Elements(22).Name = 'SEMACE3_FCC1xD2CU_ROLL_POS';
TC_FCC1_RX_11.Elements(23).Name = 'SEMACE3_FCC1xD2CU_ROLL_POS_FAILURE';
TC_FCC1_RX_11.Elements(24).Name = 'SEMACE3_FCC1xD2CU_FCC_ARINC1_ERR';
TC_FCC1_RX_11.Elements(25).Name = 'SEMACE3_FCC1xD2CU_IBIT_STATUS_C';
TC_FCC1_RX_11.Elements(26).Name = 'SEMACE3_FCC1xD2CU_IBIT_STATUS_M';
% Signals kind ------------------------------------------------------------
TC_FCC1_RX_11.Elements(1).DataType = 'single';
TC_FCC1_RX_11.Elements(2).DataType = 'uint8';
TC_FCC1_RX_11.Elements(3).DataType = 'boolean';
TC_FCC1_RX_11.Elements(4).DataType = 'boolean';
TC_FCC1_RX_11.Elements(5).DataType = 'boolean';
TC_FCC1_RX_11.Elements(6).DataType = 'uint8';
TC_FCC1_RX_11.Elements(7).DataType = 'single';
TC_FCC1_RX_11.Elements(8).DataType = 'boolean';
TC_FCC1_RX_11.Elements(9).DataType = 'single';
TC_FCC1_RX_11.Elements(10).DataType = 'boolean';
TC_FCC1_RX_11.Elements(11).DataType = 'boolean';
TC_FCC1_RX_11.Elements(12).DataType = 'uint8';
TC_FCC1_RX_11.Elements(13).DataType = 'uint8';
TC_FCC1_RX_11.Elements(14).DataType = 'single';
TC_FCC1_RX_11.Elements(15).DataType = 'uint8';
TC_FCC1_RX_11.Elements(16).DataType = 'boolean';
TC_FCC1_RX_11.Elements(17).DataType = 'boolean';
TC_FCC1_RX_11.Elements(18).DataType = 'boolean';
TC_FCC1_RX_11.Elements(19).DataType = 'uint8';
TC_FCC1_RX_11.Elements(20).DataType = 'single';
TC_FCC1_RX_11.Elements(21).DataType = 'boolean';
TC_FCC1_RX_11.Elements(22).DataType = 'single';
TC_FCC1_RX_11.Elements(23).DataType = 'boolean';
TC_FCC1_RX_11.Elements(24).DataType = 'boolean';
TC_FCC1_RX_11.Elements(25).DataType = 'uint8';
TC_FCC1_RX_11.Elements(26).DataType = 'uint8';
% Save bus object
save('TC_FCC1_RX_11.mat',"TC_FCC1_RX_11");