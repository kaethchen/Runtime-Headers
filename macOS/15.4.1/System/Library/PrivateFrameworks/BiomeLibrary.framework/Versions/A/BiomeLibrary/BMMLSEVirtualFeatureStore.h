@class NSString, NSArray;

@interface BMMLSEVirtualFeatureStore : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) unsigned int featureVersion;
@property (nonatomic) BOOL hasFeatureVersion;
@property (readonly, nonatomic) NSArray *featureVector;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *shareSessionIdentifier;
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
- (id)initWithItemIdentifier:(id)a0 featureVersion:(id)a1 featureVector:(id)a2 deviceIdentifier:(id)a3 shareSessionIdentifier:(id)a4;
- (id)initByReadFrom:(id)a0;
- (id)_featureVectorJSONArray;

@end
