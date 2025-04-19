@interface AXFObserverManager : NSObject

@property (class, readonly) AXFObserverManager *shared;

+ (id)defaultManager;

- (BOOL)registerApplication:(id)a0;
- (void)unregisterApplication:(id)a0;
- (BOOL)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 element:(id)a3 application:(id)a4 queue:(id)a5;
- (void)pruneObservers;
- (BOOL)removeAllObserversForApplication:(id)a0;
- (BOOL)removeObserver:(id)a0 selector:(SEL)a1 name:(id)a2 element:(id)a3 application:(id)a4;

@end
