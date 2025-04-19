@class NSArray, VCVirtualAVCaptureDevice;

@interface VCVirtualAVCaptureDeviceInput : AVCaptureDeviceInput {
    NSArray *_ports;
    VCVirtualAVCaptureDevice *_device;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (void)dealloc;
- (id)device;
- (void)disconnect;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (id)ports;

@end
