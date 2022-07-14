% Creation of bus variable ACE8_FCC1_8
AILERON_ACTUATION_STATE = Simulink.Bus; 
% Signals name ------------------------------------------------------------
AILERON_ACTUATION_STATE.Elements(1).Name = 'aileronPosition8';
AILERON_ACTUATION_STATE.Elements(2).Name = 'aileronMode8';
AILERON_ACTUATION_STATE.Elements(3).Name = 'aileronPosition10';
AILERON_ACTUATION_STATE.Elements(4).Name = 'aileronMode10';
% Signals kind ------------------------------------------------------------
AILERON_ACTUATION_STATE.Elements(1).DataType = 'single';
AILERON_ACTUATION_STATE.Elements(2).DataType = 'uint8';
AILERON_ACTUATION_STATE.Elements(3).DataType = 'single';
AILERON_ACTUATION_STATE.Elements(4).DataType = 'uint8';
% Save bus object
save('AILERON_ACTUATION_STATE.mat',"AILERON_ACTUATION_STATE");