@interface MotionDecoderWrapper : NSObject {
    void *decoder;
    unsigned long long _attributeCount;
    unsigned long long _componentsPerAttribute;
    struct AttributeInfo { int apiVersion; struct Version { unsigned char major; unsigned char minor; unsigned short revision; } version; int attributeCount; int componentsPerAttribute; unsigned char quatizationBits; } encoderInfo;
}

- (void)dealloc;
- (id).cxx_construct;
- (int)decodeFrameInternal:(id)a0 decodedFrame:(int *)a1 decodeError:(unsigned long long *)a2;
- (int)getAttributeCount;
- (int)getComponentPerAttributeCount;
- (char *)getPointerToDataBuffer:(id)a0;
- (id)initWithEncoderSeqParams:(id)a0;
- (id)motionDecoderWrapperLogSharedInstance;

@end
