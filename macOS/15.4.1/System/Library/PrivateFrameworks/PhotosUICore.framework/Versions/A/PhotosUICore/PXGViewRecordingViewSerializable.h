@class NSString;

@interface PXGViewRecordingViewSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) unsigned char presentationType;
@property (retain, nonatomic) NSString *payloadViewClass;
@property (nonatomic) BOOL needsParenting;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
