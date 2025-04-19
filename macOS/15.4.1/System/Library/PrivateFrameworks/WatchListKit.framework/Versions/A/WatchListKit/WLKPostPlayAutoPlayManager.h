@class NSObject, NSMutableDictionary, WLKPostPlayAutoPlayCache;
@protocol OS_dispatch_queue;

@interface WLKPostPlayAutoPlayManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) WLKPostPlayAutoPlayCache *cache;
@property (nonatomic) BOOL isMigrationInProgress;
@property (nonatomic) BOOL isFetchingAllStatusInProgress;
@property (retain, nonatomic) NSMutableDictionary *ongoingUpdateOperations;

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)isEnabledForType:(unsigned long long)a0;
- (id)initWithCache:(id)a0;
- (void)_networkReachabilityDidChange:(id)a0;
- (void)fetchStatusForAllTypesWithCompletion:(id /* block */)a0;
- (void)_fetchStatusForType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_handleAccountDidChange:(id)a0;
- (BOOL)_hasPreviousPreferenceAsDisableAutoPlay;
- (void)_migrateFromSystemPreferencesStoreOrSettingsStoreWithCompletion:(id /* block */)a0;
- (void)_migrateOffStatusWithCompletion:(id /* block */)a0;
- (void)_performUserSettingsAction:(unsigned long long)a0 settings:(id)a1 dsid:(id)a2 isMigration:(BOOL)a3 completion:(id /* block */)a4;
- (void)_performUserSettingsOperation:(id)a0 dsid:(id)a1 completion:(id /* block */)a2;
- (void)getStatusForType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)setSettings:(id)a0 completion:(id /* block */)a1;

@end
