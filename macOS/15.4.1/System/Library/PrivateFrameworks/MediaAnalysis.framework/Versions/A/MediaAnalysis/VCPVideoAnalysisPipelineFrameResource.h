@class NSDictionary, VCPFrameAnalysisStats;

@interface VCPVideoAnalysisPipelineFrameResource : NSObject

@property (nonatomic) struct opaqueCMSampleBuffer { } *frameSampleBuffer;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } predictedTimeRange;
@property (retain, nonatomic) VCPFrameAnalysisStats *frameStats;
@property (copy, nonatomic) NSDictionary *sceneAnalysisResults;
@property (copy, nonatomic) NSDictionary *actionAnalysisResults;
@property (copy, nonatomic) NSDictionary *fullAnalysisResults;
@property (nonatomic) unsigned long long frameFlags;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
