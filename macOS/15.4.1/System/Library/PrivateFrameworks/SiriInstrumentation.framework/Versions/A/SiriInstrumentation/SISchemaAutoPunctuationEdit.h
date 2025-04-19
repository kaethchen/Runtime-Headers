@class NSString, NSData;

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *recognizedPunctuation;
@property (nonatomic) BOOL hasRecognizedPunctuation;
@property (copy, nonatomic) NSString *correctedPunctuation;
@property (nonatomic) BOOL hasCorrectedPunctuation;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCorrectedPunctuation;
- (void)deleteRecognizedPunctuation;
- (id)suppressMessageUnderConditions;

@end
