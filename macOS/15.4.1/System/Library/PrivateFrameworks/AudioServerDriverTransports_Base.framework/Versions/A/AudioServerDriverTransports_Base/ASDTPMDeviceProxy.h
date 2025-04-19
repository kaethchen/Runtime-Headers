@class NSString;
@protocol ASDTPMProtocol;

@interface ASDTPMDeviceProxy : NSObject <ASDTPMProtocol>

@property (weak, nonatomic) id<ASDTPMProtocol> proxiedDevice;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int pmOrderPowerUp;
@property (readonly, nonatomic) unsigned int pmOrderPowerDown;
@property (nonatomic) int powerState;
@property (readonly, nonatomic) BOOL pmNoStateChangeOnFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forPMDevice:(id)a0;

- (void).cxx_destruct;
- (int)powerState;
- (void)setPowerState:(int)a0;
- (BOOL)asdtHandlesPowerTransition:(int)a0;
- (int)asdtPowerStateChange:(int)a0;
- (id)initForPMDevice:(id)a0;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStateInactive:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateSleep;

@end
