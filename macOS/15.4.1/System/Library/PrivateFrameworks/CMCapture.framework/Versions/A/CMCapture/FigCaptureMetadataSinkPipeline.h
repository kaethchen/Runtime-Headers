@class BWSceneClassifierSinkNode, BWMRCNode, NSString, BWMetadataDetectorGatingNode, BWNodeOutput, BWFaceDetectionNode;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMetadataDetectorGatingNode *_metadataGatingNode;
    BWMRCNode *_mrcNode;
    BOOL _mrcSuspended;
    BOOL _mrcConnectionDisabled;
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWNodeOutput *_smartCameraInferenceOutput;
    BWFaceDetectionNode *_faceDetectionNode;
    NSString *_sourceID;
    int _sourceDeviceType;
}

+ (void)initialize;

- (void)dealloc;

@end
