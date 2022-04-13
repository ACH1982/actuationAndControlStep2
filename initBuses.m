clear
% Project initialization
currentFolder = pwd;
envFolder = strcat(currentFolder,'/Environment');
designFolder = strcat(currentFolder,'/Design');
% Loading environment buses
ACE9C_ACE8x_9C = strcat(envFolder,'ACE9C_ACE8x_9C.mat');
ACE11C_ACE8x_11C = strcat(envFolder,'ACE11C_ACE8x_11C.mat');
FCC1_ACExxxA_C1_A = strcat(envFolder,'FCC1_ACExxxA_C1_A.mat');
FCC2_ACExxxA_M_A = strcat(envFolder,'FCC2_ACExxxA_M_A.mat');
% Loading design buses
COCKPIT_INCEPTORS = strcat(designFolder,'COCKPIT_INCEPTORS.mat');
AILERON_ACTUATION_STATE = strcat(designFolder,'AILERON_ACTUATION_STATE.mat');
SPOILER_ACTUATION_STATE = strcat(designFolder,'SPOILER_ACTUATION_STATE.mat');
WINGLET_ACTUATION_STATE = strcat(designFolder,'WINGLET_ACTUATION_STATE.mat');
FCC1_SEMACEx_OUTER_C1 = strcat(designFolder,'FCC1_SEMACEx_OUTER_C1.mat');
FCC1_SEMACEx_INNER_C1 = strcat(designFolder,'FCC1_SEMACEx_INNER_C1.mat');
FCC2_SEMACEx_OUTER_M = strcat(designFolder,'FCC2_SEMACEx_OUTER_M.mat');
FCC2_SEMACEx_INNER_M = strcat(designFolder,'FCC2_SEMACEx_INNER_M.mat');