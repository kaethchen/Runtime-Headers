@interface AXFMonoTimbralSampler : NSObject

@property (nonatomic) BOOL _graphOwner;
@property (readonly, nonatomic) struct OpaqueAUGraph { } *graph;
@property (readonly, nonatomic) struct ComponentInstanceRecord { long long x0[1]; } *sampler;
@property (readonly, nonatomic) struct ComponentInstanceRecord { long long x0[1]; } *defaultIO;

- (void)dealloc;
- (id)_initWithSamplerConfiguration:(struct { unsigned int x0; unsigned int x1; void *x2; })a0 andStart:(BOOL)a1;
- (id)initWithAudioFileAtURL:(id)a0 andStart:(BOOL)a1;
- (id)initWithInstrumentData:(struct AUSamplerInstrumentData { struct __CFURL *x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })a0 andStart:(BOOL)a1;
- (struct OpaqueAUGraph { } *)transferOwnership;

@end
