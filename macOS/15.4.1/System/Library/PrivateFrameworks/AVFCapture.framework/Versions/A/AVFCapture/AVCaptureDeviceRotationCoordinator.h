@class CALayer, AVCaptureDevice, AVWeakReference;

@interface AVCaptureDeviceRotationCoordinator : NSObject {
    AVWeakReference *_coordinatorWeakReference;
    AVWeakReference *_deviceWeakReference;
    long long _devicePosition;
    AVWeakReference *_previewLayerWeakReference;
    double _videoRotationAngleForHorizonLevelPreview;
    double _videoRotationAngleForHorizonLevelCapture;
    BOOL _isInitialVideoRotationAngleForHorizonLevelPreviewSet;
    BOOL _isInitialVideoRotationAngleForHorizonLevelCaptureSet;
}

@property (readonly, weak, nonatomic) AVCaptureDevice *device;
@property (readonly, weak, nonatomic) CALayer *previewLayer;
@property (readonly, nonatomic) double videoRotationAngleForHorizonLevelPreview;
@property (readonly, nonatomic) double videoRotationAngleForHorizonLevelCapture;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)_isExternalDeviceType:(id)a0;
- (id)initWithDevice:(id)a0 previewLayer:(id)a1;

@end
