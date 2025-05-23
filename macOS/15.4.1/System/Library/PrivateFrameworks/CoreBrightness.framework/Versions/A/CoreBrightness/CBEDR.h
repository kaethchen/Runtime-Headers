@class CBEDRModulator;

@interface CBEDR : NSObject {
    unsigned long long _rampPolicy;
    float _requestedHeadroom;
    float _currentMaxBrightness;
    float _currentHeadroom;
}

@property float panelMax;
@property float brightnessCap;
@property float sdrBrightness;
@property float referenceHeadroom;
@property float minHeadroom;
@property float maxHeadroom;
@property float appliedCompensation;
@property float secondsPerStop;
@property float secondsPerStopExit;
@property (retain) CBEDRModulator *headroomModulator;

+ (float)animatedHeadroomForOrigin:(float)a0 target:(float)a1 andProgress:(float)a2;
+ (float)headroomToScalingFactor:(float)a0;
+ (float)headroomToStops:(float)a0;
+ (float)overallRampDuration:(float)a0 target:(float)a1 durationPerStop:(float)a2;
+ (float)scalingFactorToHeadroom:(float)a0;
+ (float)stopsToHeadroom:(float)a0;

- (void)dealloc;
- (id)description;
- (float)availableHeadroom;
- (float)cappedHeadroomFromUncapped:(float)a0;
- (float)clampHeadroom:(float)a0;
- (id)copyStatusInfo;
- (id)initWithRampPolicy:(unsigned long long)a0 potentialHeadroom:(float)a1 andReferenceHeadroom:(float)a2;
- (void)resetRequestedHeadroom;
- (void)sanityCheck;
- (BOOL)shouldUpdateEDRForRequestedHeadroom:(float)a0 targetHeadroom:(float *)a1;
- (BOOL)shouldUpdateEDRForRequestedHeadroom:(float)a0 targetHeadroom:(float *)a1 rampTime:(double *)a2;
- (BOOL)shouldUpdateEDRForRequestedHeadroom:(float)a0 targetHeadroom:(float *)a1 rampTime:(double *)a2 durationPerStop:(float)a3;

@end
