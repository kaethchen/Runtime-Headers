@class NSString, NSArray;

@interface BMSiriCompanionContextAppMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) NSArray *mediaCategories;
@property (readonly, nonatomic) int subscriptionStatus;
@property (nonatomic) BOOL hasSubscriptionStatus;
@property (readonly, nonatomic) NSString *localizedAppName;
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
- (id)_mediaCategoriesJSONArray;
- (id)initWithAppBundleId:(id)a0 mediaCategories:(id)a1 subscriptionStatus:(id)a2 localizedAppName:(id)a3;

@end
