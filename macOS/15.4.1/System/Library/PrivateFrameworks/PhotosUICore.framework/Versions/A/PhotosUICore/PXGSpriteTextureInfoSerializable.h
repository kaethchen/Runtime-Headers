@interface PXGSpriteTextureInfoSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { void /* unknown type, empty encoding */ sampleOrigin; void /* unknown type, empty encoding */ sampleSize; void /* unknown type, empty encoding */ textureSize; void /* unknown type, empty encoding */ orientationTransform; float alpha; } spriteTextureInfo;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
