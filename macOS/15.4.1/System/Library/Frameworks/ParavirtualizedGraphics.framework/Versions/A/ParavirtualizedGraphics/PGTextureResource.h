@protocol MTLTexture, MTLBuffer, PGTask_Resource;

@interface PGTextureResource : PGResource {
    id<PGTask_Resource> _task;
    unsigned long long _textureAllocationLength;
    unsigned int _textureVirtualPage;
    BOOL _isPVRTC;
    id<MTLTexture> _texture;
    id<MTLBuffer> _transferBuffer;
}

@property (readonly) BOOL isDualPlane;

+ (id)createSharedTextureResourceWithTask:(id)a0 objectType:(unsigned int)a1 pagingInfo:(const struct { unsigned int x0; unsigned long long x1; } *)a2 dimension:(const struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *)a3 dimensionLength:(unsigned long long)a4 texture:(id)a5;
+ (id)createTextureResourceWithTask:(id)a0 objectType:(unsigned int)a1 pagingInfo:(const struct { unsigned int x0; unsigned long long x1; } *)a2 dimension:(const struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *)a3 dimensionLength:(unsigned long long)a4 texture:(id)a5;
+ (BOOL)validateTextureDimension:(const struct **)a0 dest:(struct **)a1 mipLevels:(unsigned int)a2 generateMipmaps:(BOOL)a3 textureAllocationLength:(unsigned long long)a4 texture:(id)a5 planeCount:(unsigned int)a6 isPVRTC:(BOOL *)a7 features:(const struct APVFeatures { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; } *)a8;

- (void)dealloc;
- (void)discard;
- (void)devolatilize;
- (void)ensurePhysical;
- (id)getResource;
- (id)getTexture;
- (id)initWithTexture:(id)a0 texture:(id)a1;

@end
