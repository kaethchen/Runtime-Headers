@class NSString;

@interface PGSinglePlaneSharedTextureBackingResource : PGTextureResource <PGSharedTextureBackingResource> {
    struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *_dimension;
    unsigned long long _blitOption;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)newSharedTextureHandle;
- (id)initWithTask:(id)a0 pagingInfo:(const struct { unsigned int x0; unsigned long long x1; } *)a1 dimension:(const struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *)a2 dimensionLength:(unsigned long long)a3 texture:(id)a4;
- (BOOL)needsComputePaging;
- (void)pageTextureInEncoder:(id)a0 isDownload:(BOOL)a1;
- (void)prepareInEncoder:(id)a0;
- (void)prepareSharedTextureBacking:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
