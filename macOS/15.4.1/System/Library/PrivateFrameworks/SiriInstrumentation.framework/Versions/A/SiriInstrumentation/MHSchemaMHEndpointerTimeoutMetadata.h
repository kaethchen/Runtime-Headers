@class NSData;

@interface MHSchemaMHEndpointerTimeoutMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isTimeout : 1; unsigned char timeoutThresholdInNs : 1; } _has;
}

@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL hasIsTimeout;
@property (nonatomic) unsigned long long timeoutThresholdInNs;
@property (nonatomic) BOOL hasTimeoutThresholdInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsTimeout;
- (void)deleteTimeoutThresholdInNs;
- (id)suppressMessageUnderConditions;

@end
