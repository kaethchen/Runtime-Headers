@class HMFTimer, NSString, NSDictionary, HMDCameraStreamSessionID, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDVideoStreamReconfigureDelegate;

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging> {
    BOOL _reconfigurationMode;
    NSDictionary *_downlinkQualityInfo;
    NSMutableArray *_reconfigureEvents;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraStreamSessionID *_sessionID;
    id<HMDVideoStreamReconfigureDelegate> _delegate;
    double _upgradeInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)downlinkQualityChanged:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2;
- (void)updateReconfigurationMode:(BOOL)a0;

@end
