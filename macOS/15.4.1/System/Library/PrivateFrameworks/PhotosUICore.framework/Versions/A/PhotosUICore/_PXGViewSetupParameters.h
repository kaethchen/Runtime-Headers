@protocol PXGSpriteTexture;

@interface _PXGViewSetupParameters : NSObject

@property (nonatomic) BOOL needsParenting;
@property (nonatomic) BOOL separateLayers;
@property (retain, nonatomic) id<PXGSpriteTexture> texture;
@property (nonatomic) struct { void /* unknown type, empty encoding */ sampleOrigin; void /* unknown type, empty encoding */ sampleSize; void /* unknown type, empty encoding */ textureSize; void /* unknown type, empty encoding */ orientationTransform; float alpha; } textureInfo;
@property (nonatomic) unsigned int spriteIndex;

- (void).cxx_destruct;

@end
