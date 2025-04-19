@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)sendMotionData:(id)a0;
- (void)stoppedProvider;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)startedProviderWithOptions:(id)a0;
- (void)stopMotionDataProvider;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)subscriptionExpired;
- (void)unsubscribed;

@end
