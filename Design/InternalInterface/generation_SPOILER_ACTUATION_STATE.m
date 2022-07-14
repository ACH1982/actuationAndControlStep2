% Creation of bus variable ACE8_FCC1_8
SPOILER_ACTUATION_STATE = Simulink.Bus; 
% Signals name ------------------------------------------------------------
SPOILER_ACTUATION_STATE.Elements(1).Name = 'spoilerPosition1';
SPOILER_ACTUATION_STATE.Elements(2).Name = 'spoilerMode1';
SPOILER_ACTUATION_STATE.Elements(3).Name = 'spoilerPosition2';
SPOILER_ACTUATION_STATE.Elements(4).Name = 'spoilerMode2';
SPOILER_ACTUATION_STATE.Elements(5).Name = 'spoilerPosition3';
SPOILER_ACTUATION_STATE.Elements(6).Name = 'spoilerMode3';
SPOILER_ACTUATION_STATE.Elements(7).Name = 'spoilerPosition4';
SPOILER_ACTUATION_STATE.Elements(8).Name = 'spoilerMode4';
% Signals kind ------------------------------------------------------------
SPOILER_ACTUATION_STATE.Elements(1).DataType = 'single';
SPOILER_ACTUATION_STATE.Elements(2).DataType = 'uint8';
SPOILER_ACTUATION_STATE.Elements(3).DataType = 'single';
SPOILER_ACTUATION_STATE.Elements(4).DataType = 'uint8';
SPOILER_ACTUATION_STATE.Elements(5).DataType = 'single';
SPOILER_ACTUATION_STATE.Elements(6).DataType = 'uint8';
SPOILER_ACTUATION_STATE.Elements(7).DataType = 'single';
SPOILER_ACTUATION_STATE.Elements(8).DataType = 'uint8';
% Save bus object
save('SPOILER_ACTUATION_STATE.mat',"SPOILER_ACTUATION_STATE");