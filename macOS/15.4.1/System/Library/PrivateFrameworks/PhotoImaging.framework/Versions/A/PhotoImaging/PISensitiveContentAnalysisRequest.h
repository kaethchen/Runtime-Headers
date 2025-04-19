@class NSObject;
@protocol OS_dispatch_queue;

@interface PISensitiveContentAnalysisRequest : NURenderRequest

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sanitizeQueue;
@property (nonatomic) BOOL performRegionSpecificChecks;

+ (BOOL)currentSensitivityExceedsThresholds:(double)a0 initialSensitivity:(double)a1;
+ (BOOL)currentSensitivityExceedsThresholdsV2:(double)a0 initialSensitivity:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)dumpFileName;
- (void)resolveWithInputBufferResponse:(id)a0 completion:(id /* block */)a1;

@end
