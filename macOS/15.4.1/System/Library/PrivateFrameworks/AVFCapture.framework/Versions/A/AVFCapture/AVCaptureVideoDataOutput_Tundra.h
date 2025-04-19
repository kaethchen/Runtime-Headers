@class NSArray, NSDictionary, AVCaptureVideoDataOutputInternal_Tundra, NSObject;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate_Tundra, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureVideoDataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate_Tundra> sampleBufferDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (copy, nonatomic) NSDictionary *videoSettings;
@property (readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;
@property (nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property (nonatomic) BOOL automaticallyConfiguresOutputBufferDimensions;
@property (nonatomic) BOOL deliversPreviewSizedOutputBuffers;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeConnection:(id)a0;
- (BOOL)isSceneStabilityMetadataEnabled;
- (void)_render:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (void)_updateVideoDecompressorNodeForConnection:(id)a0;
- (void)_updateVideoFrameRateGovernorNodeForConnection:(id)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (id)avCaptureOutputSettingsForConnection:(id)a0 fileType:(id)a1;
- (id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)a0;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)getTransformedDetectedObjectsInfoFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 connection:(id)a1;
- (BOOL)isSceneStabilityMetadataSupported;
- (BOOL)isVideoSettingsAspectRatioOverrideEnabled;
- (BOOL)isVideoSettingsAspectRatioOverrideSupported;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)a0;
- (id)recommendedVideoSettingsForVideoCodecType:(id)a0 assetWriterOutputFileType:(id)a1;
- (id)recommendedVideoSettingsForVideoCodecType:(id)a0 assetWriterOutputFileType:(id)a1 outputFileURL:(id)a2;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (id)requestedBufferAttachments;
- (void)setRequestedBufferAttachments:(id)a0;
- (void)setSampleBufferDelegate:(id)a0 queue:(id)a1;
- (void)setSceneStabilityMetadataEnabled:(BOOL)a0;
- (void)setVideoSettingsAspectRatioOverrideEnabled:(BOOL)a0;
- (id)supportedAssetWriterOutputFileTypes;
- (BOOL)supportsVideoFieldModeForConnection:(id)a0;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMirroringForConnection:(id)a0;
- (BOOL)supportsVideoOrientationForConnection:(id)a0;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;

@end
