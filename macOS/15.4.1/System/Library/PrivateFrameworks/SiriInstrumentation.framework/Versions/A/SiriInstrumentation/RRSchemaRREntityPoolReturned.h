@class NSArray, NSData;

@interface RRSchemaRREntityPoolReturned : SISchemaInstrumentationMessage {
    struct { unsigned char entityCount : 1; } _has;
}

@property (copy, nonatomic) NSArray *candidateEntities;
@property (nonatomic) unsigned int entityCount;
@property (nonatomic) BOOL hasEntityCount;
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
- (void)addCandidateEntities:(id)a0;
- (id)candidateEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateEntitiesCount;
- (void)clearCandidateEntities;
- (void)deleteCandidateEntities;
- (void)deleteEntityCount;
- (id)suppressMessageUnderConditions;

@end
