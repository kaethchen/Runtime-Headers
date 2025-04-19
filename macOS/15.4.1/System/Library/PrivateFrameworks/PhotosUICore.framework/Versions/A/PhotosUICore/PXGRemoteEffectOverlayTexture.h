@class NSIndexSet, NSString;
@protocol PXGMetalSpriteTexture, PXGSpriteTexture;

@interface PXGRemoteEffectOverlayTexture : NSObject <PXGSpriteTexture> {
    id<PXGMetalSpriteTexture> _metalSpriteTexture;
}

@property (readonly, nonatomic) id<PXGSpriteTexture> texture;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) unsigned char presentationType;
@property (readonly, nonatomic) struct CGImage { } *imageRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)containsSpriteIndex:(unsigned int)a0;
- (void)enumerateSpriteIndexes:(id /* block */)a0;
- (void)getSpriteIndexes:(unsigned int *)a0 maxSpriteCount:(unsigned int)a1;
- (void)getTextureInfos:(struct { float x0; } *)a0 forSpriteIndexes:(const unsigned int *)a1 geometries:(const struct { struct { double x0; double x1; double x2; } x0; } *)a2 spriteStyles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a3 spriteInfos:(const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a4 screenScale:(double)a5 count:(unsigned int)a6;
- (BOOL)hasPendingTextureRequestID:(int)a0 deliveryOrder:(unsigned int)a1;
- (id)initWithMetalSpriteTexture:(id)a0;

@end
