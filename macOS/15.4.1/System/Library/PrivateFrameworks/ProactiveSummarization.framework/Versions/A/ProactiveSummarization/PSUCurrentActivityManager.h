@interface PSUCurrentActivityManager : NSObject

@property (class, readonly, nonatomic) PSUCurrentActivityManager *sharedInstance;

- (void)dealloc;
- (id)init;
- (void)prewarm;
- (BOOL)_hasLayoutInfo;
- (BOOL)_isAppVisibleWithBundleId:(id)a0;
- (void)_visibilityForAppWithBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchUserActivityContentIdentifiersForBundleId:(id)a0 completionHandler:(id /* block */)a1;

@end
