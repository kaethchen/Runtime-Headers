@class BMCustomAttributes, NSString, NSUUID, NSArray, NSData;

@interface BMEvaluationCommonMetadata : BMEventBase <BMStoreData> {
    NSData *_raw_evaluationUuid;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *featureDomain;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSUUID *evaluationUuid;
@property (readonly, nonatomic) BOOL isHighPriority;
@property (nonatomic) BOOL hasIsHighPriority;
@property (readonly, nonatomic) NSString *diagnostics;
@property (readonly, nonatomic) NSArray *prefilledQuestions;
@property (readonly, nonatomic) BMCustomAttributes *auxiliaryAttributes;
@property (readonly, nonatomic) NSString *systemBuild;
@property (readonly, nonatomic) NSString *modelVersion;
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
- (id)_prefilledQuestionsJSONArray;
- (id)initWithFeatureDomain:(id)a0 bundleId:(id)a1 evaluationUuid:(id)a2 isHighPriority:(id)a3 diagnostics:(id)a4 prefilledQuestions:(id)a5 auxiliaryAttributes:(id)a6 systemBuild:(id)a7 modelVersion:(id)a8;

@end
