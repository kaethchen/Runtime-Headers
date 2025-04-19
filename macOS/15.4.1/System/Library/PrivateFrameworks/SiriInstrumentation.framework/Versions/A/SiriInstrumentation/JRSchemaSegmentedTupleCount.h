@class NSArray, NSData;

@interface JRSchemaSegmentedTupleCount : SISchemaInstrumentationMessage {
    struct { unsigned char count : 1; } _has;
}

@property (copy, nonatomic) NSArray *tupleCandidates;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addTupleCandidates:(id)a0;
- (void)clearTupleCandidates;
- (void)deleteTupleCandidates;
- (id)suppressMessageUnderConditions;
- (id)tupleCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)tupleCandidatesCount;

@end
