@class NSArray, NSData;

@interface CLPInstSchemaServiceNodeComparatorResult : SISchemaInstrumentationMessage {
    struct { unsigned char comparatorName : 1; unsigned char isValidOriginalItem : 1; unsigned char isValidReplayedItem : 1; unsigned char isMatched : 1; } _has;
}

@property (nonatomic) int comparatorName;
@property (nonatomic) BOOL hasComparatorName;
@property (nonatomic) BOOL isValidOriginalItem;
@property (nonatomic) BOOL hasIsValidOriginalItem;
@property (nonatomic) BOOL isValidReplayedItem;
@property (nonatomic) BOOL hasIsValidReplayedItem;
@property (nonatomic) BOOL isMatched;
@property (nonatomic) BOOL hasIsMatched;
@property (copy, nonatomic) NSArray *mismatchedFields;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsMatched;
- (void)addMismatchedFields:(unsigned long long)a0;
- (void)clearMismatchedFields;
- (void)deleteComparatorName;
- (void)deleteIsValidOriginalItem;
- (void)deleteIsValidReplayedItem;
- (void)deleteMismatchedFields;
- (unsigned long long)mismatchedFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)mismatchedFieldsCount;
- (id)suppressMessageUnderConditions;

@end
