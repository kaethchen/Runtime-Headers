@interface UVCFrameProcessorMJPEGDecodeGVA : UVCFrameProcessorDecode {
    BOOL _skipGVADecode;
}

- (id)initWithDestination:(id)a0 queue:(id)a1 streamFormat:(id)a2 source:(id)a3 pixelFormat:(unsigned long long)a4 colorAttributes:(id)a5;

@end
