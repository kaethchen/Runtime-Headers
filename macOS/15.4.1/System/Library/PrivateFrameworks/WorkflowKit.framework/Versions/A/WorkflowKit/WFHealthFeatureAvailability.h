@protocol WFHealthFeatureObserver;

@interface WFHealthFeatureAvailability : NSObject

@property (weak, nonatomic) id<WFHealthFeatureObserver> observer;
@property (readonly, nonatomic) unsigned long long sleepOnboardingStatus;

- (void).cxx_destruct;
- (id)initWithSleepFeature:(unsigned long long)a0;

@end
