@class NSString, SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse, SIRINLUResponse, SIRINLUINTERNALPreprocessingWrapper, CDMEmbeddingGraphResponseCommand, CDMSsuInferenceGraphResponseCommand, CDMPlannerGraphResponseCommand, CDMNluResponse;

@interface CDMGenericSendCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;
@property (readonly, nonatomic) CDMNluResponse *cdmNluResponse;
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;
@property (readonly, nonatomic) CDMEmbeddingGraphResponseCommand *embeddingResponse;
@property (readonly, nonatomic) SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse *subwordEmbeddingResponse;
@property (readonly, nonatomic) CDMSsuInferenceGraphResponseCommand *ssuInferenceResponse;
@property (readonly, nonatomic) CDMPlannerGraphResponseCommand *plannerResponse;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmbeddingGraphResponse:(id)a0;
- (id)initWithCDMNluResponse:(id)a0 clientId:(id)a1;
- (id)initWithError:(id)a0 clientId:(id)a1;
- (id)initWithPlannerGraphResponse:(id)a0;
- (id)initWithPreprocessingWrapper:(id)a0 clientId:(id)a1;
- (id)initWithSsuInferenceGraphResponse:(id)a0;
- (id)initWithSubwordEmbeddingResponse:(id)a0 clientId:(id)a1;

@end
