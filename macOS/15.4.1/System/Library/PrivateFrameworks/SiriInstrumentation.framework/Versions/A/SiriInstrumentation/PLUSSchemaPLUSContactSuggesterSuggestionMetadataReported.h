@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isDuplicateSuggestion : 1; unsigned char isSuggestionPresentInModelOutput : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) BOOL isDuplicateSuggestion;
@property (nonatomic) BOOL hasIsDuplicateSuggestion;
@property (nonatomic) BOOL isSuggestionPresentInModelOutput;
@property (nonatomic) BOOL hasIsSuggestionPresentInModelOutput;
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
- (void)deleteIsDuplicateSuggestion;
- (void)deleteIsSuggestionPresentInModelOutput;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
