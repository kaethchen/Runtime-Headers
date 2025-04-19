@class MHSchemaMHTrailingPacketLatencyInfo, MHSchemaMHStatisticDistributionInfo, NSData;

@interface MHSchemaMHEndpointLatencyInfoReported : SISchemaInstrumentationMessage {
    struct { unsigned char firstPacketLatencyInNs : 1; } _has;
}

@property (nonatomic) unsigned long long firstPacketLatencyInNs;
@property (nonatomic) BOOL hasFirstPacketLatencyInNs;
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *trailingPacketLatencyInfo;
@property (nonatomic) BOOL hasTrailingPacketLatencyInfo;
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *coreSpeechTrailingPacketLatencyInfo;
@property (nonatomic) BOOL hasCoreSpeechTrailingPacketLatencyInfo;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *trailingPacketLatency;
@property (nonatomic) BOOL hasTrailingPacketLatency;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *coreSpeechTrailingPacketLatency;
@property (nonatomic) BOOL hasCoreSpeechTrailingPacketLatency;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTrailingPacketLatencyInfo;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCoreSpeechTrailingPacketLatency;
- (void)deleteCoreSpeechTrailingPacketLatencyInfo;
- (void)deleteFirstPacketLatencyInNs;
- (void)deleteTrailingPacketLatency;
- (id)suppressMessageUnderConditions;

@end
