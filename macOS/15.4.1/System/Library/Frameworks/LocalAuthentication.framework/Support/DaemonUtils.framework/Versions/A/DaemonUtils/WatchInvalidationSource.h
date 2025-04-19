@class NSString;

@interface WatchInvalidationSource : PreflightCacheInvalidationSource <WatchChangeObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateStatus;
- (id)initWithPreflightCache:(id)a0;
- (id)invalidationReason;
- (void)watchDevicesChanged:(BOOL)a0;

@end
