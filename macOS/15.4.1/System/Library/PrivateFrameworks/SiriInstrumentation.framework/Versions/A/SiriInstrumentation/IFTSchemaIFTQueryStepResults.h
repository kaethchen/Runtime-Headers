@class IFTSchemaIFTQueryResults, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTQueryStepResults : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originProgramStatementId;
@property (nonatomic) BOOL hasOriginProgramStatementId;
@property (retain, nonatomic) IFTSchemaIFTQueryResults *queryResults;
@property (nonatomic) BOOL hasQueryResults;
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
- (void)deleteExists;
- (void)deleteOriginProgramStatementId;
- (void)deleteQueryResults;
- (id)suppressMessageUnderConditions;

@end
