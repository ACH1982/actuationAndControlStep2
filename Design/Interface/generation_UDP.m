% UDP data definition
UDP = Simulink.Bus; 
% Signals name
UDP.Elements(1).Name = 'TOGGLE';
UDP.Elements(2).Name = 'AEMACE8_CMD_STATE';
UDP.Elements(3).Name = 'AEMACE10_CMD_STATE';
UDP.Elements(4).Name = 'ACE9_CMD_STATE';
UDP.Elements(5).Name = 'ACE11_CMD_STATE';
% Signals kind
UDP.Elements(1).DataType = 'uint8';
UDP.Elements(2).DataType = 'uint8';
UDP.Elements(3).DataType = 'uint8';
UDP.Elements(4).DataType = 'uint8';
UDP.Elements(5).DataType = 'uint8';
% Save data
save('UDP.mat',"UDP")