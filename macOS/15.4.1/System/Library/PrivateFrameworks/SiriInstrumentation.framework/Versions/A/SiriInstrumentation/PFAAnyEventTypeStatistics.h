@class NSArray, NSData;

@interface PFAAnyEventTypeStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; unsigned char messageCount : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (copy, nonatomic) NSArray *eventStatistics;
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
- (void)addEventStatistics:(id)a0;
- (void)clearEventStatistics;
- (void)deleteAnyEventType;
- (void)deleteEventStatistics;
- (void)deleteMessageCount;
- (id)eventStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventStatisticsCount;
- (id)suppressMessageUnderConditions;

@end
