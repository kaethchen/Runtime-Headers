@class NSArray, AVCaptureMetadataOutputInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureMetadataOutputObjectsDelegate_Tundra;

@interface AVCaptureMetadataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureMetadataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureMetadataOutputObjectsDelegate_Tundra> metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray *availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectOfInterest;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (id)connectionMediaTypes;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (void)setMetadataObjectsDelegate:(id)a0 queue:(id)a1;

@end
