@class NSSet;

@interface _NotificationObserver : NSObject

@property (copy, nonatomic) NSSet *notificationNames;
@property (copy) id /* block */ notificationReceivedBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerObject:(id)a0;
- (void)_unregisterObject:(id)a0;
- (void)_didReceiveNotification:(id)a0;

@end
