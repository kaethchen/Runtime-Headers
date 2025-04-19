@class DeskCamRenderingSession, NSString, DeskCamSessionOptions, CMMotionManager;

@interface DeskCamSession : NSObject {
    DeskCamRenderingSession *_renderingSession;
    DeskCamSessionOptions *_options;
    struct { int width; int height; } _outputDimensions;
    NSString *_portType;
    NSString *_deviceModelName;
    int _deviceType;
    CMMotionManager *_cmMotionManager;
    void /* unknown type, empty encoding */ _cmMotionManagerDisplayGravity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cmMotionManagerLock;
}

@property (retain, nonatomic) DeskCamSessionOptions *options;
@property (nonatomic) int outputType;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ topLeft; void /* unknown type, empty encoding */ topRight; void /* unknown type, empty encoding */ bottomLeft; void /* unknown type, empty encoding */ bottomRight; } corners; } trapezoid;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } transformMatrix;
@property (readonly, nonatomic) BOOL transformIsValid;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ focusPoint;
@property (readonly, nonatomic) unsigned int exifOrientation;
@property (readonly, nonatomic) BOOL isFrontFacingCamera;
@property (readonly, nonatomic) float autoZoomValue;
@property (readonly, nonatomic) BOOL autoZoomSupported;

- (void).cxx_destruct;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 portType:(id)a1 deviceModelName:(id)a2;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 outputPixelBuffer:(struct __CVBuffer { } *)a2;
- (int)_deviceType;

@end
