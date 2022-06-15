% Creation of bus variable for FCC1_TC_TX_12_SPOILER_INNER
% Bus object creation -----------------------------------------------------
FCC1_TC_TX_12_SPOILER_INNER = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC1_TC_TX_12_SPOILER_INNER.Elements(1).Name = 'FCC1_ACExx_GEARING_SPO_INNER_LH';
FCC1_TC_TX_12_SPOILER_INNER.Elements(2).Name = 'FCC1_ACExx_GEARING_SPO_INNER_RH';

% Signals kind ------------------------------------------------------------
FCC1_TC_TX_12_SPOILER_INNER.Elements(1).DataType = 'single';
FCC1_TC_TX_12_SPOILER_INNER.Elements(2).DataType = 'single';

% Save bus object
save('FCC1_TC_TX_12_SPOILER_INNER.mat',"FCC1_TC_TX_12_SPOILER_INNER");