@class CMOdometryManager, NSObject;
@protocol OS_dispatch_queue, ULOdometryBridgeDelegate;

@interface ULOdometryBridge : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULOdometryBridgeDelegate> delegate;
@property (retain, nonatomic) CMOdometryManager *odometryManager;
@property (nonatomic) BOOL backgroudUpdatesRunning;

+ (BOOL)isBackgroundAvailable;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)stopBackgroundUpdates;
- (void)startBackgroundUpdates;

@end
