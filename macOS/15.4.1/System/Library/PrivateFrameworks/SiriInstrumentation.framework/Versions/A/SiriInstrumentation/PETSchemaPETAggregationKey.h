@class PETSchemaPETRawMessage, NSData;

@interface PETSchemaPETAggregationKey : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char datestamp : 1; unsigned char bucket : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int datestamp;
@property (nonatomic) BOOL hasDatestamp;
@property (nonatomic) double bucket;
@property (nonatomic) BOOL hasBucket;
@property (retain, nonatomic) PETSchemaPETRawMessage *raw_message;
@property (nonatomic) BOOL hasRaw_message;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteType;
- (void)deleteDatestamp;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBucket;
- (void)deleteRaw_message;
- (id)suppressMessageUnderConditions;

@end
