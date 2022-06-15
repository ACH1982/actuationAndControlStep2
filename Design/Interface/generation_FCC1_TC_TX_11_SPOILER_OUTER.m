% Creation of bus variable for FCC1_TC_TX_11_SPOILER_OUTER
% Bus object creation -----------------------------------------------------
FCC1_TC_TX_11_SPOILER_OUTER = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC1_TC_TX_11_SPOILER_OUTER.Elements(1).Name = 'FCC1_ACExx_GEARING_SPO_OUTER_LH';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(2).Name = 'FCC1_ACExx_GEARING_SPO_OUTER_RH';

% Signals kind ------------------------------------------------------------
FCC1_TC_TX_11_SPOILER_OUTER.Elements(1).DataType = 'single';
FCC1_TC_TX_11_SPOILER_OUTER.Elements(2).DataType = 'single';

% Save bus object
save('FCC1_TC_TX_11_SPOILER_OUTER.mat',"FCC1_TC_TX_11_SPOILER_OUTER");