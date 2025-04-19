@class NSString, AVCaptureConnection_Tundra, AVCaptureSession_Tundra, AVCaptureVideoPreviewLayerInternal_Tundra;

@interface AVCaptureVideoPreviewLayer_Tundra : CALayer {
    AVCaptureVideoPreviewLayerInternal_Tundra *_internal;
}

@property (retain, nonatomic) AVCaptureSession_Tundra *session;
@property (readonly, nonatomic) AVCaptureConnection_Tundra *connection;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (readonly, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
@property (nonatomic) BOOL automaticallyAdjustsMirroring;
@property (nonatomic, getter=isMirrored) BOOL mirrored;

+ (void)initialize;
+ (id)layerWithSession:(id)a0;
+ (id)layerWithSessionWithNoConnection:(id)a0;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSession:(id)a0;
- (void)removeConnection:(id)a0;
- (id)pixelBufferAttributes;
- (void)setPixelBufferAttributes:(id)a0;
- (id)_input;
- (void)_updateCaptureDeviceTransformWithConnection:(id)a0 videoGravity:(id)a1 sourceSize:(struct CGSize { double x0; double x1; })a2;
- (id)_videoPreviewUnitPixelBufferAttributes;
- (id)addConnection:(id)a0 error:(id *)a1;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (long long)defaultVideoFieldModeForConnection:(id)a0;
- (BOOL)defaultVideoMirroringForConnection:(id)a0;
- (long long)defaultVideoOrientationForConnection:(id)a0;
- (void)initCommonStorage;
- (id)initWithSessionWithNoConnection:(id)a0;
- (void)inputFormatDescriptionChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)notReadyError;
- (BOOL)pausePreviewForConnection:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)positionSublayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshFormatDescriptionFromInputPort:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (BOOL)resumePreviewForConnection:(id)a0;
- (BOOL)setPaused:(BOOL)a0 forConnection:(id)a1;
- (void)setSessionWithNoConnection:(id)a0;
- (BOOL)shouldMirrorPreviewForConnection:(id)a0;
- (id)subLayer;
- (BOOL)supportsVideoFieldModeForConnection:(id)a0;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMirroringForConnection:(id)a0;
- (BOOL)supportsVideoOrientationForConnection:(id)a0;
- (id)transformedMetadataObjectForMetadataObject:(id)a0;
- (int)videoDecompressionRequirementForConnection:(id)a0;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;

@end
