@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;

+ (id)sharedCache;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (id)bundleCacheForBundleId:(id)a0;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)invalidateCacheForBundleId:(id)a0;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;
- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)startAutomaticInvalidation;
- (void)startObservingApplicationWorkspaceChanges;
- (void)startObservingSystemLanguageChanges;
- (void)stopAutomaticInvalidation;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)stopObservingSystemLanguageChanges;

@end
