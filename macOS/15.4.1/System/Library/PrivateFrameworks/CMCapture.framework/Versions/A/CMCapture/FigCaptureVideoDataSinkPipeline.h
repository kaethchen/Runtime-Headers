@class BWPipelineStage, BWPixelTransferNode, NSString, FigCaptureVISPipeline, BWFigVideoCaptureDevice, BWNodeOutput;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPipelineStage *_visPipelineStage;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
    BWNodeOutput *_faceTrackingVideoCaptureOutput;
    BWNodeOutput *_offlineVISMotionDataCaptureOutput;
    NSString *_sourceID;
    int _sourceDeviceType;
    BOOL _optimizedForPreview;
}

+ (void)initialize;

- (void)dealloc;
- (void)setDiscardsSampleData:(BOOL)a0;

@end
