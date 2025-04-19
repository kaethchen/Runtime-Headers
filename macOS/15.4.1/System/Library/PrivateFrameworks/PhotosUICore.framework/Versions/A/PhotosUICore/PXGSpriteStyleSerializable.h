@interface PXGSpriteStyleSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { float alpha; void /* unknown type, empty encoding */ contentsRect; void /* unknown type, empty encoding */ clippingRect; struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius; float zSortOffset; float rotation; float scale; float contentsRotation; unsigned short resizableCapInsetsIndex; unsigned char contentsGravity; void /* unknown type, empty encoding */ anchorPoint; float translationZ; struct { void /* unknown type, empty encoding */ columns[4]; } focusTransform; } spriteStyle;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
