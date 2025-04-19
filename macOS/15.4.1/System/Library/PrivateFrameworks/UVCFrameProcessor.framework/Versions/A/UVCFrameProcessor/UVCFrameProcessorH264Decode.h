@class NSString;

@interface UVCFrameProcessorH264Decode : UVCFrameProcessorDecode {
    NSString *_firstKeyframeTime;
    unsigned long long _noOfPframesDropped;
    BOOL _dispatchFrameSync;
}

- (void).cxx_destruct;
- (id)serialize;
- (struct __CFDictionary { } *)_createPropagatableSEIAttachmentsFromNALUnit:(char *)a0;
- (id)_createSEIAttachmentPayloadFromBytePtr:(const char *)a0 dataSize:(unsigned long long)a1;
- (unsigned int)_getSEIUUIDStartByteIndex:(const char *)a0 dataSize:(unsigned long long)a1;
- (struct opaqueCMFormatDescription { } *)createVideoFormatDescriptorFromData:(char *)a0 pps:(char *)a1;
- (BOOL)processElementaryStream:(char *)a0 compressedDataSize:(unsigned long long)a1 spsData:(char **)a2 ppsData:(char **)a3 seiData:(char **)a4;
- (BOOL)setupDecompressionSession:(id)a0 error:(id *)a1 handler:(id /* block */)a2;

@end
