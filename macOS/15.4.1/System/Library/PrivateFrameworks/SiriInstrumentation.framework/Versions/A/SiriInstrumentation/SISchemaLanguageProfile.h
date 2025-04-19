@class NSData;

@interface SISchemaLanguageProfile : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *l;
@property (nonatomic) BOOL hasL;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteL;
- (id)suppressMessageUnderConditions;

@end
