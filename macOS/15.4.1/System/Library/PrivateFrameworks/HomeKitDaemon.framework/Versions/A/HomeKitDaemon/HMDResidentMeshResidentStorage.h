@class HMDResidentMesh, NSMutableDictionary, NSDictionary, HMFTimer, NSString, HMDResidentDevice;

@interface HMDResidentMeshResidentStorage : HMFObject <HMFLogging, HMFTimerDelegate>

@property (weak, nonatomic) HMDResidentMesh *owner;
@property (weak, nonatomic) HMDResidentDevice *residentDevice;
@property (retain, nonatomic) NSMutableDictionary *metrics;
@property (copy, nonatomic) NSDictionary *lastSentMetrics;
@property (retain, nonatomic) HMFTimer *transmitTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)_transmitAfter:(double)a0;
- (id)_buildPayload;
- (BOOL)_residentDidChange;
- (void)_transmitStatus:(BOOL)a0;
- (id)initWithResidentDevice:(id)a0 owner:(id)a1;

@end
