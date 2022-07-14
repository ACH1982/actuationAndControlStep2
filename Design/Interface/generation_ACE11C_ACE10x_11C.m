% Creation of bus variable ACE11C_ACE10x_11C
ACE11C_ACE10x_11C = Simulink.Bus; 
% Signals name ------------------------------------------------------------
ACE11C_ACE10x_11C.Elements(1).Name = 'ACE11C_ACE10x_GEARING_APPLIED';
ACE11C_ACE10x_11C.Elements(2).Name = 'ACE11C_ACE10x_GEARING_APP_F_C';
ACE11C_ACE10x_11C.Elements(3).Name = 'ACE11C_ACE10x_PPROG';
ACE11C_ACE10x_11C.Elements(4).Name = 'ACE11C_ACE10x_PPROG_FAILURE';
ACE11C_ACE10x_11C.Elements(5).Name = 'ACE11C_ACE10x_RAM_POS_C_FAILURE';
ACE11C_ACE10x_11C.Elements(6).Name = 'ACE11C_ACE10x_RAM_POS_C';
ACE11C_ACE10x_11C.Elements(7).Name = 'ACE11C_ACE10x_MODE_C';
ACE11C_ACE10x_11C.Elements(8).Name = 'ACE11C_ACE10x_ROLL_POS_C_FAILURE';
ACE11C_ACE10x_11C.Elements(9).Name = 'ACE11C_ACE10x_ROLL_POS_C';
ACE11C_ACE10x_11C.Elements(10).Name = 'ACE11C_ACE10x_INC_DEMAND_FAIL';
ACE11C_ACE10x_11C.Elements(11).Name = 'ACE11C_ACE10x_TBI_FLAG_APP';
ACE11C_ACE10x_11C.Elements(12).Name = 'ACE11C_ACE10x_SPD_C_FAILURE';
ACE11C_ACE10x_11C.Elements(13).Name = 'ACE11C_ACE10x_DELTA_P_FAILURE';
ACE11C_ACE10x_11C.Elements(14).Name = 'ACE11C_ACE10x_DELTA_P_C';
ACE11C_ACE10x_11C.Elements(15).Name = 'ACE11C_ACE10x_WOW1_C';
ACE11C_ACE10x_11C.Elements(16).Name = 'ACE11C_ACE10x_WOW2_C';
ACE11C_ACE10x_11C.Elements(17).Name = 'ACE11C_ACE10x_SPD_C';
% Signals kind ------------------------------------------------------------
ACE11C_ACE10x_11C.Elements(1).DataType = 'single';
ACE11C_ACE10x_11C.Elements(2).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(3).DataType = 'uint8';
ACE11C_ACE10x_11C.Elements(4).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(5).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(6).DataType = 'single';
ACE11C_ACE10x_11C.Elements(7).DataType = 'uint8';
ACE11C_ACE10x_11C.Elements(8).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(9).DataType = 'single';
ACE11C_ACE10x_11C.Elements(10).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(11).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(12).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(13).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(14).DataType = 'single';
ACE11C_ACE10x_11C.Elements(15).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(16).DataType = 'boolean';
ACE11C_ACE10x_11C.Elements(17).DataType = 'uint8';
% Save bus object
save('ACE11C_ACE10x_11C.mat',"ACE11C_ACE10x_11C");