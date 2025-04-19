@class ULOdometryBridge, NSUUID, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue, ULOdometryProviderDelegate;

@interface ULOdometryProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULOdometryProviderDelegate> delegate;
@property (retain, nonatomic) NSUUID *trajectoryUUID;
@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSDate *previousStatusUpdateDate;
@property (retain, nonatomic) ULOdometryBridge *odometryBridge;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)stopBackgroundUpdates;
- (BOOL)_checkIfExitedBubble;
- (id)_getDateFromTimestamp:(double)a0;
- (void)_resetPosition;
- (void)_resetTrajectory;
- (void)_updatePosition:(id)a0;
- (void)didReceiveOdometryUpdate:(id)a0 withError:(id)a1;
- (void)startBackgroundUpdates;

@end
