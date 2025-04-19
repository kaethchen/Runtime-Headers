@protocol HMMUptimeProvider, HMDEventCountersStoring, HMDEventCounterContext;

@interface HMDEventCountersManagerLegacyDelegate : NSObject <HMDEventCountersManagerDelegate>

@property (readonly, nonatomic) id<HMDEventCountersStoring> counterStorage;
@property (readonly, nonatomic) id<HMMUptimeProvider> uptimeProvider;
@property (weak, nonatomic) id<HMDEventCounterContext> context;

- (void).cxx_destruct;
- (void)saveForManager:(id)a0;
- (id)initWithStorage:(id)a0 uptimeProvider:(id)a1;
- (id)groupForSpecifier:(id)a0;
- (id)initialCounterGroups;

@end
