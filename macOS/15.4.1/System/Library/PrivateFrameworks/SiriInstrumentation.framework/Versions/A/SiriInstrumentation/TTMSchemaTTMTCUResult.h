@class NSData, SISchemaUUID;

@interface TTMSchemaTTMTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char decision : 1; unsigned char decisionSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (nonatomic) int decision;
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) int decisionSource;
@property (nonatomic) BOOL hasDecisionSource;
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
- (void)deleteDecision;
- (void)deleteDecisionSource;
- (void)deleteTcuId;
- (id)suppressMessageUnderConditions;

@end
