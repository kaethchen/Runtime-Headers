@class NSData;

@interface SISchemaKeyboardDismissed : SISchemaInstrumentationMessage {
    struct { unsigned char keyboardUsed : 1; unsigned char lengthInWords : 1; unsigned char lengthInChars : 1; unsigned char numCharsAdded : 1; unsigned char numCharsDeleted : 1; unsigned char editDistance : 1; unsigned char emojiUsed : 1; unsigned char keyboardLocale : 1; } _has;
}

@property (nonatomic) BOOL keyboardUsed;
@property (nonatomic) BOOL hasKeyboardUsed;
@property (nonatomic) int lengthInWords;
@property (nonatomic) BOOL hasLengthInWords;
@property (nonatomic) int lengthInChars;
@property (nonatomic) BOOL hasLengthInChars;
@property (nonatomic) int numCharsAdded;
@property (nonatomic) BOOL hasNumCharsAdded;
@property (nonatomic) int numCharsDeleted;
@property (nonatomic) BOOL hasNumCharsDeleted;
@property (nonatomic) int editDistance;
@property (nonatomic) BOOL hasEditDistance;
@property (nonatomic) BOOL emojiUsed;
@property (nonatomic) BOOL hasEmojiUsed;
@property (nonatomic) int keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEmojiUsed;
- (void)deleteEditDistance;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardUsed;
- (void)deleteLengthInChars;
- (void)deleteLengthInWords;
- (void)deleteNumCharsAdded;
- (void)deleteNumCharsDeleted;
- (id)suppressMessageUnderConditions;

@end
