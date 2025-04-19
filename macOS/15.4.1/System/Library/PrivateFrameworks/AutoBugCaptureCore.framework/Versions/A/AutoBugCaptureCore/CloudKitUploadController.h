@class AnalyticsWorkspace, DiagnosticCaseSummaryAnalytics, UploadRecordAnalytics, DiagnosticCaseStorageAnalytics, NSObject;
@protocol OS_dispatch_queue;

@interface CloudKitUploadController : NSObject {
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseStorageAnalytics *_caseStorageAnalytics;
    DiagnosticCaseSummaryAnalytics *_caseSummaryAnalytics;
    UploadRecordAnalytics *_uploadRecordAnalytics;
    unsigned long long _outstandingOperationCount;
    BOOL _aggregateOperationResult;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)unregisterCloudKitUploadActivities;

- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (void)save;
- (void)_save;
- (void)deferXPCActivity:(id)a0;
- (void)finishXPCActivity:(id)a0;
- (void)ckcodeDecisionService:(id)a0 response:(id /* block */)a1;
- (void)uploadDiagnosticCases:(id)a0 activity:(id)a1;
- (id)_fetchCasesInternal:(id)a0 limit:(unsigned long long)a1;
- (id)_fetchRecentPendingCaseSummariesInternal:(id)a0 limit:(unsigned long long)a1;
- (void)configureCaseSummaryDiscretionaryActivityCriteria:(id)a0;
- (void)configureLogUploadDiscretionaryActivityCriteria:(id)a0;
- (void)configureWorkspace:(id)a0;
- (id)currentCloudKitContainerForEnvironment:(long long)a0;
- (id)fetchCaseSummariesWithIdentifiers:(id)a0;
- (id)fetchCasesWithIdentifiers:(id)a0 limit:(unsigned long long)a1;
- (id)fetchRecentCasesPendingUpload:(unsigned long long)a0;
- (id)fetchRecentPendingCaseSummaries:(unsigned long long)a0;
- (void)filterCasesPendingUpload:(id)a0 activity:(id)a1 reply:(id /* block */)a2;
- (void)filterCasesViaCloudkitDecisionService:(id)a0 activity:(id)a1 response:(id /* block */)a2;
- (id)locallyFilterCases:(id)a0;
- (BOOL)logUploadRequiresConsent:(id)a0;
- (void)operationCompletedWithID:(id)a0 savedRecords:(id)a1 deletedRecords:(id)a2 error:(id)a3 activity:(id)a4;
- (void)performSubmissionOfCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)performSubmissionOfRecentCaseSummaries:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)performUploadDecisionForCaseIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)performUploadForCaseIdentifiers:(id)a0;
- (void)performUploadForRecentCases:(unsigned long long)a0;
- (id)processCloudkitDecisionServiceResponse:(id)a0;
- (id)randomlySelectCasesFrom:(id)a0 maximum:(unsigned long long)a1;
- (void)recordOperationCompleteForOperationID:(id)a0 completionTime:(id)a1 success:(BOOL)a2;
- (void)registerCaseSummaryActivities;
- (void)registerCloudKitUploadActivities;
- (void)registerLogUploadActivities;
- (BOOL)shouldDeferFromCloudKitError:(id)a0;
- (void)startPeriodicSummaryTask:(id)a0;
- (void)startPeriodicUploadTask:(id)a0;
- (void)submitCaseSummaries:(id)a0 activity:(id)a1;
- (void)submitCaseSummariesWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)submitRecentCaseSummaries:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)uploadCasesWithIdentifiers:(id)a0;
- (void)uploadDecisionWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)uploadMostRecentCases:(unsigned long long)a0;
- (id)uploadOperationWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1 allowCellular:(BOOL)a2 activity:(id)a3;
- (void)uploadToCloudKitContainer:(id)a0 withRecords:(id)a1 activity:(id)a2;
- (BOOL)validateCaseAttachmentsForDiagnosticCaseStorage:(id)a0 record:(id)a1;

@end
