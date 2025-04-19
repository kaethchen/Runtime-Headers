@class NSObject, NSMutableArray, AWSampleLogger;
@protocol OS_dispatch_queue;

@interface AWAttentionSampler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
}

@property (retain, nonatomic) AWSampleLogger *sampleLogger;
@property (copy) id /* block */ stateChangedCallback;
@property (copy) id /* block */ operationEndableCallback;
@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) BOOL lastFaceMetadataValid;
@property (nonatomic) double lastPitch;
@property (nonatomic) double lastYaw;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic) double lastDistance;
@property (nonatomic) unsigned long long lastFaceState;
@property (nonatomic) unsigned long long lastMetadataType;
@property (nonatomic) unsigned long long lastMotionResult;
@property (nonatomic) float lastAttentionScore;
@property (nonatomic) float lastFaceDetectionScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFaceBounds;
@property (nonatomic) unsigned long long lastPersonID;
@property (readonly, nonatomic) BOOL unitTestSampling;
@property (retain, nonatomic) NSMutableArray *lastMotionData;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)setDisplayState:(BOOL)a0;
- (void)setUnitTestMode;
- (void)finishDeadlineComputationWithOptions:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0 ignoreDisplayState:(BOOL)a1;
- (void)setCarPlayConnected:(BOOL)a0;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(struct { BOOL x0; BOOL x1; BOOL x2; })a2;
- (void)startDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;

@end
