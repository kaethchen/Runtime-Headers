@class UVCDeviceStreamFormat, UVCUSBDeviceStreamingInterface, NSDictionary;

@interface UVCFrameProcessorRotate : UVCFrameProcessorBase {
    id _pixelBufferPool;
    id _imageRotateSession;
    NSDictionary *_pixelBufferAuxAttributes;
    NSDictionary *_colorAttributes;
}

@property (readonly, weak) UVCDeviceStreamFormat *streamFormat;
@property (readonly, weak) UVCUSBDeviceStreamingInterface *source;
@property (readonly) unsigned long long rollAngle;
@property (readonly) unsigned long long pixelFormat;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate:(id /* block */)a0;
- (id)serialize;
- (void)handleStreamData:(id)a0 handler:(id /* block */)a1;
- (id)initWithDestination:(id)a0 queue:(id)a1 streamFormat:(id)a2 source:(id)a3 pixelFormat:(unsigned long long)a4 colorAttributes:(id)a5 rollAngle:(unsigned long long)a6;
- (BOOL)setupRotationSession:(unsigned long long)a0;

@end
