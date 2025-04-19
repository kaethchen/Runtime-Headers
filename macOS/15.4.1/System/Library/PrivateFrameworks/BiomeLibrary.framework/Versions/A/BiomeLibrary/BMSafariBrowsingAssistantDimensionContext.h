@class NSData, NSString, NSArray;

@interface BMSafariBrowsingAssistantDimensionContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSData *webpageViewIdentifier;
@property (readonly, nonatomic) NSString *systemLocale;
@property (readonly, nonatomic) NSString *currentCountry;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *osType;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) int buildType;
@property (readonly, nonatomic) BOOL duEnabled;
@property (nonatomic) BOOL hasDuEnabled;
@property (readonly, nonatomic) int searchBarPosition;
@property (readonly, nonatomic) NSString *prefixStoreVersion;
@property (readonly, nonatomic) NSArray *trialExperiment;
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
- (id)initWithWebpageViewIdentifier:(id)a0 systemLocale:(id)a1 currentCountry:(id)a2 build:(id)a3 osType:(id)a4 productType:(id)a5 buildType:(int)a6 duEnabled:(id)a7 searchBarPosition:(int)a8 prefixStoreVersion:(id)a9 trialExperiment:(id)a10;
- (id)initByReadFrom:(id)a0;
- (id)_trialExperimentJSONArray;

@end
