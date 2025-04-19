@class NSArray, ASDTAudioDevice, NSObject, NSMutableArray;
@protocol ASDTPMProtocol, OS_dispatch_queue;

@interface ASDTPMSequencer : NSObject

@property (weak, nonatomic) NSObject<ASDTPMProtocol> *parent;
@property (weak, nonatomic) ASDTAudioDevice *parentDevice;
@property (nonatomic) int quiescentState;
@property (retain, nonatomic) NSArray *pmDevicesPowerUp;
@property (retain, nonatomic) NSMutableArray *mutablePMDevicesPowerUp;
@property (retain, nonatomic) NSArray *pmDevicesPowerDown;
@property (retain, nonatomic) NSMutableArray *mutablePMDevicesPowerDown;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pmSerialQueue;
@property (readonly, nonatomic) int powerState;

+ (long long)compare:(id)a0 with:(id)a1 forPowerUp:(BOOL)a2;
+ (id)pmSequencerWithPMDeviceConfig:(id)a0 withParent:(id)a1;

- (void).cxx_destruct;
- (BOOL)addPMDevicesWithConfig:(id)a0;
- (BOOL)doAddPMDeviceWithConfig:(id)a0;
- (int)doExecuteSequenceToState:(int)a0;
- (void)doUpdateQuiescentState:(int)a0;
- (int)executeSequenceFromState:(int)a0 toState:(int)a1;
- (int)executeSequenceToState:(int)a0;
- (int)executeSequenceToState:(int)a0 fromState:(int)a1;
- (id)initWithPMDeviceConfig:(id)a0 withParent:(id)a1;
- (id)pmDeviceWithName:(id)a0;
- (void)sortPMDevices;
- (void)updateQuiescentState:(int)a0;

@end
