@interface PXGEngineRecordingUpdateStartEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) double targetTimestamp;
@property (nonatomic) unsigned long long needsUpdate;
@property (nonatomic) unsigned long long pendingUpdateEntities;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
