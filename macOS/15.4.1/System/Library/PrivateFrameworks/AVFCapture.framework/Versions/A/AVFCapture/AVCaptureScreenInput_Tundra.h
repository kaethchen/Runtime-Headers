@class AVCaptureScreenInputInternal_Tundra;

@interface AVCaptureScreenInput_Tundra : AVCaptureInput_Tundra {
    AVCaptureScreenInputInternal_Tundra *_internal;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameDuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL capturesMouseClicks;
@property (nonatomic) BOOL capturesCursor;
@property (nonatomic) BOOL removesDuplicateFrames;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithDisplayID:(unsigned int)a0;
- (id)ports;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_flippedCropRectForCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)_getInputUnitProperty:(unsigned int)a0 bytes:(void *)a1 length:(unsigned int)a2;
- (unsigned int)_mouseClickEffect;
- (int)_setInputUnitProperty:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;
- (void)_syncScreenInputWithSessionSettings;
- (void)_updateGraphicsSubsystemErrorStatusFromPropertyListener:(id)a0;
- (BOOL)addInputUnitsForInputPort:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (id)applicationAnalytics;
- (int)captureTimeScale;
- (int)clockProviderNodeForInputPort:(id)a0;
- (int)graphNodeForInputPort:(id)a0;
- (struct OpaqueCMClock { } *)inputClock;
- (id)notReadyError;
- (void)removeInputUnitsForInputPort:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (void)sessionWillUseOutputDecompressionOptions:(id)a0 forPort:(id)a1;
- (void)setCaptureTimeScale:(int)a0;
- (unsigned int)unitOutputNumberForInputPort:(id)a0;

@end
