% Creation of bus variable for FCC2_TC_TX_12_SPOILER_INNER_HB
% Bus object creation -----------------------------------------------------
FCC2_TC_TX_12_SPOILER_INNER_HB = Simulink.Bus;
% Signals name ------------------------------------------------------------
FCC2_TC_TX_12_SPOILER_INNER_HB.Elements(1).Name = 'FCC2_TC_TX_12_SPOILER_INNER_HB';

% Signals kind ------------------------------------------------------------
FCC2_TC_TX_12_SPOILER_INNER_HB.Elements(1).DataType = 'boolean';

% Save bus object
save('FCC2_TC_TX_12_SPOILER_INNER_HB.mat',"FCC2_TC_TX_12_SPOILER_INNER_HB");