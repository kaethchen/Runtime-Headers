@class NSDictionary;

@interface PXGEngineRecordingChangeDetailsSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (retain, nonatomic) NSDictionary *changeDetails;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
