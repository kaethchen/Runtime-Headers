@class NSData;

@interface PLUSSchemaPLUSMediaSuggestionOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char mediaSuggestionFeedback : 1; } _has;
}

@property (nonatomic) int mediaSuggestionFeedback;
@property (nonatomic) BOOL hasMediaSuggestionFeedback;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMediaSuggestionFeedback;
- (id)suppressMessageUnderConditions;

@end
