@interface PXGEngineRecordingUpdateEndEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) BOOL updated;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
