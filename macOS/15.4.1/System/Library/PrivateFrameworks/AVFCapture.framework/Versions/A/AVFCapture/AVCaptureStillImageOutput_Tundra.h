@class NSDictionary, NSArray, AVCaptureStillImageOutputInternal_Tundra;

@interface AVCaptureStillImageOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureStillImageOutputInternal_Tundra *_internal;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled;
@property (readonly, getter=isCapturingStillImage) BOOL capturingStillImage;

+ (id)new;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { } *)a0;

- (void)dealloc;
- (id)init;
- (id)_deviceFromActiveDeviceInput;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 imageRequest:(id)a1 error:(id)a2;
- (void)_receiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateHighResMode;
- (void)_updateVideoDecompressorNodeForConnection:(id)a0;
- (id)_videoDecompressionSettings;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (void)captureStillImageAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureAndInitiateCopyStillImageForRequest:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (long long)defaultVideoFieldModeForConnection:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (BOOL)supportsVideoFieldModeForConnection:(id)a0;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)a0;
- (BOOL)supportsVideoMirroringForConnection:(id)a0;
- (BOOL)supportsVideoOrientationForConnection:(id)a0;
- (int)videoDecompressionRequirementForConnection:(id)a0;
- (id)videoDecompressionSettingsForVideoConnection:(id)a0;

@end
