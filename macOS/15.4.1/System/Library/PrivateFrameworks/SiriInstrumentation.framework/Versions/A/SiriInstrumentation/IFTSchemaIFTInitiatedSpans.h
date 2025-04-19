@class NSData;

@interface IFTSchemaIFTInitiatedSpans : SISchemaInstrumentationMessage {
    struct { unsigned char participant : 1; unsigned char spanId : 1; } _has;
}

@property (nonatomic) int participant;
@property (nonatomic) BOOL hasParticipant;
@property (nonatomic) unsigned long long spanId;
@property (nonatomic) BOOL hasSpanId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteParticipant;
- (void)deleteSpanId;
- (id)suppressMessageUnderConditions;

@end
