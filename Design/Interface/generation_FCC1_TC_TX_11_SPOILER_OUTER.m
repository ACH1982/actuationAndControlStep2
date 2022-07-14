% Creation of bus variable for FCC1_TC_TX_11_SPOILER_OUTER
% Bus object creation -----------------------------------------------------
FCC1_TC_TX_11_SPOILER_OUTER = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC1_TC_TX_11_SPOILER_OUTER.Elements(1).Name = 'FCC1_ACExx_GEARING_SPO_OUTER';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(2).Name = 'FCC1_ACExx_GEARING_SPO_OUTER_LH_FAIL';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(3).Name = 'FCC1_ACExx_INCREMENTAL_DEM_SPO_OUTER';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(4).Name = 'FCC1_ACExx_INCREMENTAL_DEM_SPO_OUTER_FAIL';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(5).Name = 'FCC1_ACExx_TBI_SPO_OUTER_FAIL';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(6).Name = 'FCC1_ACExx_TBI_SPO_OUTER_LH';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(7).Name = 'FCC1_ACExx_TBI_SPO_OUTER_RH';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(8).Name = 'FCC1_WACL_DEM_LH';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(9).Name = 'FCC1_WACL_DEM_RH';
% Signals kind ------------------------------------------------------------
FCC1_TC_TX_11_SPOILER_OUTER.Elements(1).DataType = 'single';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(2).DataType = 'boolean';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(3).DataType = 'single';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(4).DataType = 'boolean';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(5).DataType = 'boolean';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(6).DataType = 'single';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(7).DataType = 'single';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(8).DataType = 'single';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(9).DataType = 'single';
% Save bus object
save('FCC1_TC_TX_11_SPOILER_OUTER.mat',"FCC1_TC_TX_11_SPOILER_OUTER");