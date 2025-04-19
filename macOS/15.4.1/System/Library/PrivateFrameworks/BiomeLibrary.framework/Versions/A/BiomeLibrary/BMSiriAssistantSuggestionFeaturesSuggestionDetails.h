@class NSString;

@interface BMSiriAssistantSuggestionFeaturesSuggestionDetails : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *suggestionId;
@property (readonly, nonatomic) NSString *targetOwner;
@property (readonly, nonatomic) NSString *sourceOwner;
@property (readonly, nonatomic) NSString *classificationCentroid;
@property (readonly, nonatomic) NSString *channel;
@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSString *deliveryVehicle;
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
- (id)initWithSuggestionId:(id)a0 targetOwner:(id)a1 sourceOwner:(id)a2 classificationCentroid:(id)a3 channel:(id)a4 confidence:(id)a5;
- (id)initWithSuggestionId:(id)a0 targetOwner:(id)a1 sourceOwner:(id)a2 classificationCentroid:(id)a3 channel:(id)a4 confidence:(id)a5 deliveryVehicle:(id)a6;

@end
