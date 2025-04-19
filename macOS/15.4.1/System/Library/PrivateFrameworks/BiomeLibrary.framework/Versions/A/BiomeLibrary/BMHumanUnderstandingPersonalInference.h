@class NSArray, NSString, BMHumanUnderstandingPersonalInferenceFact;

@interface BMHumanUnderstandingPersonalInference : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BMHumanUnderstandingPersonalInferenceFact *fact;
@property (readonly, nonatomic) NSArray *qualifiers;
@property (readonly, nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
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
- (id)_qualifiersJSONArray;
- (id)initWithConfidence:(id)a0 fact:(id)a1 qualifiers:(id)a2 modelVersion:(id)a3;

@end
