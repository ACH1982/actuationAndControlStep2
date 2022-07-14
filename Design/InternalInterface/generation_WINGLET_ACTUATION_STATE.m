% Creation of bus variable ACE8_FCC1_8
WINGLET_ACTUATION_STATE = Simulink.Bus; 
% Signals name ------------------------------------------------------------
WINGLET_ACTUATION_STATE.Elements(1).Name = 'wingletPositionLH';
WINGLET_ACTUATION_STATE.Elements(2).Name = 'wingletModeLH';
WINGLET_ACTUATION_STATE.Elements(3).Name = 'wingletPositionRH';
WINGLET_ACTUATION_STATE.Elements(4).Name = 'wingletModeRH';
% Signals kind ------------------------------------------------------------
WINGLET_ACTUATION_STATE.Elements(1).DataType = 'single';
WINGLET_ACTUATION_STATE.Elements(2).DataType = 'uint8';
WINGLET_ACTUATION_STATE.Elements(3).DataType = 'single';
WINGLET_ACTUATION_STATE.Elements(4).DataType = 'uint8';
% Save bus object
save('WINGLET_ACTUATION_STATE.mat',"WINGLET_ACTUATION_STATE");