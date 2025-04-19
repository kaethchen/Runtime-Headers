@class NSString, NSMapTable;

@interface NSUIActivityManager : NSObject <NSUserActivityDelegate> {
    NSMapTable *_infoByUserActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)userActivityWasContinued:(id)a0;
- (void)userActivityWillSave:(id)a0;
- (void)removeProviderFromUserActivity:(id)a0;
- (void)_continueUserActivity:(id)a0;
- (void)_continueUserActivityAutomatically:(id)a0;
- (void)_didFailToFetchUserActivityWithType:(id)a0 error:(id)a1;
- (void)_restoreProviders:(id)a0 withUserActivity:(id)a1;
- (BOOL)_willFetchUserActivityWithType:(id)a0 progress:(id)a1;
- (void)addProvider:(id)a0 toUserActivity:(id)a1 withSetter:(id /* block */)a2;
- (void)continueUserActivity:(id)a0 sourceApplication:(id)a1;
- (void)continueUserActivityWithUUID:(id)a0 type:(id)a1 sourceApplication:(id)a2;
- (id)infoForProvider:(id)a0;
- (void)lock_addProvider:(id)a0 toUserActivity:(id)a1;
- (id)lock_removeProviderFromUserActivity:(id)a0;

@end
