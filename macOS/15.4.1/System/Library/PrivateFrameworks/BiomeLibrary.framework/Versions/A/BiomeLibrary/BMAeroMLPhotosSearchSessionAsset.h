@class NSString;

@interface BMAeroMLPhotosSearchSessionAsset : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) unsigned int rankingIndex;
@property (nonatomic) BOOL hasRankingIndex;
@property (readonly, nonatomic) double cosDistance;
@property (nonatomic) BOOL hasCosDistance;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithAssetUUID:(id)a0 rankingIndex:(id)a1 cosDistance:(id)a2;
- (id)initByReadFrom:(id)a0;

@end
