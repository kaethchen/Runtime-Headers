@class NSMutableDictionary, NSBundle, NSString, NSLock, NSArray;
@protocol WFApplicationContextProvider;

@interface WFApplicationContext : NSObject

@property (class, readonly, nonatomic) WFApplicationContext *sharedContext;

@property (retain, nonatomic) NSMutableDictionary *applicationStateObserversByEvent;
@property (readonly, nonatomic) NSLock *observersLock;
@property (nonatomic) BOOL inactive;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) BOOL canLoadShortcutsDatabaseEntitlementChecked;
@property (retain, nonatomic) id<WFApplicationContextProvider> provider;
@property (retain, nonatomic) id<WFApplicationContextProvider> provider;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSBundle *applicationBundle;
@property (readonly, nonatomic) NSString *currentUserInterfaceType;
@property (readonly, nonatomic) BOOL canLoadShortcutsDatabase;
@property (readonly, nonatomic) BOOL shouldReverseLayoutDirection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long applicationState;
@property (nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (readonly, nonatomic) NSArray *applicationBundleURLSchemes;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canOpenURL:(id)a0;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)_openURL:(id)a0 withBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)addApplicationStateObserver:(id)a0 forEvent:(long long)a1;
- (void)applicationDidBecomeActive;
- (void)handleApplicationStateEvent:(long long)a0;
- (void)openURL:(id)a0 userInterface:(id)a1 completionHandler:(id /* block */)a2;
- (void)openURL:(id)a0 withBundleIdentifier:(id)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeApplicationStateObserver:(id)a0 forEvent:(long long)a1;

@end
