@class NSString, AVAsset, NSURL, NSArray, NSDictionary;

@interface AutoLoopStabilizer : NSObject <ICFlowControl>

@property (nonatomic) BOOL didDrop;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } firstFrameTimeAfterDrop;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastFrameTimeAfterDrop;
@property int canceledAnalysis;
@property float progressValue;
@property (nonatomic) long long droppedStartFrameCount;
@property (nonatomic) long long droppedEndFrameCount;
@property (readonly) float lastTripodQuality;
@property (retain) NSString *currentStatusString;
@property (retain, nonatomic) AVAsset *movieAssetIn;
@property (retain, nonatomic) NSURL *statsFileOutURL;
@property (nonatomic) unsigned long long frameSearchLength;
@property (nonatomic) float minAllowedRemainingTripodCrop;
@property (copy, nonatomic) id /* block */ statusUpdateBlock;
@property (nonatomic) BOOL drawFeaturesFlag;
@property BOOL doLoopClosureCorrection;
@property (nonatomic) BOOL useLimitedTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } trimStart;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } trimLength;
@property (nonatomic) int naturalTimeScale;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumFrameDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxAllowedTrimTimeStart;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxAllowedTrimTimeEnd;
@property (retain) NSArray *presentationTimesOfFramesToSkip;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputMovieDimensions;
@property (readonly, nonatomic) void *icCorrectionResultRef;
@property (readonly, nonatomic) int analysisResult;
@property (readonly, nonatomic) int lastStabilizationResult;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } refFrameTime;
@property (retain, nonatomic) NSArray *skipFrameTimes;
@property (nonatomic) float necessaryCropGainFractionPerDroppedFrame;
@property (nonatomic) float alwaysAcceptedTripodCropRatio;
@property (nonatomic) float minConfidenceForTripodAccept;
@property (nonatomic) float confidenceHighQualityThreshold;
@property (nonatomic) float minimumHighQualityConfidenceValue;
@property (nonatomic) float cropRatioMinimum;
@property (retain) NSDictionary *featuresDictionary;
@property (nonatomic) BOOL onlyProcessForHighQualityTripod;
@property (nonatomic) BOOL disableGPUStabilization;
@property (nonatomic) BOOL optimizeProcessingForMemory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)ICReportProgress:(float)a0;
- (BOOL)ICShouldBeCanceled;
- (BOOL)CropRectValid:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (unsigned long long)FindFrameIndexForReferenceTimeInHomographies:(const void *)a0;
- (BOOL)CheckForTripodOKInHomographies:(const void *)a0 firstIndex:(unsigned long long)a1 lastIndex:(unsigned long long)a2 refIndex:(unsigned long long)a3 cropRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 minConfidence:(float)a5 confidenceOut:(float *)a6;
- (float)CropRatio:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (int)FindAcceptableTripodSegmentForInput:(const void *)a0 frameTimes:(const void *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })GetPreciseReferenceTimeFromHomographies:(const void *)a0;
- (int)analyzeForAutoloopWithDirect:(BOOL)a0 toAnalysisOutput:(void **)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })determinePreciseTimeRange;
- (BOOL)getNaturalTimeScaleForVideoTrackInAsset;
- (id)getVideoTrack;
- (int)processStabilizationAnalysis:(void *)a0 forcePassThru:(BOOL)a1 forceSmoothing:(BOOL)a2 forceSequentialTripod:(BOOL)a3;
- (int)processStabilizationAnalysisForCinematicL1:(void *)a0;
- (BOOL)tripodOKWithTrimming:(const void *)a0 frameTimes:(const void *)a1 minConfidence:(float)a2;
- (BOOL)updateStabilizerStatus;

@end
