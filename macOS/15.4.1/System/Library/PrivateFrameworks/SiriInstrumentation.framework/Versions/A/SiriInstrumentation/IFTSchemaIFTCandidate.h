@class IFTSchemaIFTTypedValue, IFTSchemaIFTCandidatePromptStatus, NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTCandidate : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) IFTSchemaIFTCandidatePromptStatus *promptStatus;
@property (nonatomic) BOOL hasPromptStatus;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePromptStatus;
- (void)deleteSource;
- (void)deleteStatementId;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
