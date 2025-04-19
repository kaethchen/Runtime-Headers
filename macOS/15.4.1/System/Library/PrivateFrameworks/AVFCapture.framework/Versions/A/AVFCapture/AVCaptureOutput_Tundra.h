@class NSArray, AVCaptureOutputInternal_Tundra;

@interface AVCaptureOutput_Tundra : NSObject {
    AVCaptureOutputInternal_Tundra *_outputInternal;
}

@property (readonly, nonatomic) NSArray *connections;

+ (void)initialize;

- (void)dealloc;
- (id)session;
- (void)setSession:(id)a0;
- (void)removeConnection:(id)a0;
- (id)insertConnection:(id)a0 atIndex:(unsigned long long)a1 error:(id *)a2;
- (id)_inputForConnection:(id)a0;
- (id)_preferredInputPixelBufferAttributesForConnection:(id)a0;
- (void)_updateCompressorNodesForConnection:(id)a0;
- (void)_updateMetadataTransformForConnection:(id)a0;
- (void)_updateVideoDecompressorNodeForConnection:(id)a0;
- (struct { int x0; int x1; })_videoOutputSettingsSizeForConnection:(id)a0;
- (id)_vtCompressionPropertiesForConnection:(id)a0;
- (id)activeConnections;
- (id)addConnection:(id)a0 error:(id *)a1;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (id)avCaptureOutputSettingsForConnection:(id)a0 fileType:(id)a1;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)configureAudioSplitter:(int)a0 mixer:(int)a1 converter:(int)a2 forGraph:(struct OpaqueCMIOGraph { } *)a3 connection:(id)a4 withSettings:(id)a5 audioFileType:(unsigned int)a6 forceConverterToPassThru:(BOOL)a7 setClientSequenceID:(BOOL)a8;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)connectionWithMediaType:(id)a0;
- (long long)defaultVideoFieldModeForConnection:(id)a0;
- (BOOL)defaultVideoMirroringForConnection:(id)a0;
- (long long)defaultVideoOrientationForConnection:(id)a0;
- (id)firstActiveConnection;
- (id)firstEnabledConnectionForMediaType:(id)a0;
- (BOOL)getAudioSplitterNode:(int *)a0 andAudioMixerNode:(int *)a1 forConnection:(id)a2;
- (void)getTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 mirroredOut:(BOOL *)a1 rollAdjustmentOut:(double *)a2 forConnection:(id)a3;
- (void)graphWillStartForSession:(id)a0;
- (void)graphWillStopForSession:(id)a0 error:(id)a1;
- (long long)h264BitRateForConnection:(id)a0;
- (id)h264ProfileLevelForBitRate:(long long)a0;
- (id)initSubclass;
- (void)inputPortFormatDescriptionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)notReadyError;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (BOOL)prefersMixedAudio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (BOOL)setEnabled:(BOOL)a0 forConnection:(id)a1;
- (BOOL)supportsVideoFieldModeForConnection:(id)a0;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMirroringForConnection:(id)a0;
- (BOOL)supportsVideoOrientationForConnection:(id)a0;
- (id)transformedMetadataObjectForMetadataObject:(id)a0 connection:(id)a1;
- (int)videoDecompressionRequirementForConnection:(id)a0;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;

@end
