@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSRewrittenUtteranceTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *rewrittenUtterance;
@property (nonatomic) BOOL hasRewrittenUtterance;
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
- (void)deleteRewrittenUtterance;
- (id)suppressMessageUnderConditions;

@end
