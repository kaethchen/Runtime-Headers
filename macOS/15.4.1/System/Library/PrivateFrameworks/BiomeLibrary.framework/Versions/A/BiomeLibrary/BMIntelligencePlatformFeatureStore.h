@class NSString, BMIntelligencePlatformFeatureStoreFeatureVector;

@interface BMIntelligencePlatformFeatureStore : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *labelName;
@property (readonly, nonatomic) NSString *labelValue;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) BMIntelligencePlatformFeatureStoreFeatureVector *featureVector;
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
- (id)initWithLabelName:(id)a0 labelValue:(id)a1 taskName:(id)a2 category:(int)a3 featureVector:(id)a4;

@end
