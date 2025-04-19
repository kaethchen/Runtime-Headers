@class NSMutableArray;

@interface _NSVelocityIntegrator : NSObject

@property (nonatomic) struct CGVector { double dx; double dy; } offset;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) struct CGVector { double dx; double dy; } totalTranslation;
@property (nonatomic) BOOL hasMemoizedVelocity;
@property (nonatomic) struct CGVector { double dx; double dy; } memoizedVelocity;
@property (nonatomic) double hysteresisTimeInterval;
@property (nonatomic) double resetHysteresisOnSampleThetaDiff;
@property (copy, nonatomic) id /* block */ didResetHysteresisOnThetaDiffHandler;
@property (nonatomic) double minimumRequiredMovement;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (struct CGVector { double x0; double x1; })_computedVelocity;
- (long long)_sampleCount;
- (void)addSample:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasVelocity;

@end
