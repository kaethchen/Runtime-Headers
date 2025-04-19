@class UVCDeviceStreamFormat, UVCUSBDeviceStreamingInterface, UVCNativeFrame, NSDictionary;

@interface UVCFrameProcessorNative : NSObject {
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    unsigned char _previousFID;
    UVCNativeFrame *_currentFrame;
    id /* block */ _handler;
    unsigned long long _expectedFrameTime;
    unsigned long long _previousFrameTime;
    NSDictionary *_pixelBufferAuxAttributes;
    unsigned long long _bytesPerRowAllignment;
    unsigned long long _previousPts;
    unsigned long long _completeFrames;
    unsigned long long _packetsReceived;
    unsigned long long _packetsDropped;
    unsigned long long _fidTracker[2];
    struct UVCNativeFrameProcessorPacketDropCount { unsigned long long UVCNativeFrameProcessorPacketDropInvalidDataCount; unsigned long long UVCNativeFrameProcessorPacketDropDataErrorCount; unsigned long long UVCNativeFrameProcessorPacketDropMissingFIDFlipCount; unsigned long long UVCNativeFrameProcessorPacketDropAppendErrorCount; unsigned long long UVCNativeFrameProcessorPacketDropInvalidDataPayloadCount; } _packetDropCount;
}

@property (readonly, weak) UVCDeviceStreamFormat *streamFormat;
@property (readonly, weak) UVCUSBDeviceStreamingInterface *source;
@property (readonly) unsigned long long pixelFormat;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)serialize;
- (void)handleStreamData:(id)a0;
- (id)initWithStreamFormat:(id)a0 pixelFormat:(unsigned long long)a1 colorAttributes:(id)a2 source:(id)a3 handler:(id /* block */)a4;
- (struct OpaqueCMBlockBuffer { } *)createBlockBufferForPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct OpaqueCMBlockBuffer { } *)createBlockBufferMultiplePlane:(unsigned long long)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (struct OpaqueCMBlockBuffer { } *)createBlockBufferSinglePlane:(struct __CVBuffer { } *)a0;
- (id)createNativeFrame:(id)a0 data:(id)a1;
- (void)dispatchPreviousFrame;

@end
