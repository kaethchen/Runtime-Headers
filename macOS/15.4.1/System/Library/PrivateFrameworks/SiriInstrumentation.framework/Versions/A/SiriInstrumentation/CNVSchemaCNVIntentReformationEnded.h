@class NSData, USOSchemaUSOGraph;

@interface CNVSchemaCNVIntentReformationEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraph *reformedIntent;
@property (nonatomic) BOOL hasReformedIntent;
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
- (void)deleteReformedIntent;
- (id)suppressMessageUnderConditions;

@end
