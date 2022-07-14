% APP data definition
% Sample time
sampleTime = 8e-3;
% AEMACEs data
dataAEMACE.rateLimiterDemand = 60; %deg/s
dataAEMACE.rateLimiterTBI = 60; %deg/s
dataAEMACE.rateLimiterIncrementalDemand = 60; %deg/s
dataAEMACE.rateLimiterGearing = 0.1; %deg/s
% SEMACEs data
dataSEMACE.rateLimiterDemand = 60; %deg/s
dataSEMACE.rateLimiterTBI = 60; %deg/s
dataSEMACE.rateLimiterSymmetric = 60; %deg/s
dataSEMACE.rateLimiterGearing = 0.1; %deg/s
% Save data
save('sampleTime.mat','sampleTime');
save('dataAEMACE.mat','dataAEMACE');
save('dataSEMACE.mat','dataSEMACE');