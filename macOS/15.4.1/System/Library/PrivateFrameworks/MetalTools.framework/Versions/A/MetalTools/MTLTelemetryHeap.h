@class MTLTelemetryDevice;

@interface MTLTelemetryHeap : MTLToolsHeap

@property (readonly, nonatomic) MTLTelemetryDevice *telemetryDevice;

- (id)initWithHeap:(id)a0 descriptor:(id)a1 device:(id)a2;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;

@end
