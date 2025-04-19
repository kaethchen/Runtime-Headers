@class NSMutableArray, FigCaptureMovieFileSinkHeadPipeline, FigVideoCaptureConnectionConfiguration, OS_os_workgroup, BWFigVideoCaptureDevice, FigCaptureMovieFileSinkMiddlePipeline;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline *_middlePipeline;
    NSMutableArray *_tailPipelines;
    NSMutableArray *_movieFileSinkNodes;
    NSMutableArray *_videoCompressorNodes;
    NSMutableArray *_sdofCompressorNodes;
    FigVideoCaptureConnectionConfiguration *_movieFileVideoCaptureConnectionConfiguration;
    BOOL _momentCaptureMovieRecordingEnabled;
    BOOL _overCaptureTailPipelineRenderingEnabled;
    BOOL _overCaptureEnabled;
    BOOL _stereoVideoCaptureEnabled;
    int _videoStabilizationStrength;
    BOOL _smartStyleReversibilityEnabled;
    OS_os_workgroup *_workgroup;
}

+ (void)initialize;

- (void)dealloc;
- (id)middlePipeline;

@end
