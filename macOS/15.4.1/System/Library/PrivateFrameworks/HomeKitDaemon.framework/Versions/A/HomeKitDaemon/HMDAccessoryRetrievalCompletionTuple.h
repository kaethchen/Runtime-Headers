@class HMFTimer, NSString, HMDAccessory, HMDHome, NSMutableArray;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject <HMFTimerDelegate>

@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) long long linkType;
@property (nonatomic) double retrievalTimeout;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)addCompletion:(id /* block */)a0;
- (void)timerDidFire:(id)a0;
- (id)initWithHome:(id)a0 accessory:(id)a1 linkType:(long long)a2;

@end
