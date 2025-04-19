@class NSData;

@interface SISchemaUUID : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithNSUUID:(id)a0;
- (void)deleteValue;
- (id)initWithBytesAsData:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)toNSUUID;
- (id)toSafeNSUUID;
- (void)willProduceDictionaryRepresentation:(id)a0;

@end
