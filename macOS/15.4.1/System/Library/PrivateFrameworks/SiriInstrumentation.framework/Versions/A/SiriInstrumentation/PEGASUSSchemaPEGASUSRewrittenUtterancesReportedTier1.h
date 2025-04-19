@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *rewrittenUtterances;
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
- (void)addRewrittenUtterances:(id)a0;
- (void)clearRewrittenUtterances;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterances;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)rewrittenUtterancesCount;
- (id)suppressMessageUnderConditions;

@end
