@interface PXGSpriteEntitySerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct { unsigned int id; } spriteEntity;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
