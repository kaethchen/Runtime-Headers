@class NSString;

@interface CKiCloudSettingsSyncController : NSObject <IMCloudKitEventHandler>

@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (nonatomic) unsigned long long messagesToUploadCount;
@property (retain, nonatomic) NSString *syncSummary;
@property (copy, nonatomic) id /* block */ syncStatusHandler;
@property (readonly, nonatomic, getter=isMiCEnabled) BOOL micEnabled;
@property (readonly, nonatomic) BOOL micAccountsMatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)a0 syncStateDidChange:(id)a1;
- (void)_prepareForInitialSyncState;
- (id)_syncSummaryForSyncState:(id)a0;
- (void)_wrapperInit;
- (void)cancelCurrentSync;
- (id)initWithSyncStatusHandler:(id /* block */)a0;
- (void)startSync;

@end
