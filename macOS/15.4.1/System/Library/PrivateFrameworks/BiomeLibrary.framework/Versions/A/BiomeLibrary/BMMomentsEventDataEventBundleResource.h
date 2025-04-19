@class NSString;

@interface BMMomentsEventDataEventBundleResource : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int photoAssetMediaType;
@property (readonly, nonatomic) int photoFaceCount;
@property (nonatomic) BOOL hasPhotoFaceCount;
@property (readonly, nonatomic) double photoCurationScore;
@property (nonatomic) BOOL hasPhotoCurationScore;
@property (readonly, nonatomic) double photoOverallAestheticScore;
@property (nonatomic) BOOL hasPhotoOverallAestheticScore;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithType:(int)a0 photoAssetMediaType:(int)a1 photoFaceCount:(id)a2 photoCurationScore:(id)a3 photoOverallAestheticScore:(id)a4;

@end
