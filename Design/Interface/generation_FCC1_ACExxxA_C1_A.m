% Creation of bus variable FCC1_ACExxxA_C1_A
% Bus object creation
FCC1_ACExxxA_C1_A = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC1_ACExxxA_C1_A.Elements(1).Name = 'FCC1_ACExxxA_GEARING_ROLL';
FCC1_ACExxxA_C1_A.Elements(2).Name = 'FCC1_ACExxxA_GEARING_ROLL_FAIL';
FCC1_ACExxxA_C1_A.Elements(3).Name = 'FCC1_ACExxxA_ROLL_INCREMENTAL_DEMAND_FAIL';
FCC1_ACExxxA_C1_A.Elements(4).Name = 'FCC1_ACExxxA_TBI_FAIL';
FCC1_ACExxxA_C1_A.Elements(5).Name = 'FCC1_ACExxxA_WHEEL_POS_1_FAIL';
FCC1_ACExxxA_C1_A.Elements(6).Name = 'FCC1_ACExxxA_SUR_POS_1_AIL_FAIL';
FCC1_ACExxxA_C1_A.Elements(7).Name = 'FCC1_ACExxxA_TBI_LH';
FCC1_ACExxxA_C1_A.Elements(8).Name = 'FCC1_ACExxxA_ROLL_INCREMENTAL_DEM_LH';
FCC1_ACExxxA_C1_A.Elements(9).Name = 'FCC1_ACExxxA_TBI_RH';
FCC1_ACExxxA_C1_A.Elements(10).Name = 'FCC1_ACExxxA_WHEEL_POS_1';
FCC1_ACExxxA_C1_A.Elements(11).Name = 'FCC1_ACExxxA_SUR_POS_1_AIL';
FCC1_ACExxxA_C1_A.Elements(12).Name = 'FCC1_ACExxxA_ROLL_INCREMENTAL_DEM_RH';
% Signals kind ------------------------------------------------------------
FCC1_ACExxxA_C1_A.Elements(1).DataType = 'single';
FCC1_ACExxxA_C1_A.Elements(2).DataType = 'boolean';
FCC1_ACExxxA_C1_A.Elements(3).DataType = 'boolean';
FCC1_ACExxxA_C1_A.Elements(4).DataType = 'boolean';
FCC1_ACExxxA_C1_A.Elements(5).DataType = 'boolean';
FCC1_ACExxxA_C1_A.Elements(6).DataType = 'boolean';
FCC1_ACExxxA_C1_A.Elements(7).DataType = 'single';
FCC1_ACExxxA_C1_A.Elements(8).DataType = 'single';
FCC1_ACExxxA_C1_A.Elements(9).DataType = 'single';
FCC1_ACExxxA_C1_A.Elements(10).DataType = 'single';
FCC1_ACExxxA_C1_A.Elements(11).DataType = 'single';
FCC1_ACExxxA_C1_A.Elements(12).DataType = 'single';
% Save bus object
save('FCC1_ACExxxA_C1_A.mat',"FCC1_ACExxxA_C1_A");