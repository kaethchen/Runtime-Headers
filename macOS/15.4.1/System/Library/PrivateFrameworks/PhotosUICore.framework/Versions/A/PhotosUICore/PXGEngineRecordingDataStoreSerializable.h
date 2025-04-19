@class NSDictionary;

@interface PXGEngineRecordingDataStoreSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (retain, nonatomic) NSDictionary *spriteStyles;
@property (retain, nonatomic) NSDictionary *spriteInfos;
@property (retain, nonatomic) NSDictionary *spriteGeometries;
@property (retain, nonatomic) NSDictionary *spriteEntities;
@property (retain, nonatomic) NSDictionary *spriteTextureInfos;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
