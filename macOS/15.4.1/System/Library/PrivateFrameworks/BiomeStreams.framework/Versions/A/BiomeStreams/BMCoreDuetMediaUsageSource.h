@protocol BMCoreDuetMediaUsageStore;

@interface BMCoreDuetMediaUsageSource : BMSource

@property (retain, nonatomic) id<BMCoreDuetMediaUsageStore> storage;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0;

@end
