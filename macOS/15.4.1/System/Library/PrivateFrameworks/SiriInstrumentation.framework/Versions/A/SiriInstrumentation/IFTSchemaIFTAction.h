@class NSString, NSArray, NSData, SISchemaUUID, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTAction : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char isConfirmed : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL isConfirmed;
@property (nonatomic) BOOL hasIsConfirmed;
@property (copy, nonatomic) NSArray *actionParameterValues;
@property (retain, nonatomic) SISchemaUUID *planEventId;
@property (nonatomic) BOOL hasPlanEventId;
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
- (id)actionParameterValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)actionParameterValuesCount;
- (void)addActionParameterValues:(id)a0;
- (void)clearActionParameterValues;
- (void)deleteActionParameterValues;
- (void)deleteBundleId;
- (void)deleteExists;
- (void)deleteIsConfirmed;
- (void)deletePlanEventId;
- (void)deleteStatementId;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
