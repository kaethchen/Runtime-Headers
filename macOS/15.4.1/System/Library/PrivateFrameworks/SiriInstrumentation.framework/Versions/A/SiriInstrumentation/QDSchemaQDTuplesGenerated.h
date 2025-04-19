@class NSData;

@interface QDSchemaQDTuplesGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfTuples : 1; unsigned char maximumTupleWidth : 1; unsigned char wasToolTupleLimitReached : 1; } _has;
}

@property (nonatomic) unsigned int numberOfTuples;
@property (nonatomic) BOOL hasNumberOfTuples;
@property (nonatomic) unsigned int maximumTupleWidth;
@property (nonatomic) BOOL hasMaximumTupleWidth;
@property (nonatomic) BOOL wasToolTupleLimitReached;
@property (nonatomic) BOOL hasWasToolTupleLimitReached;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMaximumTupleWidth;
- (void)deleteNumberOfTuples;
- (void)deleteWasToolTupleLimitReached;
- (id)suppressMessageUnderConditions;

@end
