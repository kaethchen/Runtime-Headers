@class NSString, BMMLSEDurableFeatureStoreFeatureValue;

@interface BMMLSEDurableFeatureStore : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int featureEntryType;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) int featureName;
@property (readonly, nonatomic) BMMLSEDurableFeatureStoreFeatureValue *featureValue;
@property (readonly, nonatomic) unsigned int featureVersion;
@property (nonatomic) BOOL hasFeatureVersion;
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
- (id)initByReadFrom:(id)a0;
- (id)initWithItemIdentifier:(id)a0 featureName:(int)a1 featureValue:(id)a2 featureVersion:(id)a3;
- (id)initWithFeatureEntryType:(int)a0 itemIdentifier:(id)a1 featureName:(int)a2 featureValue:(id)a3 featureVersion:(id)a4;

@end
