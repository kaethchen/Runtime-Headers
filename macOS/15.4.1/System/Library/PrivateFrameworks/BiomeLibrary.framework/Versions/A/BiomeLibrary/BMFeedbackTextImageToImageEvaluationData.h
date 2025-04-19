@class NSString, BMTextImageContent, BMEvaluationCommonMetadata, BMImageContent;

@interface BMFeedbackTextImageToImageEvaluationData : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMEvaluationCommonMetadata *commonMetadata;
@property (readonly, nonatomic) BMTextImageContent *originalContent;
@property (readonly, nonatomic) BMImageContent *generatedContent;
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
- (id)initWithCommonMetadata:(id)a0 originalContent:(id)a1 generatedContent:(id)a2;

@end
