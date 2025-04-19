@class NSString, NSNumber;

@interface CMContinuityCaptureLocalFrameLatencyMetrics : CMContinuityCaptureFrameLatencyMetrics {
    BOOL _collectingRemotely;
}

@property (readonly, nonatomic) int mediaStreamID;
@property (retain, nonatomic) NSString *callID;
@property (retain, nonatomic) NSNumber *centerStageEnabled;
@property (retain, nonatomic) NSNumber *portraitEffectEnabled;
@property (retain, nonatomic) NSNumber *studioLightingEnabled;
@property (retain, nonatomic) NSNumber *reactionEffectsEnabled;
@property (retain, nonatomic) NSNumber *backgroundReplacementEnabled;

+ (long long)uniqueID;

- (void).cxx_destruct;
- (void)_finishCollectingMetrics;
- (BOOL)collectingRemotely;
- (void)finishCollectingMetrics;
- (id)initWithMediaStreamID:(int)a0 collectingRemotely:(BOOL)a1;

@end
