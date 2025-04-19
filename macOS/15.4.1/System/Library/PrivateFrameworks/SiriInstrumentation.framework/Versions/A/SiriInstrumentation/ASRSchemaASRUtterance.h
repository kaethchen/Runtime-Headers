@class NSArray, NSData;

@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addInterpretationIndices:(unsigned int)a0;
- (void)clearInterpretationIndices;
- (void)deleteInterpretationIndices;
- (unsigned int)interpretationIndicesAtIndex:(unsigned long long)a0;
- (unsigned long long)interpretationIndicesCount;
- (id)suppressMessageUnderConditions;

@end
