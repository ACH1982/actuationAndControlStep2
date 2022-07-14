% Creation of bus variable FCC2_ACExxxA_M_A
% Bus object creation
FCC2_ACExxxA_M_A = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC2_ACExxxA_M_A.Elements(1).Name = 'FCC2_ACExxxA_SUR_POS_2_AIL_FAIL';
FCC2_ACExxxA_M_A.Elements(2).Name = 'FCC2_ACExxxA_SUR_POS_2_AIL';
FCC2_ACExxxA_M_A.Elements(3).Name = 'FCC2_ACExxxA_GEARING_ROLL_HB';
FCC2_ACExxxA_M_A.Elements(4).Name = 'FCC2_ACExxxA_TBI_HB';
FCC2_ACExxxA_M_A.Elements(5).Name = 'FCC2_ACExxxA_INCREMENTAL_DEM_HB';
FCC2_ACExxxA_M_A.Elements(6).Name = 'FCC2_ACExxxA_WHEEL_POS_2_FAIL';
FCC2_ACExxxA_M_A.Elements(7).Name = 'FCC2_ACExxxA_WHEEL_POS_2';
% Signals kind ------------------------------------------------------------
FCC2_ACExxxA_M_A.Elements(1).DataType = 'boolean';
FCC2_ACExxxA_M_A.Elements(2).DataType = 'single';
FCC2_ACExxxA_M_A.Elements(3).DataType = 'boolean';
FCC2_ACExxxA_M_A.Elements(4).DataType = 'boolean';
FCC2_ACExxxA_M_A.Elements(5).DataType = 'boolean';
FCC2_ACExxxA_M_A.Elements(6).DataType = 'boolean';
FCC2_ACExxxA_M_A.Elements(7).DataType = 'single';
% Save bus object
save('FCC2_ACExxxA_M_A.mat',"FCC2_ACExxxA_M_A");