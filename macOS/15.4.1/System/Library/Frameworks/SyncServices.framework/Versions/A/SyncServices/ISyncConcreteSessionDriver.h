@class ISyncClient, NSError, ISyncSession, NSObject, NSMutableArray;
@protocol ISyncSessionDriverDataSource;

@interface ISyncConcreteSessionDriver : ISyncSessionDriver {
    ISyncClient *_client;
    ISyncSession *_session;
    NSObject<ISyncSessionDriverDataSource> *_dataSource;
    id _delegate;
    long long _dataSourceSupportedMethodsHash;
    long long _delegateSupportedMethodsHash;
    NSMutableArray *_filteredEntityNames;
    BOOL _inCallback;
    BOOL _finishCalled;
    BOOL _handlesSyncAlerts;
    BOOL _failure;
    NSError *_lastError;
}

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)client;
- (BOOL)sync;
- (id)session;
- (void)_setDataSource:(id)a0;
- (id)dataSource;
- (id)lastError;
- (id)_initWithDataSource:(id)a0;
- (BOOL)_sync:(BOOL)a0;
- (BOOL)_beginSyncSession:(BOOL)a0;
- (void)_cancelSync:(id)a0;
- (void)_hashDataSource;
- (BOOL)_registerClient;
- (void)_client:(id)a0 mightWantToSyncEntityNames:(id)a1;
- (void)_doAsynchronousSync;
- (void)_doFullyAsynchronousSync;
- (BOOL)_finishSession;
- (void)_hashDelegate;
- (id)_lastAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(BOOL *)a1;
- (BOOL)_negotiateSyncSession;
- (id)_nextAnchorsFromClientForEntityNames:(id)a0 sessionFinished:(BOOL *)a1;
- (BOOL)_preSync;
- (BOOL)_pullPhaseOfSession;
- (BOOL)_pushPhaseOfSession;
- (void)_setClient:(id)a0;
- (void)_setLastError:(id)a0;
- (void)finishSyncing;
- (BOOL)handlesSyncAlerts;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)startAsynchronousSync:(id *)a0;

@end
