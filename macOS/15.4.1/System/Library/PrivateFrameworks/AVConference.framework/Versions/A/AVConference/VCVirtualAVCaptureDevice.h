@class VCCannedVideoCaptureSource, NSString, NSArray, VCImageResizingConverter, VCVirtualAVCaptureHardware, VCVideoHardwareDumpCollector, AVCaptureDevice, NSMutableArray, NSObject, AVCaptureDeviceFormat;
@protocol OS_dispatch_queue;

@interface VCVirtualAVCaptureDevice : AVCaptureDevice {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _deviceMutex;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceFormat *_activeFormat;
    NSMutableArray *_deviceInputs;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeVideoMaxFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _activeVideoMinFrameDuration;
    int _lockCount;
    int _orientation;
    VCImageResizingConverter *_imageResizingConverter;
    NSString *_deviceUniqueID;
    VCCannedVideoCaptureSource *_captureSource;
    VCVirtualAVCaptureHardware *_captureHardware;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    VCVideoHardwareDumpCollector *_dumpCollector;
}

@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSArray *formats;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } centerStageRectOfInterest;

- (void)dealloc;
- (id)description;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)uniqueID;
- (id)activeFormat;
- (void)setActiveFormat:(id)a0;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setActiveVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMaxFrameDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeVideoMinFrameDuration;
- (BOOL)lockForConfiguration:(id *)a0;
- (void)unlockForConfiguration;
- (void)addDeviceInput:(id)a0;
- (void)configureResizingConverterWithFormat:(id)a0;
- (void)deregisterBlocksFromService;
- (id)deviceCode;
- (id)deviceInputs;
- (void)executeBlockUnderConfigurationLock:(id /* block */)a0;
- (id)initWithUniqueID:(id)a0 orientation:(int)a1;
- (void)registerBlocksForService;
- (void)removeDeviceInput:(id)a0;
- (void)startDumpCollector;
- (int)startVirtualCapture;
- (void)stopDumpCollector;
- (int)stopVirtualCapture;
- (void)verifyLockForConfiguration;

@end
