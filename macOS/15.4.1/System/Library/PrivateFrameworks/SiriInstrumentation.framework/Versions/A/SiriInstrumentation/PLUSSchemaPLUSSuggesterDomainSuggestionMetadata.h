@class NSData, PLUSSchemaPLUSSuggesterMediaSuggestionMetadata;

@interface PLUSSchemaPLUSSuggesterDomainSuggestionMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggesterMediaSuggestionMetadata *mediaMetadata;
@property (nonatomic) BOOL hasMediaMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainsuggestionmetadata;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaMetadata;
- (id)suppressMessageUnderConditions;

@end
