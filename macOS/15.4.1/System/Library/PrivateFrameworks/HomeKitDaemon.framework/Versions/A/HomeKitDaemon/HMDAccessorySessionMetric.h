@class NSDate, NSString, NSError, HMDHAPAccessory, NSMutableDictionary, NSDictionary, HAP2AccessorySessionInfo, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessorySessionMetric : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSString *accessoryTransport;
@property (nonatomic) double activeSessionDurationSec;
@property (nonatomic) double reachableDurationSec;
@property (nonatomic) unsigned long long sessionFailures;
@property (nonatomic) unsigned long long successfulSessionRetries;
@property (copy, nonatomic) NSError *topError;
@property (nonatomic) BOOL isFromPrimary;
@property (copy, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) BOOL hasActiveSession;
@property (copy, nonatomic) NSDate *reachableStartTime;
@property (nonatomic) BOOL isReachable;
@property (copy, nonatomic) NSDate *metricCollectionStartTime;
@property (retain, nonatomic) NSMutableDictionary *errorCounts;
@property (nonatomic) double submissionIntervalSec;
@property (readonly, nonatomic) BOOL isHomeThreadCapable;
@property (readonly, nonatomic) BOOL isPrimaryResidentThreadCapable;
@property (readonly, nonatomic) BOOL isThreadNetworkUp;
@property (readonly, nonatomic) double sessionCheckIntervalSec;
@property (readonly, nonatomic) BOOL isBonjourUpdateForced;
@property (readonly, nonatomic) NSString *expectedTransport;
@property (readonly, copy, nonatomic) NSDictionary *state;
@property (copy, nonatomic) HAP2AccessorySessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)submitMetric;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)timerDidFire:(id)a0;
- (void)_resetSessionMetric;
- (void)_submitMetric;
- (void)_updateSessionState:(BOOL)a0 linkLayerType:(long long)a1 sessionInfo:(id)a2 bookkeeping:(id)a3 withError:(id)a4;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 hapSessionTTRTimer:(id)a2 hapSessionTTRAllowList:(id)a3 radarInitiator:(id)a4;
- (BOOL)isCurrentPrimaryResident;
- (void)resetSessionMetric;
- (void)updateReachableState:(BOOL)a0;
- (void)updateSessionState:(BOOL)a0 linkLayerType:(long long)a1 sessionInfo:(id)a2 bookkeeping:(id)a3 withError:(id)a4;

@end
