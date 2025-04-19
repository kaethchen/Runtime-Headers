@class NSString, NSUUID, HKTaskServerProxyProvider, HKCloudSyncObserverStatus, NSProgress;
@protocol HKCloudSyncObserverDelegate;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    NSProgress *_progress;
    HKCloudSyncObserverStatus *_status;
    id<HKCloudSyncObserverDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _filter;
    BOOL _isObservingSyncRequests;
    BOOL _isObservingSyncStatus;
}

@property (weak, nonatomic) id<HKCloudSyncObserverDelegate> delegate;
@property (readonly, copy, nonatomic) HKCloudSyncObserverStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)progress;
- (void)setProgress:(id)a0;
- (void)setStatus:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)_clientQueue_didCompleteSyncWithStatus:(long long)a0 error:(id)a1;
- (void)clientRemote_didFailToPopulateStatusWithError:(id)a0;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(id)a0;
- (void)clientRemote_syncDidStart;
- (void)clientRemote_syncRequestDidComplete:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)clientRemote_syncRequestDidStart:(id)a0;
- (id)initWithHealthStore:(id)a0 delegate:(id)a1;
- (void)startObservingSyncRequestsMatchingFilter:(unsigned long long)a0;
- (void)startObservingSyncStatus;
- (void)startSyncIfRestoreNotCompleted;
- (void)stopObservingSyncRequests;

@end
