@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestionCandidateTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char alternateQuerySuggestionType : 1; } _has;
}

@property (nonatomic) int alternateQuerySuggestionType;
@property (nonatomic) BOOL hasAlternateQuerySuggestionType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteText;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlternateQuerySuggestionType;
- (id)suppressMessageUnderConditions;

@end
