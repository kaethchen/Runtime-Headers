@class UVCDeviceStreamFormat, UVCUSBDeviceStreamingInterface, NSDictionary;

@interface UVCFrameProcessorDecode : UVCFrameProcessorBase {
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    struct opaqueCMFormatDescription { } *_videoFormatDescriptor;
    struct { unsigned long long noOfFramesDecodeSend; unsigned long long noOfFramesDecodeCompleted; unsigned long long decodeLatency; unsigned long long lastFrameSize; unsigned long long totalFrameSize; } _info;
    NSDictionary *_colorAttributes;
}

@property (readonly, weak) UVCDeviceStreamFormat *streamFormat;
@property (readonly, weak) UVCUSBDeviceStreamingInterface *source;
@property (readonly) unsigned long long pixelFormat;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate:(id /* block */)a0;
- (id)serialize;
- (struct OpaqueVTDecompressionSession { } *)decompressionSession;
- (void)setDecompressionSession:(struct OpaqueVTDecompressionSession { } *)a0;
- (void)handleStreamData:(id)a0 handler:(id /* block */)a1;
- (id)initWithDestination:(id)a0 queue:(id)a1 streamFormat:(id)a2 source:(id)a3 pixelFormat:(unsigned long long)a4 colorAttributes:(id)a5;
- (struct OpaqueVTDecompressionSession { } *)createDecompressionSession:(id)a0 videoFormatDescriptor:(struct opaqueCMFormatDescription { } *)a1 error:(id *)a2;
- (struct opaqueCMSampleBuffer { } *)createSampleBuffer:(id)a0 error:(id *)a1;
- (BOOL)decodeFrame:(id)a0 outError:(id *)a1 handler:(id /* block */)a2;
- (void)logDecodeLatency:(unsigned long long)a0;
- (void)setVideoFormatDescriptor:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)setupDecompressionSession:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (struct opaqueCMFormatDescription { } *)videoFormatDescriptor;

@end
