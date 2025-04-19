@class NSArray, NSData;

@interface ASRSchemaASRContextualEntityRetrievalStarted : SISchemaInstrumentationMessage {
    struct { unsigned char maxEnrolled : 1; unsigned char retrievalTimeout : 1; unsigned char maxEntityChars : 1; unsigned char maxEntityWords : 1; unsigned char requestTask : 1; } _has;
}

@property (nonatomic) int maxEnrolled;
@property (nonatomic) BOOL hasMaxEnrolled;
@property (nonatomic) double retrievalTimeout;
@property (nonatomic) BOOL hasRetrievalTimeout;
@property (nonatomic) int maxEntityChars;
@property (nonatomic) BOOL hasMaxEntityChars;
@property (nonatomic) int maxEntityWords;
@property (nonatomic) BOOL hasMaxEntityWords;
@property (copy, nonatomic) NSArray *enabledTasks;
@property (nonatomic) int requestTask;
@property (nonatomic) BOOL hasRequestTask;
@property (copy, nonatomic) NSArray *rejectedContextTypes;
@property (copy, nonatomic) NSArray *rejectedEntityTypes;
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
- (void)addEnabledTasks:(int)a0;
- (void)addRejectedContextTypes:(int)a0;
- (void)addRejectedEntityTypes:(id)a0;
- (void)clearEnabledTasks;
- (void)clearRejectedContextTypes;
- (void)clearRejectedEntityTypes;
- (void)deleteEnabledTasks;
- (void)deleteMaxEnrolled;
- (void)deleteMaxEntityChars;
- (void)deleteMaxEntityWords;
- (void)deleteRejectedContextTypes;
- (void)deleteRejectedEntityTypes;
- (void)deleteRequestTask;
- (void)deleteRetrievalTimeout;
- (int)enabledTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledTasksCount;
- (int)rejectedContextTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedContextTypesCount;
- (id)rejectedEntityTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedEntityTypesCount;
- (id)suppressMessageUnderConditions;

@end
