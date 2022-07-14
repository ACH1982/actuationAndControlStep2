% Creation of bus variable for FCC2_TC_TX_11_SPOILER_OUTER_HB
% Bus object creation -----------------------------------------------------
FCC2_TC_TX_11_SPOILER_OUTER_HB = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC2_TC_TX_11_SPOILER_OUTER_HB.Elements(1).Name = 'FCC2_TC_TX_12_GEARING_SPO_OUTER_HB';
FCC2_TC_TX_11_SPOILER_OUTER_HB.Elements(2).Name = 'FCC2_TC_TX_12_TBI_SPO_OUTER_HB';
FCC2_TC_TX_11_SPOILER_OUTER_HB.Elements(3).Name = 'FCC2_TC_TX_12_INCREMENTAL_DEM_SPO_OUTER_HB';
% Signals kind ------------------------------------------------------------
FCC2_TC_TX_11_SPOILER_OUTER_HB.Elements(1).DataType = 'boolean';
FCC2_TC_TX_11_SPOILER_OUTER_HB.Elements(2).DataType = 'boolean';
FCC2_TC_TX_11_SPOILER_OUTER_HB.Elements(3).DataType = 'boolean';
% Save bus object
save('FCC2_TC_TX_11_SPOILER_OUTER_HB.mat',"FCC2_TC_TX_11_SPOILER_OUTER_HB");