% Creation of bus variable for TC_FCC_RX_14
% Bus object creation -----------------------------------------------------
BUCU2_FCC2 = Simulink.Bus;
% Signals name ------------------------------------------------------------
BUCU2_FCC2.Elements(1).Name = 'BUCU2_FCC2_RHCURRENTCMD';
BUCU2_FCC2.Elements(2).Name = 'BUCU2_FCC2_RHINPUTCMD';
BUCU2_FCC2.Elements(3).Name = 'BUCU2_FCC2_COPILOTCOLUMNPOSITION';
BUCU2_FCC2.Elements(4).Name = 'BUCU2_FCC2_RHELEVPOSITION';
BUCU2_FCC2.Elements(5).Name = 'BUCU2_FCC2_COPILOTCOLUMNPOSITIONVALID';
BUCU2_FCC2.Elements(6).Name = 'BUCU2_FCC2_RHSPEEDINPUTVALID';
BUCU2_FCC2.Elements(7).Name = 'BUCU2_FCC2_RHGEARINGVALID';
BUCU2_FCC2.Elements(8).Name = 'BUCU2_FCC2_RHELEVPOSITIONVALID';
BUCU2_FCC2.Elements(9).Name = 'BUCU2_FCC2_RHCONTROLLOOPDEMAND';
BUCU2_FCC2.Elements(10).Name = 'BUCU2_FCC2_RHACTPOSVSCMDVALID';
BUCU2_FCC2.Elements(11).Name = 'BUCU2_FCC2_RHACTCMDVSCURRENTVALID';
BUCU2_FCC2.Elements(12).Name = 'BUCU2_FCC2_RHACTCTLVSMONLOOPVALID';
BUCU2_FCC2.Elements(13).Name = 'BUCU2_FCC2_RHHYDPRESSVALID';
BUCU2_FCC2.Elements(14).Name = 'BUCU2_FCC2_RHPOWERVALID';
BUCU2_FCC2.Elements(15).Name = 'BUCU2_FCC2_RHBUCUACTIVE';
BUCU2_FCC2.Elements(16).Name = 'BUCU2_FCC2_RHBUCUMANUALMODEACTIVE';
% Signals kind ------------------------------------------------------------
BUCU2_FCC2.Elements(1).DataType = 'single';
BUCU2_FCC2.Elements(2).DataType = 'single';
BUCU2_FCC2.Elements(3).DataType = 'single';
BUCU2_FCC2.Elements(4).DataType = 'single';
BUCU2_FCC2.Elements(5).DataType = 'boolean';
BUCU2_FCC2.Elements(6).DataType = 'boolean';
BUCU2_FCC2.Elements(7).DataType = 'boolean';
BUCU2_FCC2.Elements(8).DataType = 'boolean';
BUCU2_FCC2.Elements(9).DataType = 'single';
BUCU2_FCC2.Elements(10).DataType = 'boolean';
BUCU2_FCC2.Elements(11).DataType = 'boolean';
BUCU2_FCC2.Elements(12).DataType = 'boolean';
BUCU2_FCC2.Elements(13).DataType = 'boolean';
BUCU2_FCC2.Elements(14).DataType = 'boolean';
BUCU2_FCC2.Elements(15).DataType = 'boolean';
BUCU2_FCC2.Elements(16).DataType = 'boolean';
% Save bus object
save('BUCU2_FCC2.mat',"BUCU2_FCC2");