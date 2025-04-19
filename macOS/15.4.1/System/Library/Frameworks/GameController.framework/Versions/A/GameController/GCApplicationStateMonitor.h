@class NSString, BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary, NSObject, GCFrontmostApplicationObserver;
@protocol OS_dispatch_queue;

@interface GCApplicationStateMonitor : NSObject <GCFrontmostApplicationObserverDelegate> {
    BKSApplicationStateMonitor *_bksStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_pidToObservers;
    NSMapTable *_observerToPIDs;
    NSMutableDictionary *_pidToBundleIdentifier;
    GCFrontmostApplicationObserver *_frontmostApplicationObserver;
}

@property (nonatomic) int frontmostApplication;
@property (retain, nonatomic) NSString *frontmostApplicationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 forProcessIdentifier:(int)a1;
- (void)initializeForegroundMonitor;
- (void)initializeStateMonitor;
- (void)onFrontmostApplicationChanged:(int)a0;
- (void)removeObserver:(id)a0 forProcessIdentifier:(int)a1;
- (void)updateInterestedBundleIDs;

@end
