@class HMDUserActivityType3Schedule, NSString, HMDUserActivityType3BiomeStreamSubscriber, HMDUserActivityType3ScheduleFactory, NSObject;
@protocol OS_dispatch_queue, HMDHomeActivityStateManagerDataSource, HMDUserActivityType3ScheduleListenerDelegate;

@interface HMDDefaultUserActivityType3ScheduleListener : HMFObject <HMDUserActivityType3BiomeStreamSubscriberDelegate, HMDUserActivityType3ScheduleListener>

@property (weak, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HMDUserActivityType3BiomeStreamSubscriber *biomeSubscriber;
@property (readonly, nonatomic) HMDUserActivityType3ScheduleFactory *factory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDUserActivityType3ScheduleListenerDelegate> delegate;
@property (readonly, nonatomic) HMDUserActivityType3Schedule *schedule;

- (void).cxx_destruct;
- (void)unconfigure;
- (void)biomeEventDidUpdate;
- (void)configureWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 dataSource:(id)a1;
- (id)initWithIdentifier:(id)a0 dataSource:(id)a1 biomeStreamSubscriber:(id)a2 factory:(id)a3;

@end
