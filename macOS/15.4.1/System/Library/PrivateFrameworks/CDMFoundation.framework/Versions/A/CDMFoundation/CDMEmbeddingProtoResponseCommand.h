@class CDMEmbeddingConfigs, SIRINLUINTERNALEMBEDDINGEmbeddingResponse;

@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response;
@property (readonly, nonatomic) CDMEmbeddingConfigs *embeddingConfigs;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithResponse:(id)a0 embeddingConfigs:(id)a1;

@end
