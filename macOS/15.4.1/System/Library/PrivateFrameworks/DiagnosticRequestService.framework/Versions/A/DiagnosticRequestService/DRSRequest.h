@class NSUUID, PBRequest, NSString, NSArray, NSDate, NSData, NSDictionary, NSNumber;
@protocol DRSDecisionServerBatchRequest;

@interface DRSRequest : NSObject <DRSDSRequestObject>

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) PBRequest *pbRequest;
@property (readonly, nonatomic) id<DRSDecisionServerBatchRequest> pbBatchInstance;
@property (readonly, nonatomic) Class pbBatchResponseClass;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long expectedType;
@property (retain, nonatomic) NSString *logType;
@property (readonly, nonatomic) unsigned long long uploadID;
@property (retain, nonatomic) NSArray *logs;
@property (nonatomic) unsigned long long requestState;
@property (nonatomic) unsigned char decisionServerDecision;
@property (nonatomic) unsigned short uploadAttemptCount;
@property (nonatomic) BOOL hasBeenCountedByTelemetry;
@property (readonly, nonatomic) BOOL isNonPurgeableInFlightUntilUploadAttempt;
@property (readonly, nonatomic) NSArray *submittedLogInfos;
@property (readonly, nonatomic) NSUUID *requestID;
@property (readonly, nonatomic) NSDate *requestDate;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) NSString *issueDescription;
@property (readonly, nonatomic) NSData *contextDictionaryData;
@property (readonly, nonatomic) NSDictionary *contextDictionary;
@property (readonly, nonatomic) NSDictionary *metadataDictionary;
@property (readonly, nonatomic) NSString *hwModel;
@property (readonly, nonatomic) NSNumber *isLikeCarryDevice;
@property (readonly, nonatomic) NSString *automatedDeviceGroup;
@property (readonly, nonatomic) unsigned long long requestMCT;
@property (readonly, nonatomic) NSString *requestType;
@property (readonly, nonatomic) unsigned long long totalLogSizeBytes;
@property (readonly, nonatomic) BOOL hasUploadableContent;
@property (readonly, nonatomic) NSString *requestStateString;
@property (readonly, nonatomic) unsigned char requestOutcome;
@property (readonly, nonatomic) NSString *requestOutcomeString;
@property (readonly, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) NSString *decisionServerDecisionString;
@property (readonly, nonatomic) NSString *ckRecordID;
@property (readonly, nonatomic) unsigned long long logSizeLimitBytes;
@property (readonly, nonatomic) BOOL isExpedited;

+ (id)entityName;
+ (Class)_moClass;
+ (BOOL)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)a0;
+ (id)_requestWithRequestMO_ON_MOC_QUEUE:(id)a0;
+ (BOOL)cleanRequestRecordsFromPersistentContainer:(id)a0 removeFiles:(BOOL)a1 removeRecord:(BOOL)a2 matchingPredicate:(id)a3 errorOut:(id *)a4;
+ (BOOL)cullOldRequestRecordsFromPersistentContainer:(id)a0 currentDate:(id)a1 errorOut:(id *)a2;
+ (BOOL)isExpeditedTeamID:(id)a0 issueCategory:(id)a1;
+ (id)leastRecentDateFirstSortDescriptor;
+ (unsigned char)maxUploadAttemptCount;
+ (id)migrateRequestDataStoreAtPath:(id)a0 errorOut:(id *)a1;
+ (id)mostRecentDateFirstSortDescriptor;
+ (unsigned long long)requestCountForFilterPredicate:(id)a0 context:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
+ (id)requestForMessage:(id)a0;
+ (id)requestsForFilterPredicate:(id)a0 context:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 errorOut:(id *)a4;
+ (id)requiredSystemResourceName;
+ (id)unreportedTerminalRequestsFromContext:(id)a0 sortDescriptors:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
+ (id)uploadedBytesSinceDate:(id)a0 context:(id)a1 errorOut:(id *)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileNames;
- (id)replyForMessage:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (id)logPath;
- (BOOL)isEqualToRequest:(id)a0;
- (id)fileURLs;
- (id)fileAssets;
- (BOOL)_updateLogStateToExpectedState:(unsigned char)a0;
- (void)addIsLikelyCarryContextMetadata;
- (BOOL)_addContextMetadataKey:(id)a0 value:(id)a1 expectedClass:(Class)a2 errorOut:(id *)a3;
- (void)_addLogMOs:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (BOOL)_deleteLogs;
- (id)_initWithRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)_logsDescription;
- (BOOL)_markLogsAsPurgeableWithUrgencyWithDeleteFallback:(unsigned long long)a0;
- (BOOL)_performPostClientLogWork:(id)a0 dampeningOutcome:(unsigned long long)a1 isLogUploadEnabled:(BOOL)a2;
- (BOOL)_populateLogsArray_ON_MOC_QUEUE:(id)a0;
- (id)_processSubmittedLogInfo:(id)a0 workingDirectory:(id)a1;
- (BOOL)_updateLogFileStateForTransitionFromPreviousState:(unsigned long long)a0;
- (void)addAutomatedDeviceGroupContext;
- (BOOL)addContextMetadataKey:(id)a0 numberValue:(id)a1 errorOut:(id *)a2;
- (BOOL)addContextMetadataKey:(id)a0 stringValue:(id)a1 errorOut:(id *)a2;
- (void)addHWModelContextMetadata;
- (id)filePaths;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (void)makeTerminalDueToMissingLog;
- (id)newRequestMOInContext_ON_MOC_QUEUE:(id)a0;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (id)protoFileDescriptions;
- (id)protoRequestDescription;
- (id)recordRepresentation;
- (id)targetContainerName;
- (void)updateContextWithRequest_ON_MOC_QUEUE:(id)a0;
- (BOOL)updateToState:(unsigned long long)a0 errorDescription:(id)a1 errorOut:(id *)a2;
- (void)uploadAbortedDueToLogSize;
- (void)uploadCompleteWithError:(id)a0 ckRecordID:(id)a1;
- (void)uploadDeniedByDecisionServerWithReason:(id)a0;
- (void)uploadFailedDueToReason:(id)a0;
- (id)uploadRequest;
- (BOOL)uploadStarted;

@end
