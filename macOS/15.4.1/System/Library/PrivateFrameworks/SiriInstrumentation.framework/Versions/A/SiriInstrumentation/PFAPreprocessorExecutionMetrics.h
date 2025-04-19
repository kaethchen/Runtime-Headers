@class NSData;

@interface PFAPreprocessorExecutionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char executionTimeInNs : 1; unsigned char stagedMessageCount : 1; unsigned char processedMessageCount : 1; } _has;
}

@property (nonatomic) unsigned long long executionTimeInNs;
@property (nonatomic) BOOL hasExecutionTimeInNs;
@property (nonatomic) unsigned int stagedMessageCount;
@property (nonatomic) BOOL hasStagedMessageCount;
@property (nonatomic) unsigned int processedMessageCount;
@property (nonatomic) BOOL hasProcessedMessageCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExecutionTimeInNs;
- (void)deleteProcessedMessageCount;
- (void)deleteStagedMessageCount;
- (id)suppressMessageUnderConditions;

@end
