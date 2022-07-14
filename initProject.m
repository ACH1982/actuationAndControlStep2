clear all
% Project data initialization
currentFolder = pwd;
designFolder = strcat(currentFolder,'/Design');
designDataFolder = strcat(designFolder,'/designData');
designInterfaceFolder = strcat(designFolder,'/Interface');
designInternalInterfaceFolder = strcat(designFolder,'/InternalInterface');
% Load model data
cd(designDataFolder);
run generationAPPData;
cd(currentFolder);
% Load external bus data
cd(designInterfaceFolder);
run loadDigitalBuses.m
cd(currentFolder)
% Load internal bus data
cd(designInternalInterfaceFolder);
run loadInternalBUSES.m;
cd(currentFolder);
% Remove paths
clear currentFolder;
clear designFolder;
clear designDataFolder;
clear designInterfaceFolder;
clear designInternalInterfaceFolder;
