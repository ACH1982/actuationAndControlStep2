% Creation of bus variable for TC_FCC_RX_14
% Bus object creation -----------------------------------------------------
BUCU1_FCC1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
BUCU1_FCC1.Elements(1).Name = 'BUCU1_FCC1_LHCURRENTCMD';
BUCU1_FCC1.Elements(2).Name = 'BUCU1_FCC1_LHINPUTCMD';
BUCU1_FCC1.Elements(3).Name = 'BUCU1_FCC1_PILOTCOLUMNPOSITION';
BUCU1_FCC1.Elements(4).Name = 'BUCU1_FCC1_LHELEVPOSITION';
BUCU1_FCC1.Elements(5).Name = 'BUCU1_FCC1_PILOTCOLUMNPOSITIONVALID';
BUCU1_FCC1.Elements(6).Name = 'BUCU1_FCC1_LHSPEEDINPUTVALID';
BUCU1_FCC1.Elements(7).Name = 'BUCU1_FCC1_LHGEARINGVALID';
BUCU1_FCC1.Elements(8).Name = 'BUCU1_FCC1_LHELEVPOSITIONVALID';
BUCU1_FCC1.Elements(9).Name = 'BUCU1_FCC1_LHCONTROLLOOPDEMAND';
BUCU1_FCC1.Elements(10).Name = 'BUCU1_FCC1_LHACTPOSVSCMDVALID';
BUCU1_FCC1.Elements(11).Name = 'BUCU1_FCC1_LHACTCMDVSCURRENTVALID';
BUCU1_FCC1.Elements(12).Name = 'BUCU1_FCC1_LHACTCTLVSMONLOOPVALID';
BUCU1_FCC1.Elements(13).Name = 'BUCU1_FCC1_LHHYDPRESSVALID';
BUCU1_FCC1.Elements(14).Name = 'BUCU1_FCC1_LHPOWERVALID';
BUCU1_FCC1.Elements(15).Name = 'BUCU1_FCC1_LHBUCUACTIVE';
BUCU1_FCC1.Elements(16).Name = 'BUCU1_FCC1_LHBUCUMANUALMODEACTIVE';
% Signals kind ------------------------------------------------------------
BUCU1_FCC1.Elements(1).DataType = 'single';
BUCU1_FCC1.Elements(2).DataType = 'single';
BUCU1_FCC1.Elements(3).DataType = 'single';
BUCU1_FCC1.Elements(4).DataType = 'single';
BUCU1_FCC1.Elements(5).DataType = 'boolean';
BUCU1_FCC1.Elements(6).DataType = 'boolean';
BUCU1_FCC1.Elements(7).DataType = 'boolean';
BUCU1_FCC1.Elements(8).DataType = 'boolean';
BUCU1_FCC1.Elements(9).DataType = 'single';
BUCU1_FCC1.Elements(10).DataType = 'boolean';
BUCU1_FCC1.Elements(11).DataType = 'boolean';
BUCU1_FCC1.Elements(12).DataType = 'boolean';
BUCU1_FCC1.Elements(13).DataType = 'boolean';
BUCU1_FCC1.Elements(14).DataType = 'boolean';
BUCU1_FCC1.Elements(15).DataType = 'boolean';
BUCU1_FCC1.Elements(16).DataType = 'boolean';
% Save bus object
save('BUCU1_FCC1.mat',"BUCU1_FCC1");