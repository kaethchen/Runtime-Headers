@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stateString;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (void)_setNewPriority;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)a0;
- (void)_updateForegroundDataclasses;
- (id)appIDsToDataclasses;
- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)setupProcessStateMonitor;

@end
