@interface BWStillImageSmartStyleUnstyledBufferEmitterNode : BWNode

+ (void)initialize;

- (id)init;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
