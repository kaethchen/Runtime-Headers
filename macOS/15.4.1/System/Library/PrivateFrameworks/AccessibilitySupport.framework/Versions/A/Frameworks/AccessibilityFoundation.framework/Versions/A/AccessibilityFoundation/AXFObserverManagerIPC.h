@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AXFObserverManagerIPC : AXFObserverManager

@property (retain, nonatomic) NSLock *_observerLock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_pruneTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_pruneTimerQueue;
@property (retain, nonatomic) NSMutableDictionary *_applicationAXObservers;
@property (retain, nonatomic) NSMutableDictionary *_applicationLocks;
@property (retain, nonatomic) NSMutableDictionary *_applicationObserverGroupSets;
@property (retain, nonatomic) NSLock *_observerIDToAppLock;
@property (retain, nonatomic) NSMutableDictionary *_observerIDToApp;

+ (id)shared;
+ (id)observerThread;

- (id)init;
- (void).cxx_destruct;
- (BOOL)registerApplication:(id)a0;
- (void)unregisterApplication:(id)a0;
- (void)_pruneObservers;
- (void)_cleanupNonObservingGroups;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 element:(id)a3 application:(id)a4 queue:(id)a5;
- (void)fireObserverID:(long long)a0 element:(id)a1 info:(id)a2;
- (void)pruneObservers;
- (BOOL)removeAllObserversForApplication:(id)a0;
- (BOOL)removeObserver:(id)a0 selector:(SEL)a1 name:(id)a2 element:(id)a3 application:(id)a4;

@end
