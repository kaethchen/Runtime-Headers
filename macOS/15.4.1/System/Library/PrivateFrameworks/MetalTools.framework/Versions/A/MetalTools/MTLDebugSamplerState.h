@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState

@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithSamplerState:(id)a0 descriptor:(id)a1 device:(id)a2;

@end
