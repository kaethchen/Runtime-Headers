@class NSData;

@interface ORCHSchemaORCHIntelligenceFlowRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char isSiriXFallback : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL isSiriXFallback;
@property (nonatomic) BOOL hasIsSiriXFallback;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteIsSiriXFallback;
- (id)suppressMessageUnderConditions;

@end
