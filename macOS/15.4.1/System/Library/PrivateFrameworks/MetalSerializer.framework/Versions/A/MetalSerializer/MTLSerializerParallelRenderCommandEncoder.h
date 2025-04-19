@class MTLSerializer, NSString;
@protocol MTLDevice;

@interface MTLSerializerParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    unsigned long long _encodersSize;
    unsigned long long _encodersCount;
    id *_encoders;
}

@property (readonly) MTLSerializer *serializer;
@property BOOL separateCommits;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)endEncoding;
- (id)renderCommandEncoder;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1 serializer:(id)a2;

@end
