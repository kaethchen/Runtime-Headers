@class PXGImageTexture, NSIndexSet, NSString, NSMutableIndexSet, PXGColorProgram;
@protocol MTLTexture, PXGMetalSpriteTexture;

@interface PXGEffectWrappingTexture : PXGImageTexture <PXGMetalSpriteTexture> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableIndexSet *_lock_activeRenders;
}

@property (retain, nonatomic) id<PXGMetalSpriteTexture> parent;
@property (readonly, nonatomic) PXGImageTexture *imageTextureParent;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) id<MTLTexture> chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) float alpha;
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

+ (id)createTexture;
+ (id)_dequeueTexture;
+ (id)_reusableTextures;
+ (void)_reuseTexture:(id)a0;

@end
