@class AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSObject;
@protocol OS_dispatch_queue;

@interface DiagnosticStatisticsManager : NSObject {
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseUsageAnalytics *_caseUsageSpace;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_updateDailyCaseStatisticsWith:(id)a0;
- (double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
- (void)_checkFileWritingLimits:(id)a0;
- (id)_createDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (long long)_removeDiagnosticCaseUsageMatchingDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3 onOrAfter:(id)a4 create:(BOOL)a5;
- (void)_updateCaseStatisticsWith:(id)a0;
- (void)_updateDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3 lastSeen:(id)a4 dampeningType:(BOOL)a5;
- (void)cleanupDiagnosticCaseUsage;
- (void)getDiagnosticCaseUsageStatistics:(id /* block */)a0;
- (id)initWithWorkspace:(id)a0 queue:(id)a1;
- (void)resetDiagnosticCaseUsage;
- (void)updateCaseStatisticsWith:(id)a0;

@end
