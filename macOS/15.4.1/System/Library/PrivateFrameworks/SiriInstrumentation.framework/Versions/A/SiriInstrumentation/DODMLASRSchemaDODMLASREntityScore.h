@class NSData;

@interface DODMLASRSchemaDODMLASREntityScore : SISchemaInstrumentationMessage {
    struct { unsigned char entityTaggerCategory : 1; unsigned char numTotalEntities : 1; unsigned char numEntityErrors : 1; } _has;
}

@property (nonatomic) int entityTaggerCategory;
@property (nonatomic) BOOL hasEntityTaggerCategory;
@property (nonatomic) unsigned int numTotalEntities;
@property (nonatomic) BOOL hasNumTotalEntities;
@property (nonatomic) unsigned int numEntityErrors;
@property (nonatomic) BOOL hasNumEntityErrors;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityTaggerCategory;
- (void)deleteNumEntityErrors;
- (void)deleteNumTotalEntities;
- (id)suppressMessageUnderConditions;

@end
