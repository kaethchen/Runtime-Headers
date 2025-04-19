@class PLUSSchemaPLUSMediaSuggestionOutcome, NSData;

@interface PLUSSchemaPLUSSuggestionDomainOutcome : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionOutcome *mediaOutcome;
@property (nonatomic) BOOL hasMediaOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainsuggestionoutcome;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaOutcome;
- (id)suppressMessageUnderConditions;

@end
