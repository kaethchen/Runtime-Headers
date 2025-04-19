@protocol MTLTexture, MTLComputePipelineState;

@interface PGDualPlaneComputeTextureResource : PGTextureResource {
    struct *_planes[2];
    id<MTLTexture> _planeTextures[2];
    unsigned long long _planeTextureFormats[2];
    id<MTLComputePipelineState> _blitUpState;
    id<MTLComputePipelineState> _blitDownState;
}

- (void)dealloc;
- (void)discard;
- (void)ensurePhysical;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 pagingInfo:(const struct { unsigned int x0; unsigned long long x1; } *)a2 dimension:(const struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *)a3 dimensionLength:(unsigned long long)a4 texture:(id)a5;
- (BOOL)needsComputePaging;
- (void)pageTextureInEncoder:(id)a0 isDownload:(BOOL)a1;
- (void)prepareInComputeEncoder:(id)a0;
- (void)prepareInEncoder:(id)a0;
- (BOOL)setupFormatSpecific;
- (void)synchronizeInComputeEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
