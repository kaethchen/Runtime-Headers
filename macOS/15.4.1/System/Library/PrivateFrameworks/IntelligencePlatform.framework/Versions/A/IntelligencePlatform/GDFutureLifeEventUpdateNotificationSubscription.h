@class GDInternalViewUpdateNotificationSubscription;

@interface GDFutureLifeEventUpdateNotificationSubscription : NSObject

@property (retain, nonatomic) GDInternalViewUpdateNotificationSubscription *viewUpdateNotificationSubscription;

- (void).cxx_destruct;
- (void)cancelSubscription;
- (id)initWithSystemwideUniqueSubscriptionIdentifier:(id)a0 targetQueue:(id)a1 onReceiveUpdateNotificationBlock:(id /* block */)a2;

@end
