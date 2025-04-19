@class NSData;

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char alternateQuerySuggestionCount : 1; } _has;
}

@property (nonatomic) int alternateQuerySuggestionCount;
@property (nonatomic) BOOL hasAlternateQuerySuggestionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlternateQuerySuggestionCount;
- (id)suppressMessageUnderConditions;

@end
