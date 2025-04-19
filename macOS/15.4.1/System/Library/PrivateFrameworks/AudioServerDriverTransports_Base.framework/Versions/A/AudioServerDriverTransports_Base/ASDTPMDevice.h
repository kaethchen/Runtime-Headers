@class NSString, ASDTPMSequencer;

@interface ASDTPMDevice : NSObject <ASDTPMProtocol>

@property (weak, nonatomic) ASDTPMSequencer *parentSequencer;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int pmOrderPowerUp;
@property (nonatomic) unsigned int pmOrderPowerDown;
@property (nonatomic) BOOL pmNoStateChangeOnFailure;
@property (nonatomic) int powerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pmDeviceWithConfig:(id)a0 forSequencer:(id)a1;

- (void).cxx_destruct;
- (id)deviceName;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStateInactive:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateSleep;

@end
