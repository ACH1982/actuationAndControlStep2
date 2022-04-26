% BUSES LOADING -----------------------------------------------------------
currentFolder = pwd;
envFolder = strcat(currentFolder,'/Environment/');
designFolder = strcat(currentFolder,'/Design/');
ACE9C_ACE8x_9C = strcat(envFolder,'ACE9C_ACE8x_9C.mat');
ACE11C_ACE10x_11C = strcat(envFolder,'ACE11C_ACE10x_11C.mat');
FCC1_ACExxxA_C1_A = strcat(envFolder,'FCC1_ACExxxA_C1_A.mat');
FCC2_ACExxxA_M_A = strcat(envFolder,'FCC2_ACExxxA_M_A.mat');
FCC1_SEMACEx_OUTER_C1 = strcat(envFolder,'FCC1_SEMACEx_OUTER_C1.mat');
FCC1_SEMACEx_INNER_C1 = strcat(envFolder,'FCC1_SEMACEx_INNER_C1.mat');
FCC2_SEMACEx_OUTER_M = strcat(envFolder,'FCC2_SEMACEx_OUTER_M.mat');
FCC2_SEMACEx_INNER_M = strcat(envFolder,'FCC2_SEMACEx_INNER_M.mat');
COCKPIT_INCEPTORS = strcat(designFolder,'COCKPIT_INCEPTORS.mat');
AILERON_ACTUATION_STATE = strcat(designFolder,'AILERON_ACTUATION_STATE.mat');
SPOILER_ACTUATION_STATE = strcat(designFolder,'SPOILER_ACTUATION_STATE.mat');
WINGLET_ACTUATION_STATE = strcat(designFolder,'WINGLET_ACTUATION_STATE.mat');
COMMANDED_STATE = strcat(designFolder,'COMMANDED_STATE.mat');
AEMACE8_TEST = strcat(designFolder,'AEMACE8_TEST.mat');
AEMACE8_OUTPUT = strcat(designFolder,'AEMACE8_OUTPUT.mat');
AEMACE10_TEST = strcat(designFolder,'AEMACE10_TEST.mat');
AEMACE10_OUTPUT = strcat(designFolder,'AEMACE10_OUTPUT.mat');
SEMACE1_TEST = strcat(designFolder,'SEMACE1_TEST.mat');
SEMACE1_OUTPUT = strcat(designFolder,'SEMACE1_OUTPUT.mat');
% Loading environment buses
load(ACE9C_ACE8x_9C);
load(ACE11C_ACE10x_11C);
load(FCC1_ACExxxA_C1_A);
load(FCC2_ACExxxA_M_A);
load(FCC1_SEMACEx_OUTER_C1);
load(FCC1_SEMACEx_INNER_C1);
load(FCC2_SEMACEx_OUTER_M);
load(FCC2_SEMACEx_INNER_M);
% Loading design buses
load(COCKPIT_INCEPTORS);
load(AILERON_ACTUATION_STATE);
load(SPOILER_ACTUATION_STATE);
load(WINGLET_ACTUATION_STATE);
load(COMMANDED_STATE);
load(AEMACE8_TEST);
load(AEMACE8_OUTPUT);
load(AEMACE10_TEST);
load(AEMACE10_OUTPUT);
load(SEMACE1_TEST);
load(SEMACE1_OUTPUT);
% -------------------------------------------------------------------------