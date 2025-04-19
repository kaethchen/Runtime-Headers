@class NSArray, NSData, SISchemaUUID;

@interface PFAProcessedClockStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char messageCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (copy, nonatomic) NSArray *publishedEventStatistics;
@property (copy, nonatomic) NSArray *redactedEventStatistics;
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
- (id)redactedEventStatisticsAtIndex:(unsigned long long)a0;
- (void)addPublishedEventStatistics:(id)a0;
- (void)addRedactedEventStatistics:(id)a0;
- (void)clearPublishedEventStatistics;
- (void)clearRedactedEventStatistics;
- (void)deleteClockIdentifier;
- (void)deleteMessageCount;
- (void)deletePublishedEventStatistics;
- (void)deleteRedactedEventStatistics;
- (id)publishedEventStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)publishedEventStatisticsCount;
- (unsigned long long)redactedEventStatisticsCount;
- (id)suppressMessageUnderConditions;

@end
