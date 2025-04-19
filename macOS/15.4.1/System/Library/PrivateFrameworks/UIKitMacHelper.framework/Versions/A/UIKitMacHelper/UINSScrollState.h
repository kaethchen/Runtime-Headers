@class NSTimer, UINSEwmaFilter;

@interface UINSScrollState : NSObject {
    double _velocityLastTimestamp;
    UINSEwmaFilter *_velocityFilterX;
    UINSEwmaFilter *_velocityFilterY;
}

@property (nonatomic) unsigned int contextId;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } momentumVelocity;
@property (nonatomic) unsigned long long gesturePhase;
@property (nonatomic) unsigned long long momentumPhase;
@property (nonatomic) unsigned long long relativePhase;
@property (retain, nonatomic) NSTimer *relativeTimer;

- (id)init;
- (void).cxx_destruct;
- (void)addMomentumDelta:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)resetMomentumVelocity;

@end
