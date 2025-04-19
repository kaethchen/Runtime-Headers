@class BWIrisStagingNode, NSString, NSMutableArray, NSArray, BWSceneClassifierSinkNode, BWAudioConverterNode, BWFileCoordinatorNode, BWNodeOutput, BWVideoOrientationMetadataNode, BWPhotoDecompressorNode, BWVideoDefringingNode;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver;

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWAudioConverterNode *_audioConverterNode;
    BWAudioConverterNode *_cinematicAudioConverterNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    int _sourceDeviceType;
}

@property (nonatomic) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *videoConnectionID;
@property (readonly, nonatomic) NSString *videoSourceID;
@property (readonly, nonatomic) int videoSourceDeviceType;
@property (readonly, nonatomic) BWIrisStagingNode *irisStagingNode;
@property (readonly, nonatomic) BWFileCoordinatorNode *fileCoordinatorNode;
@property (readonly, nonatomic) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (readonly, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (readonly, nonatomic) BWVideoDefringingNode *videoDefringingNode;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeOutput *audioOutput;
@property (readonly, nonatomic) BWNodeOutput *cinematicAudioOutput;
@property (readonly, nonatomic) NSMutableArray *metadataOutputs;
@property (readonly, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (readonly, nonatomic) int indexOfVideoOrientationInMetadataOutputs;
@property (readonly, nonatomic) NSMutableArray *inferenceConnections;
@property (nonatomic) BOOL sceneClassifierSuspended;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 videoSourceCaptureOutput:(id)a1 audioSourceCaptureOutput:(id)a2 audioSourceCinematicAudioCaptureOutput:(id)a3 smartCameraInferenceOutput:(id)a4 detectedObjectBoxedMetadataOutputs:(id)a5 objectDetectionSourceOutput:(id)a6 metadataSourcePipelineOutputs:(id)a7 graph:(id)a8 parentPipeline:(id)a9 inferenceScheduler:(id)a10 captureDevice:(id)a11 audioSourceDelegate:(id)a12 fileCoordinatorStatusDelegate:(id)a13 irisRequestDelegate:(id)a14 masterClock:(struct OpaqueCMClock { } *)a15 workgroup:(id)a16 videoGreenGhostMitigationEnabled:(BOOL)a17;

@end
