@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface GDInternalViewUpdateNotificationSubscription : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) BMBiomeScheduler *scheduler;
@property (readonly, nonatomic) BPSSink *sink;

- (void).cxx_destruct;
- (void)cancelSubscription;
- (id)initForViewName:(id)a0 systemwideUniqueSubscriptionIdentifier:(id)a1 useCase:(id)a2 targetQueue:(id)a3 onReceiveUpdateNotificationBlock:(id /* block */)a4;

@end
