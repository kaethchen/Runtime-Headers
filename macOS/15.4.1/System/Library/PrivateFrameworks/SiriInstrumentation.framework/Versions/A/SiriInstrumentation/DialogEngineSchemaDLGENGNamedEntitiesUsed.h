@class NSArray, NSData;

@interface DialogEngineSchemaDLGENGNamedEntitiesUsed : SISchemaInstrumentationMessage {
    struct { unsigned char catId : 1; } _has;
}

@property (nonatomic) int catId;
@property (nonatomic) BOOL hasCatId;
@property (copy, nonatomic) NSArray *namedEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addNamedEntities:(id)a0;
- (void)clearNamedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedEntitiesCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCatId;
- (void)deleteNamedEntities;
- (id)suppressMessageUnderConditions;

@end
