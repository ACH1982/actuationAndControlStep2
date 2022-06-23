% Creation of bus variable for TC_FCC_RX_14
% Bus object creation -----------------------------------------------------
BUCU3_FCC1 = Simulink.Bus;
% Signals name ------------------------------------------------------------
BUCU3_FCC1.Elements(1).Name = 'BUCU3_FCC1_LHCURRENTCMD';
BUCU3_FCC1.Elements(2).Name = 'BUCU3_FCC1_LHINPUTCMD';
BUCU3_FCC1.Elements(3).Name = 'BUCU3_FCC1_PILOTWHEELPOSITION';
BUCU3_FCC1.Elements(4).Name = 'BUCU3_FCC1_LHELEVPOSITION';
BUCU3_FCC1.Elements(5).Name = 'BUCU3_FCC1_PILOTWHEELPOSITIONVALID';
BUCU3_FCC1.Elements(6).Name = 'BUCU3_FCC1_LHSPEEDINPUTVALID';
BUCU3_FCC1.Elements(7).Name = 'BUCU3_FCC1_LHGEARINGVALID';
BUCU3_FCC1.Elements(8).Name = 'BUCU3_FCC1_LHELEVPOSITIONVALID';
BUCU3_FCC1.Elements(9).Name = 'BUCU3_FCC1_LHCONTROLLOOPDEMAND';
BUCU3_FCC1.Elements(10).Name = 'BUCU3_FCC1_LHACTPOSVSCMDVALID';
BUCU3_FCC1.Elements(11).Name = 'BUCU3_FCC1_LHACTCMDVSCURRENTVALID';
BUCU3_FCC1.Elements(12).Name = 'BUCU3_FCC1_LHACTCTLVSMONLOOPVALID';
BUCU3_FCC1.Elements(13).Name = 'BUCU3_FCC1_LHHYDPRESSVALID';
BUCU3_FCC1.Elements(14).Name = 'BUCU3_FCC1_LHPOWERVALID';
BUCU3_FCC1.Elements(15).Name = 'BUCU3_FCC1_LHBUCUACTIVE';
BUCU3_FCC1.Elements(16).Name = 'BUCU3_FCC1_LHBUCUMANUALMODEACTIVE';
% Signals kind ------------------------------------------------------------
BUCU3_FCC1.Elements(1).DataType = 'single';
BUCU3_FCC1.Elements(2).DataType = 'single';
BUCU3_FCC1.Elements(3).DataType = 'single';
BUCU3_FCC1.Elements(4).DataType = 'single';
BUCU3_FCC1.Elements(5).DataType = 'boolean';
BUCU3_FCC1.Elements(6).DataType = 'boolean';
BUCU3_FCC1.Elements(7).DataType = 'boolean';
BUCU3_FCC1.Elements(8).DataType = 'boolean';
BUCU3_FCC1.Elements(9).DataType = 'single';
BUCU3_FCC1.Elements(10).DataType = 'boolean';
BUCU3_FCC1.Elements(11).DataType = 'boolean';
BUCU3_FCC1.Elements(12).DataType = 'boolean';
BUCU3_FCC1.Elements(13).DataType = 'boolean';
BUCU3_FCC1.Elements(14).DataType = 'boolean';
BUCU3_FCC1.Elements(15).DataType = 'boolean';
BUCU3_FCC1.Elements(16).DataType = 'boolean';
% Save bus object
save('BUCU3_FCC1.mat',"BUCU3_FCC1");