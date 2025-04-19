@class NSString;

@interface NotificationCenterInvalidationSource : PreflightCacheInvalidationSource

@property (readonly, nonatomic) NSString *notificationName;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_notification:(id)a0;
- (id)initWithPreflightCache:(id)a0 notificationName:(id)a1;
- (id)invalidationReason;

@end
