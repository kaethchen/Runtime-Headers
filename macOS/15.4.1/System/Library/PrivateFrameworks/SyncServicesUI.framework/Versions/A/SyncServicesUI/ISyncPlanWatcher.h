@class NSMutableDictionary, NSString, NSMutableSet, ISyncPlan, NSSet, NSTimer;

@interface ISyncPlanWatcher : NSObject {
    ISyncPlan *_currentPlan;
    NSMutableSet *_syncingDataClasses;
    NSMutableDictionary *_syncingDataClassesPerClient;
    BOOL _isSyncing;
    NSString *_syncProgressString;
    NSSet *_clients;
    NSSet *_types;
    BOOL _startNotificationSent;
    NSTimer *_delayedStopTimer;
    id _delegate;
}

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)isSyncing;
- (BOOL)_bruteForceIsSyncingCheck;
- (BOOL)_checkCurrentPlanIsSyncing;
- (void)setCurrentPlan:(id)a0;
- (void)_delayedStop;
- (id)_outstandingPendingPlan;
- (BOOL)_planContainsClientsWeCareAbout:(id)a0;
- (void)_syncStatusChanged:(id)a0;
- (void)_syncStatusChangedThread:(id)a0;
- (void)_updateSyncingDataClases;
- (void)cancelSyncs;
- (id)currentPlan;
- (id)initWithClients:(id)a0 andTypes:(id)a1;
- (id)syncProgressString;
- (id)syncingDataClasses;

@end
