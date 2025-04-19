@class NSString, HMDUserActivityType3BiomeStreamSubscriber, HMDUserType3Focus;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityType3FocusListenerDelegate;

@interface HMDDefaultUserActivityType3FocusListener : HMFObject <HMDUserActivityType3BiomeStreamSubscriberDelegate, HMDUserActivityType3FocusListener>

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (readonly, nonatomic) HMDUserActivityType3BiomeStreamSubscriber *biomeSubscriber;
@property (readonly, nonatomic, getter=isConfigured) BOOL configured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDUserActivityType3FocusListenerDelegate> delegate;
@property (readonly, copy, nonatomic) HMDUserType3Focus *focus;

- (void).cxx_destruct;
- (void)unconfigure;
- (void)biomeEventDidUpdate;
- (void)configureWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 dataSource:(id)a1;

@end
