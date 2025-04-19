@class AVCaptureMetadataInputInternal_Tundra;

@interface AVCaptureMetadataInput_Tundra : AVCaptureInput_Tundra {
    AVCaptureMetadataInputInternal_Tundra *_internal;
}

+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

- (void)dealloc;
- (id)init;
- (id)ports;
- (BOOL)appendTimedMetadataGroup:(id)a0 error:(id *)a1;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

@end
