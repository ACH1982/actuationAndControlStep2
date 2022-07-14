% Creation of bus variable ACE8_FCC1_8
COCKPIT_INCEPTORS = Simulink.Bus; 
% Signals name ------------------------------------------------------------
COCKPIT_INCEPTORS.Elements(1).Name = 'controlWheelLH';
COCKPIT_INCEPTORS.Elements(2).Name = 'controlWheelRH';
COCKPIT_INCEPTORS.Elements(3).Name = 'SPD_SEL';
COCKPIT_INCEPTORS.Elements(4).Name = 'flapLever';
COCKPIT_INCEPTORS.Elements(5).Name = 'rollTrimPB';
COCKPIT_INCEPTORS.Elements(6).Name = 'pitchTrimPB';
COCKPIT_INCEPTORS.Elements(7).Name = 'controWheelDISC';
COCKPIT_INCEPTORS.Elements(8).Name = 'airBrakeENABLE';
COCKPIT_INCEPTORS.Elements(9).Name = 'liftDumpENABLE';
COCKPIT_INCEPTORS.Elements(10).Name = 'mlaENABLE';
COCKPIT_INCEPTORS.Elements(11).Name = 'glaENABLE';
COCKPIT_INCEPTORS.Elements(12).Name = 'bankAutopilotENABLE';
COCKPIT_INCEPTORS.Elements(13).Name = 'heightAutopilotENABLE';
% Signals kind ------------------------------------------------------------
COCKPIT_INCEPTORS.Elements(1).DataType = 'single';
COCKPIT_INCEPTORS.Elements(2).DataType = 'single';
COCKPIT_INCEPTORS.Elements(3).DataType = 'uint8';
COCKPIT_INCEPTORS.Elements(4).DataType = 'uint8';
COCKPIT_INCEPTORS.Elements(5).DataType = 'single';
COCKPIT_INCEPTORS.Elements(6).DataType = 'single';
COCKPIT_INCEPTORS.Elements(7).DataType = 'boolean';
COCKPIT_INCEPTORS.Elements(8).DataType = 'boolean';
COCKPIT_INCEPTORS.Elements(9).DataType = 'boolean';
COCKPIT_INCEPTORS.Elements(10).DataType = 'boolean';
COCKPIT_INCEPTORS.Elements(11).DataType = 'boolean';
COCKPIT_INCEPTORS.Elements(12).DataType = 'boolean';
COCKPIT_INCEPTORS.Elements(13).DataType = 'boolean';
% Save bus object
save('COCKPIT_INCEPTORS.mat',"COCKPIT_INCEPTORS");