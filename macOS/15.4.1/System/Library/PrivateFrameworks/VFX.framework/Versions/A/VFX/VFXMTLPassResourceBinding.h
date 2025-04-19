@interface VFXMTLPassResourceBinding : VFXMTLResourceBinding {
    struct { struct __CFXFXPassInput *x0; unsigned int x1; unsigned int x2; } *_inputs;
    struct __CFXFXPassInput { } *_samplerInput;
}

@property (nonatomic) long long inputsCount;
@property (nonatomic) long long bufferSize;

- (void)dealloc;
- (id)init;

@end
