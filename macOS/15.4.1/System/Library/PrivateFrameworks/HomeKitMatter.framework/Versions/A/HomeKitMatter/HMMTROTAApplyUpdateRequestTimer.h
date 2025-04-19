@class HMFTimer, HMMTRAccessoryServer, HMMTROTAProviderDelegate, NSString;

@interface HMMTROTAApplyUpdateRequestTimer : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *updateTimer;
@property (weak, nonatomic) HMMTROTAProviderDelegate *otaProvider;
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (id)initWithServer:(id)a0 otaProvider:(id)a1 queue:(id)a2;

@end
