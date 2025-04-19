@interface PXGSpriteGeometrySerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { struct { double x; double y; double z; } center; void /* unknown type, empty encoding */ size; } spriteGeometry;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
