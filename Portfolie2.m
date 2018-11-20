%% Algoritme datastruktur portfolie 2
clear
syms N;
prio = @(N) (N.*log2(N))*(107755/(1.3288*10^5));
quick = @(N) N*((4.8650*10^3)/(10000));

% quick_regress = @(N) 0.9578+0.4864*N;

% Data from c++
priority_q = importdata('priority_q.txt');
quick_s = importdata('quick_s.txt');

% Theo vs pract prio queue
figure('Name','Priority Queue');
hold on
prioPlot1 = plot((0:1:10000),priority_q()); Prio1 = "Priority Queue curve practical";
prioPlot = plot((0:1:10000),prio(0:10000)); Prio = "Priority Queue curve theoretical";
legend([prioPlot1,prioPlot], [Prio1, Prio]);
ylabel('Operations');
xlabel('List Length');
hold off

% Theo vs pract quick select
% b = regress(quick_s',[ones(size((0:10000)')) (0:10000)']);
figure('Name','Quick Select');
hold on
quickPlot1 = plot((0:1:10000),quick_s()); Quick1 = "Quick Select curve practical";
quickPlot = plot((0:1:10000),quick(0:10000)); Quick = "Quick Select curve theoretical";
% quickPlot1 = plot(quick_regress(0:2:10000)); Quick1 = "Quick Select curve practical";
legend([quickPlot1,quickPlot], [Quick1, Quick]);
ylabel('Operations');
xlabel('List Length');
hold off