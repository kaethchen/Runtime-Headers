@class NSData;

@interface FLOWSchemaFLOWKeyboardUsageMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char numCharsAdded : 1; unsigned char numCharsDeleted : 1; unsigned char levenshteinEditDistance : 1; unsigned char isEmojiUsed : 1; } _has;
}

@property (nonatomic) unsigned int numCharsAdded;
@property (nonatomic) BOOL hasNumCharsAdded;
@property (nonatomic) unsigned int numCharsDeleted;
@property (nonatomic) BOOL hasNumCharsDeleted;
@property (nonatomic) unsigned int levenshteinEditDistance;
@property (nonatomic) BOOL hasLevenshteinEditDistance;
@property (nonatomic) BOOL isEmojiUsed;
@property (nonatomic) BOOL hasIsEmojiUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEmojiUsed;
- (void)deleteLevenshteinEditDistance;
- (void)deleteNumCharsAdded;
- (void)deleteNumCharsDeleted;
- (id)suppressMessageUnderConditions;

@end
