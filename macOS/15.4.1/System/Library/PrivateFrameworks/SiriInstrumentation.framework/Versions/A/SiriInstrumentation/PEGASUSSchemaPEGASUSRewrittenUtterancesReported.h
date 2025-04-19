@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReported : SISchemaInstrumentationMessage {
    struct { unsigned char wasRewrittenUtteranceUsed : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL wasRewrittenUtteranceUsed;
@property (nonatomic) BOOL hasWasRewrittenUtteranceUsed;
@property (copy, nonatomic) NSArray *rewrittenUtterancesMetadatas;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRewrittenUtterancesMetadata:(id)a0;
- (void)deleteWasRewrittenUtteranceUsed;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearRewrittenUtterancesMetadata;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterancesMetadata;
- (id)rewrittenUtterancesMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)rewrittenUtterancesMetadataCount;
- (id)suppressMessageUnderConditions;

@end
