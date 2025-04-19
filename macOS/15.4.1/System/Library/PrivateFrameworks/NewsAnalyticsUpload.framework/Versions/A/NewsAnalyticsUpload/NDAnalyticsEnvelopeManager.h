@class NDAnalyticsUploadScheduler, NDAnalyticsPayloadAssembler, NDAnalyticsEnvelopeStore, FCKeyValueStore, NDAnalyticsTelemetryUploader, FCAsyncSerialQueue, NFMutexLock, NSString, NSObject, NDAnalyticsPayloadUploader;
@protocol OS_dispatch_queue;

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService>

@property (retain, nonatomic) FCAsyncSerialQueue *submissionQueue;
@property (retain, nonatomic) NDAnalyticsEnvelopeStore *envelopeStore;
@property (retain, nonatomic) NDAnalyticsPayloadAssembler *payloadAssembler;
@property (retain, nonatomic) NDAnalyticsPayloadUploader *payloadUploader;
@property (retain, nonatomic) NDAnalyticsUploadScheduler *uploadScheduler;
@property (retain, nonatomic) FCKeyValueStore *lastUploadDatesByContentType;
@property (retain, nonatomic) NFMutexLock *keyValueStoreLock;
@property (retain, nonatomic) NDAnalyticsTelemetryUploader *telemetryUploader;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *URLSessionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)submitEnvelopes:(id)a0 withCompletion:(id /* block */)a1;
- (id)_handleDroppedEnvelopesForLocalReasons:(id)a0;
- (id)_handleOutcomeOfUploadAttemptWithPayload:(id)a0 success:(BOOL)a1 error:(id)a2 willRetry:(BOOL)a3 hitEndpoint:(BOOL)a4;
- (id)_lastUploadDatesByContentType;
- (void)_scheduleUploadIfNeededWithCompletion:(id /* block */)a0;
- (void)_uploadTelemetryEnvelopes:(id)a0;
- (void)envelopeStore:(id)a0 didFlushEnvelopesForEntries:(id)a1;
- (id)initWithAppConfigurationManager:(id)a0 telemetryUploader:(id)a1 storeDirectoryFileURL:(id)a2 URLSessionQueue:(id)a3;
- (void)uploadScheduler:(id)a0 performUploadWithCompletion:(id /* block */)a1;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)a0;

@end
