% Creation of bus variable ACE10C_ACE11x_10C
ACE10C_ACE11x_10C = Simulink.Bus; 
% Signals name ------------------------------------------------------------
ACE10C_ACE11x_10C.Elements(1).Name = 'ACE10C_ACE11x_GEARING_APPLIED';
ACE10C_ACE11x_10C.Elements(2).Name = 'ACE10C_ACE11x_GEARING_APP_F_C';
ACE10C_ACE11x_10C.Elements(3).Name = 'ACE10C_ACE11x_PPROG';
ACE10C_ACE11x_10C.Elements(4).Name = 'ACE10C_ACE11x_PPROG_FAILURE';
ACE10C_ACE11x_10C.Elements(5).Name = 'ACE10C_ACE11x_RAM_POS_C_FAILURE';
ACE10C_ACE11x_10C.Elements(6).Name = 'ACE10C_ACE11x_RAM_POS_C';
ACE10C_ACE11x_10C.Elements(7).Name = 'ACE10C_ACE11x_MODE_C';
ACE10C_ACE11x_10C.Elements(8).Name = 'ACE10C_ACE11x_ROLL_POS_C_FAILURE';
ACE10C_ACE11x_10C.Elements(9).Name = 'ACE10C_ACE11x_ROLL_POS_C';
ACE10C_ACE11x_10C.Elements(10).Name = 'ACE10C_ACE11x_INC_DEMAND_FAIL';
ACE10C_ACE11x_10C.Elements(11).Name = 'ACE10C_ACE11x_TBI_FLAG_APP';
ACE10C_ACE11x_10C.Elements(12).Name = 'ACE10C_ACE11x_SPD_C_FAILURE';
ACE10C_ACE11x_10C.Elements(13).Name = 'ACE10C_ACE11x_DELTA_P_FAILURE';
ACE10C_ACE11x_10C.Elements(14).Name = 'ACE10C_ACE11x_DELTA_P_C';
ACE10C_ACE11x_10C.Elements(15).Name = 'ACE10C_ACE11x_WOW1_C';
ACE10C_ACE11x_10C.Elements(16).Name = 'ACE10C_ACE11x_WOW2_C';
ACE10C_ACE11x_10C.Elements(17).Name = 'ACE10C_ACE11x_SPD_C';
% Signals kind ------------------------------------------------------------
ACE10C_ACE11x_10C.Elements(1).DataType = 'single';
ACE10C_ACE11x_10C.Elements(2).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(3).DataType = 'uint8';
ACE10C_ACE11x_10C.Elements(4).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(5).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(6).DataType = 'single';
ACE10C_ACE11x_10C.Elements(7).DataType = 'uint8';
ACE10C_ACE11x_10C.Elements(8).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(9).DataType = 'single';
ACE10C_ACE11x_10C.Elements(10).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(11).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(12).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(13).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(14).DataType = 'single';
ACE10C_ACE11x_10C.Elements(15).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(16).DataType = 'boolean';
ACE10C_ACE11x_10C.Elements(17).DataType = 'uint8';
% Save bus object
save('ACE10C_ACE11x_10C.mat',"ACE10C_ACE11x_10C");