@class NSArray, NSData, SISchemaUUID;

@interface IFTSchemaIFTClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char sender : 1; unsigned char postingSpanId : 1; unsigned char clientApplicationId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) BOOL hasIfRequestId;
@property (retain, nonatomic) SISchemaUUID *ifEventId;
@property (nonatomic) BOOL hasIfEventId;
@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) BOOL hasIfSessionId;
@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) BOOL hasClientTraceId;
@property (nonatomic) int sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) BOOL hasPostingSpanId;
@property (copy, nonatomic) NSArray *initiatedSpans;
@property (nonatomic) int clientApplicationId;
@property (nonatomic) BOOL hasClientApplicationId;
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
- (void)deleteIfEventId;
- (void)addInitiatedSpans:(id)a0;
- (void)clearInitiatedSpans;
- (void)deleteClientApplicationId;
- (void)deleteClientTraceId;
- (void)deleteIfRequestId;
- (void)deleteIfSessionId;
- (void)deleteInitiatedSpans;
- (void)deletePostingSpanId;
- (void)deleteSender;
- (id)initiatedSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)initiatedSpansCount;
- (id)suppressMessageUnderConditions;

@end
