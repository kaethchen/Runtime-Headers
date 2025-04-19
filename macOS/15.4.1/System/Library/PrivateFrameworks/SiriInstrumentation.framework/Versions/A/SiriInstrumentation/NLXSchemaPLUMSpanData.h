@class NSData;

@interface NLXSchemaPLUMSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteScore;
- (id)suppressMessageUnderConditions;

@end
