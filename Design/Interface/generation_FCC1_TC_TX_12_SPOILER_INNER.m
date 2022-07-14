% Creation of bus variable for FCC1_TC_TX_12_SPOILER_INNER
% Bus object creation -----------------------------------------------------
FCC1_TC_TX_12_SPOILER_INNER = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC1_TC_TX_12_SPOILER_INNER.Elements(1).Name = 'FCC1_ACExx_GEARING_SPO_INNER';
FCC1_TC_TX_12_SPOILER_INNER.Elements(2).Name = 'FCC1_ACExx_GEARING_SPO_INNER_LH_FAIL';
FCC1_TC_TX_12_SPOILER_INNER.Elements(3).Name = 'FCC1_ACExx_INCREMENTAL_DEM_SPO_INNER';
FCC1_TC_TX_12_SPOILER_INNER.Elements(4).Name = 'FCC1_ACExx_INCREMENTAL_DEM_SPO_INNER_FAIL';
FCC1_TC_TX_12_SPOILER_INNER.Elements(5).Name = 'FCC1_ACExx_TBI_SPO_INNER_FAIL';
FCC1_TC_TX_12_SPOILER_INNER.Elements(6).Name = 'FCC1_ACExx_TBI_SPO_INNER_LH';
FCC1_TC_TX_12_SPOILER_INNER.Elements(7).Name = 'FCC1_ACExx_TBI_SPO_INNER_RH';
FCC1_TC_TX_12_SPOILER_INNER.Elements(8).Name = 'FCC1_WACL_DEM_LH';
FCC1_TC_TX_12_SPOILER_INNER.Elements(9).Name = 'FCC1_WACL_DEM_RH';
% Signals kind ------------------------------------------------------------
FCC1_TC_TX_12_SPOILER_INNER.Elements(1).DataType = 'single';
FCC1_TC_TX_12_SPOILER_INNER.Elements(2).DataType = 'boolean';
FCC1_TC_TX_12_SPOILER_INNER.Elements(3).DataType = 'single';
FCC1_TC_TX_12_SPOILER_INNER.Elements(4).DataType = 'boolean';
FCC1_TC_TX_12_SPOILER_INNER.Elements(5).DataType = 'boolean';
FCC1_TC_TX_12_SPOILER_INNER.Elements(6).DataType = 'single';
FCC1_TC_TX_12_SPOILER_INNER.Elements(7).DataType = 'single';
FCC1_TC_TX_12_SPOILER_INNER.Elements(8).DataType = 'single';
FCC1_TC_TX_12_SPOILER_INNER.Elements(9).DataType = 'single';
% Save bus object
save('FCC1_TC_TX_12_SPOILER_INNER.mat',"FCC1_TC_TX_12_SPOILER_INNER");