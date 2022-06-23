% Creation of bus variable for TC_FCC_RX_14
% Bus object creation -----------------------------------------------------
BUCU4_FCC2 = Simulink.Bus;
% Signals name ------------------------------------------------------------
BUCU4_FCC2.Elements(1).Name = 'BUCU4_FCC2_RHCURRENTCMD';
BUCU4_FCC2.Elements(2).Name = 'BUCU4_FCC2_RHINPUTCMD';
BUCU4_FCC2.Elements(3).Name = 'BUCU4_FCC2_COPILOTWHEELPOSITION';
BUCU4_FCC2.Elements(4).Name = 'BUCU4_FCC2_RHELEVPOSITION';
BUCU4_FCC2.Elements(5).Name = 'BUCU4_FCC2_COPILOTWHEELPOSITIONVALID';
BUCU4_FCC2.Elements(6).Name = 'BUCU4_FCC2_RHSPEEDINPUTVALID';
BUCU4_FCC2.Elements(7).Name = 'BUCU4_FCC2_RHGEARINGVALID';
BUCU4_FCC2.Elements(8).Name = 'BUCU4_FCC2_RHELEVPOSITIONVALID';
BUCU4_FCC2.Elements(9).Name = 'BUCU4_FCC2_RHCONTROLLOOPDEMAND';
BUCU4_FCC2.Elements(10).Name = 'BUCU4_FCC2_RHACTPOSVSCMDVALID';
BUCU4_FCC2.Elements(11).Name = 'BUCU4_FCC2_RHACTCMDVSCURRENTVALID';
BUCU4_FCC2.Elements(12).Name = 'BUCU4_FCC2_RHACTCTLVSMONLOOPVALID';
BUCU4_FCC2.Elements(13).Name = 'BUCU4_FCC2_RHHYDPRESSVALID';
BUCU4_FCC2.Elements(14).Name = 'BUCU4_FCC2_RHPOWERVALID';
BUCU4_FCC2.Elements(15).Name = 'BUCU4_FCC2_RHBUCUACTIVE';
BUCU4_FCC2.Elements(16).Name = 'BUCU4_FCC2_RHBUCUMANUALMODEACTIVE';
% Signals kind ------------------------------------------------------------
BUCU4_FCC2.Elements(1).DataType = 'single';
BUCU4_FCC2.Elements(2).DataType = 'single';
BUCU4_FCC2.Elements(3).DataType = 'single';
BUCU4_FCC2.Elements(4).DataType = 'single';
BUCU4_FCC2.Elements(5).DataType = 'boolean';
BUCU4_FCC2.Elements(6).DataType = 'boolean';
BUCU4_FCC2.Elements(7).DataType = 'boolean';
BUCU4_FCC2.Elements(8).DataType = 'boolean';
BUCU4_FCC2.Elements(9).DataType = 'single';
BUCU4_FCC2.Elements(10).DataType = 'boolean';
BUCU4_FCC2.Elements(11).DataType = 'boolean';
BUCU4_FCC2.Elements(12).DataType = 'boolean';
BUCU4_FCC2.Elements(13).DataType = 'boolean';
BUCU4_FCC2.Elements(14).DataType = 'boolean';
BUCU4_FCC2.Elements(15).DataType = 'boolean';
BUCU4_FCC2.Elements(16).DataType = 'boolean';
% Save bus object
save('BUCU4_FCC2.mat',"BUCU4_FCC2");