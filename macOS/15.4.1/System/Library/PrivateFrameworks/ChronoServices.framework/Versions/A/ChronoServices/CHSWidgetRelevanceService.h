@class NSDictionary, NSArray;
@protocol CHSChronoServicesConnectionClient;

@interface CHSWidgetRelevanceService : NSObject <BSInvalidatable> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ connectionClient;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ cachePath;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ finishLaunchingToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_invalidated;
    void /* unknown type, empty encoding */ queue_observers;
    void /* unknown type, empty encoding */ queue_widgetRelevanceAssertion;
    void /* unknown type, empty encoding */ queue_timelineEntryRelevanceAssertion;
    void /* unknown type, empty encoding */ queue_timelineEntryRelevances;
    void /* unknown type, empty encoding */ queue_widgetRelevanceCache;
    void /* unknown type, empty encoding */ queue_cachedWidgetRelevanceProperties;
}

@property (nonatomic, readonly) id<CHSChronoServicesConnectionClient> _connectionClient;
@property (nonatomic, readonly) NSDictionary *timelineEntryRelevances;
@property (nonatomic, readonly) NSArray *widgetRelevanceProperties;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithOptions:(unsigned long long)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_syncOnInternalQueue;
- (void)acquireWidgetLifetimeAssertionForWidget:(id)a0 metrics:(id)a1 completion:(id /* block */)a2;
- (id)initWithConnection:(id)a0 cacheURL:(id)a1 options:(unsigned long long)a2;
- (void)reloadWidgetRelevanceForExtensionIdentity:(id)a0 kind:(id)a1 completion:(id /* block */)a2;

@end
