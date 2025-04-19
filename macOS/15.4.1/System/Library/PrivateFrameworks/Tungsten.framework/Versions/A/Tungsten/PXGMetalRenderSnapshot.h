@protocol MTLTexture;

@interface PXGMetalRenderSnapshot : PXGRenderSnapshot

@property (readonly, nonatomic) id<MTLTexture> texture;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;

@end
