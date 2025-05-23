@protocol MTLTextureImplementation;

@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor {
    struct MTLRenderPassAttachmentDescriptorPrivate { id<MTLTextureImplementation> texture; unsigned long long level; unsigned long long slice; unsigned long long depthPlane; unsigned long long loadAction; unsigned long long storeAction; unsigned long long storeActionOptions; struct { double red; double green; double blue; double alpha; } clearColor; double clearDepth; unsigned int clearStencil; unsigned long long stencilResolveFilter; id<MTLTextureImplementation> resolveTexture; unsigned long long resolveLevel; unsigned long long resolveSlice; unsigned long long resolveDepthPlane; unsigned long long resolveFilter; unsigned long long width; unsigned long long height; BOOL yInvert; } _private;
}

+ (id)attachmentDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)texture;
- (void)setStoreAction:(unsigned long long)a0;
- (const struct MTLRenderPassAttachmentDescriptorPrivate { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct { double x0; double x1; double x2; double x3; } x7; double x8; unsigned int x9; unsigned long long x10; id x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; BOOL x18; } *)_descriptorPrivate;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)level;
- (unsigned long long)loadAction;
- (id)resolveTexture;
- (void)setClearStencil:(unsigned int)a0;
- (void)setLoadAction:(unsigned long long)a0;
- (void)setResolveTexture:(id)a0;
- (void)setStoreActionOptions:(unsigned long long)a0;
- (void)setTexture:(id)a0;
- (unsigned long long)slice;
- (unsigned long long)stencilResolveFilter;
- (unsigned long long)storeAction;
- (void)setLevel:(unsigned long long)a0;
- (BOOL)yInvert;
- (unsigned int)clearStencil;
- (unsigned long long)depthPlane;
- (unsigned long long)resolveDepthPlane;
- (unsigned long long)resolveLevel;
- (unsigned long long)resolveSlice;
- (void)setDepthPlane:(unsigned long long)a0;
- (void)setResolveDepthPlane:(unsigned long long)a0;
- (void)setResolveLevel:(unsigned long long)a0;
- (void)setResolveSlice:(unsigned long long)a0;
- (void)setSlice:(unsigned long long)a0;
- (void)setStencilResolveFilter:(unsigned long long)a0;
- (void)setYInvert:(BOOL)a0;
- (unsigned long long)storeActionOptions;

@end
