@class PETSchemaPETDistribution, NSData, PETSchemaPETAggregationKey;

@interface PETSchemaPETAggregatedMessage : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (retain, nonatomic) PETSchemaPETAggregationKey *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (retain, nonatomic) PETSchemaPETDistribution *distribution;
@property (nonatomic) BOOL hasDistribution;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteKey;
- (id)initWithJSON:(id)a0;
- (void)deleteCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDistribution;
- (id)suppressMessageUnderConditions;

@end
