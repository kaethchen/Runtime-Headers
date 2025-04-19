@class HMFTimer, HMMTRAccessoryServer, NSMutableDictionary, NSString, MTRAttributePath;

@interface HMMTRAttributeTimer : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *attributeTimer;
@property (readonly, nonatomic) MTRAttributePath *path;
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server;
@property (retain, nonatomic) NSMutableDictionary *report;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (void)updateReport:(id)a0;
- (id)initWithServer:(id)a0 report:(id)a1 timeout:(double)a2 queue:(id)a3 server:(id)a4;

@end
