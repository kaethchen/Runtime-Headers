@class NSArray, NSData;

@interface SISchemaDictationContentEdited : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *autoPunctuationEdits;
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
- (void)addAutoPunctuationEdits:(id)a0;
- (id)autoPunctuationEditsAtIndex:(unsigned long long)a0;
- (unsigned long long)autoPunctuationEditsCount;
- (void)clearAutoPunctuationEdits;
- (void)deleteAutoPunctuationEdits;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
