@class PLUSSchemaPLUSSuggestionAccuracySignal, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestionAccuracySignalReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionAccuracySignal *accuracySignal;
@property (nonatomic) BOOL hasAccuracySignal;
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
- (void)deleteAccuracySignal;
- (void)deleteOriginalPlusId;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
