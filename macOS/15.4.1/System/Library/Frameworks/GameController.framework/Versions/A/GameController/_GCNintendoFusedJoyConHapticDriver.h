@protocol _GCDriverClientInterface;

@interface _GCNintendoFusedJoyConHapticDriver : NSObject <_GCDriverClientHapticInterface> {
    id<_GCDriverClientInterface> _leftDriver;
    id<_GCDriverClientInterface> _rightDriver;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)enableHaptics;
- (void)enqueueTransient:(id)a0 hapticMotor:(unsigned long long)a1;
- (id)getDriver:(unsigned long long)a0;
- (void)setHapticMotor:(unsigned long long)a0 frequency:(float)a1 amplitude:(float)a2;

@end
