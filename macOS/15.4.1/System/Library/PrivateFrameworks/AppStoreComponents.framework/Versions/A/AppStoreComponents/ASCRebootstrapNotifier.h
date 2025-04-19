@interface ASCRebootstrapNotifier : NSObject

@property (class, readonly) ASCRebootstrapNotifier *sharedNotifier;

@property (readonly, nonatomic) int token;
@property (nonatomic) unsigned long long rebootstrapCounterSnapshot;

- (void)dealloc;
- (void)postLocalNotification;
- (id)_initSingleton;
- (void)postLocalNotificationIfNeeded;

@end
