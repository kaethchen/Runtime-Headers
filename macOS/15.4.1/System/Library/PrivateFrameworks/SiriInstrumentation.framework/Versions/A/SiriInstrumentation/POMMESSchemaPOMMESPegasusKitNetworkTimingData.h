@class NSData;

@interface POMMESSchemaPOMMESPegasusKitNetworkTimingData : SISchemaInstrumentationMessage {
    struct { unsigned char requestStartOffsetInMS : 1; unsigned char requestEndOffsetInMS : 1; unsigned char responseStartOffsetInMS : 1; unsigned char responseEndOffsetInMS : 1; } _has;
}

@property (nonatomic) unsigned int requestStartOffsetInMS;
@property (nonatomic) BOOL hasRequestStartOffsetInMS;
@property (nonatomic) unsigned int requestEndOffsetInMS;
@property (nonatomic) BOOL hasRequestEndOffsetInMS;
@property (nonatomic) unsigned int responseStartOffsetInMS;
@property (nonatomic) BOOL hasResponseStartOffsetInMS;
@property (nonatomic) unsigned int responseEndOffsetInMS;
@property (nonatomic) BOOL hasResponseEndOffsetInMS;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestEndOffsetInMS;
- (void)deleteRequestStartOffsetInMS;
- (void)deleteResponseEndOffsetInMS;
- (void)deleteResponseStartOffsetInMS;
- (id)suppressMessageUnderConditions;

@end
