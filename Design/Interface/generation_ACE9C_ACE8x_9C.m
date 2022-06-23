% Creation of bus variable ACE9C_ACE8x_9C
ACE9C_ACE8x_9C = Simulink.Bus; 
% Signals name ------------------------------------------------------------
ACE9C_ACE8x_9C.Elements(1).Name = 'ACE9C_ACE8x_GEARING_APPLIED';
ACE9C_ACE8x_9C.Elements(2).Name = 'ACE9C_ACE8x_GEARING_APP_F_C';
ACE9C_ACE8x_9C.Elements(3).Name = 'ACE9C_ACE8x_PPROG';
ACE9C_ACE8x_9C.Elements(4).Name = 'ACE9C_ACE8x_PPROG_FAILURE';
ACE9C_ACE8x_9C.Elements(5).Name = 'ACE9C_ACE8x_RAM_POS_C_FAILURE';
ACE9C_ACE8x_9C.Elements(6).Name = 'ACE9C_ACE8x_RAM_POS_C';
ACE9C_ACE8x_9C.Elements(7).Name = 'ACE9C_ACE8x_MODE_C';
ACE9C_ACE8x_9C.Elements(8).Name = 'ACE9C_ACE8x_ROLL_POS_C_FAILURE';
ACE9C_ACE8x_9C.Elements(9).Name = 'ACE9C_ACE8x_ROLL_POS_C';
ACE9C_ACE8x_9C.Elements(10).Name = 'ACE9C_ACE8x_INC_DEMAND_FAIL';
ACE9C_ACE8x_9C.Elements(11).Name = 'ACE9C_ACE8x_TBI_FLAG_APP';
ACE9C_ACE8x_9C.Elements(12).Name = 'ACE9C_ACE8x_SPD_C_FAILURE';
ACE9C_ACE8x_9C.Elements(13).Name = 'ACE9C_ACE8x_DELTA_P_FAILURE';
ACE9C_ACE8x_9C.Elements(14).Name = 'ACE9C_ACE8x_DELTA_P_C';
ACE9C_ACE8x_9C.Elements(15).Name = 'ACE9C_ACE8x_WOW1_C';
ACE9C_ACE8x_9C.Elements(16).Name = 'ACE9C_ACE8x_WOW2_C';
ACE9C_ACE8x_9C.Elements(17).Name = 'ACE9C_ACE8x_SPD_C';
% Signals kind ------------------------------------------------------------
ACE9C_ACE8x_9C.Elements(1).DataType = 'single';
ACE9C_ACE8x_9C.Elements(2).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(3).DataType = 'uint8';
ACE9C_ACE8x_9C.Elements(4).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(5).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(6).DataType = 'single';
ACE9C_ACE8x_9C.Elements(7).DataType = 'uint8';
ACE9C_ACE8x_9C.Elements(8).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(9).DataType = 'single';
ACE9C_ACE8x_9C.Elements(10).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(11).DataType = 'single';
ACE9C_ACE8x_9C.Elements(12).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(13).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(14).DataType = 'single';
ACE9C_ACE8x_9C.Elements(15).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(16).DataType = 'boolean';
ACE9C_ACE8x_9C.Elements(17).DataType = 'uint8';
% Save bus object
save('ACE9C_ACE8x_9C.mat',"ACE9C_ACE8x_9C");