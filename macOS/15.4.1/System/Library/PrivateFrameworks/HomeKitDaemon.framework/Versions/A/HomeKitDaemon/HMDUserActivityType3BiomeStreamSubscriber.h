@class BMStoreEvent, BPSSink, NSString, BMBiomeScheduler, NSObject, BMStream;
@protocol OS_dispatch_queue, HMDUserActivityType3BiomeStreamSubscriberDelegate;

@interface HMDUserActivityType3BiomeStreamSubscriber : HMFObject

@property (retain, nonatomic) BPSSink *sink;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *biomeQueue;
@property (retain, nonatomic) BMBiomeScheduler *scheduler;
@property (readonly, nonatomic) BMStream *stream;
@property (retain, nonatomic) BMStoreEvent *cachedMostRecentEvent;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id /* block */ filterEventBlock;
@property (weak, nonatomic) id<HMDUserActivityType3BiomeStreamSubscriberDelegate> delegate;
@property (nonatomic, getter=isConfigured) BOOL configured;

- (void).cxx_destruct;
- (id)mostRecentEvent;
- (void)unconfigure;
- (id)_fetchMostRecentEventFromDate:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)fetchMostRecentEventWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 stream:(id)a1 filterEventBlock:(id /* block */)a2;
- (BOOL)isEvent:(id)a0 within24HoursInThePastOfDate:(id)a1;
- (void)registerForBiomeStreamWithIdentifier:(id)a0;

@end
