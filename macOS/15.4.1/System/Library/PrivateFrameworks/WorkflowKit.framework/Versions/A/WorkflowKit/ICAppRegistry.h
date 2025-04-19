@class NSMutableDictionary, NSDictionary, NSArray, ICApp, NSLock;

@interface ICAppRegistry : NSObject

@property (nonatomic) BOOL refreshesInBackground;
@property (retain, nonatomic) NSLock *registryLock;
@property (retain, nonatomic) NSDictionary *appsDictionary;
@property (retain, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) NSLock *observersLock;
@property (retain, nonatomic) NSMutableDictionary *observersByIdentifier;
@property (nonatomic) int urlTypesToken;
@property (readonly, nonatomic) NSArray *apps;
@property (readonly, nonatomic) ICApp *currentApp;
@property (readonly, nonatomic) NSArray *allActions;
@property (readonly, nonatomic) BOOL isFilled;

+ (id)sharedRegistry;
+ (id)bundleIdentifierForLegacyAppIdentifier:(id)a0;
+ (id)legacyAppIdentifierForBundleIdentifier:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)addInstallStatusObserver:(id)a0 forAppIdentifiers:(id)a1;
- (id)appWithIdentifier:(id)a0;
- (id)appWithURLScheme:(id)a0;
- (id)appsWithIdentifiers:(id)a0;
- (void)refreshInstalledApps;
- (void)removeInstallStatusObserver:(id)a0 forAppIdentifiers:(id)a1;
- (id)appWithBundleIdentifier:(id)a0;
- (id)initWithBackgroundRefresh:(BOOL)a0;
- (id)_appsWithIdentifiers:(id)a0;
- (id)actionsWithIdentifiers:(id)a0;
- (void)fillRegistry;
- (void)updateRegistry;

@end
