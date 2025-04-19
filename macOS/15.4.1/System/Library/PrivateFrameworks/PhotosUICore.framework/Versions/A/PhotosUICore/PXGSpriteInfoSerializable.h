@interface PXGSpriteInfoSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { unsigned char presentationType; unsigned char mediaKind; void /* unknown type, empty encoding */ mediaTargetSize; float mediaAspectRatio; long long tag; unsigned short mediaVersion; unsigned char flags; } spriteInfo;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
