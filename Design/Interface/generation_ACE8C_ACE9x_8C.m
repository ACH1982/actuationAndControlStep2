% Creation of bus variable ACE8C_ACE9x_8C
ACE8C_ACE9x_8C = Simulink.Bus; 
% Signals name ------------------------------------------------------------
ACE8C_ACE9x_8C.Elements(1).Name = 'ACE8C_ACE9x_GEARING_APPLIED';
ACE8C_ACE9x_8C.Elements(2).Name = 'ACE8C_ACE9x_GEARING_APP_F_C';
ACE8C_ACE9x_8C.Elements(3).Name = 'ACE8C_ACE9x_PPROG';
ACE8C_ACE9x_8C.Elements(4).Name = 'ACE8C_ACE9x_PPROG_FAILURE';
ACE8C_ACE9x_8C.Elements(5).Name = 'ACE8C_ACE9x_RAM_POS_C_FAILURE';
ACE8C_ACE9x_8C.Elements(6).Name = 'ACE8C_ACE9x_RAM_POS_C';
ACE8C_ACE9x_8C.Elements(7).Name = 'ACE8C_ACE9x_MODE_C';
ACE8C_ACE9x_8C.Elements(8).Name = 'ACE8C_ACE9x_ROLL_POS_C_FAILURE';
ACE8C_ACE9x_8C.Elements(9).Name = 'ACE8C_ACE9x_ROLL_POS_C';
ACE8C_ACE9x_8C.Elements(10).Name = 'ACE8C_ACE9x_INC_DEMAND_FAIL';
ACE8C_ACE9x_8C.Elements(11).Name = 'ACE8C_ACE9x_TBI_FLAG_APP';
ACE8C_ACE9x_8C.Elements(12).Name = 'ACE8C_ACE9x_SPD_C_FAILURE';
ACE8C_ACE9x_8C.Elements(13).Name = 'ACE8C_ACE9x_DELTA_P_FAILURE';
ACE8C_ACE9x_8C.Elements(14).Name = 'ACE8C_ACE9x_DELTA_P_C';
ACE8C_ACE9x_8C.Elements(15).Name = 'ACE8C_ACE9x_WOW1_C';
ACE8C_ACE9x_8C.Elements(16).Name = 'ACE8C_ACE9x_WOW2_C';
ACE8C_ACE9x_8C.Elements(17).Name = 'ACE8C_ACE9x_SPD_C';
% Signals kind ------------------------------------------------------------
ACE8C_ACE9x_8C.Elements(1).DataType = 'single';
ACE8C_ACE9x_8C.Elements(2).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(3).DataType = 'uint8';
ACE8C_ACE9x_8C.Elements(4).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(5).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(6).DataType = 'single';
ACE8C_ACE9x_8C.Elements(7).DataType = 'uint8';
ACE8C_ACE9x_8C.Elements(8).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(9).DataType = 'single';
ACE8C_ACE9x_8C.Elements(10).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(11).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(12).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(13).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(14).DataType = 'single';
ACE8C_ACE9x_8C.Elements(15).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(16).DataType = 'boolean';
ACE8C_ACE9x_8C.Elements(17).DataType = 'uint8';
% Save bus object
save('ACE8C_ACE9x_8C.mat',"ACE8C_ACE9x_8C");