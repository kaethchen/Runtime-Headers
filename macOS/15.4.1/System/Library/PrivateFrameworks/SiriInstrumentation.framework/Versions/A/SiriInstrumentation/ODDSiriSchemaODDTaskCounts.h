@class NSData;

@interface ODDSiriSchemaODDTaskCounts : SISchemaInstrumentationMessage {
    struct { unsigned char siriTasksStarted : 1; unsigned char siriTasksCompleted : 1; unsigned char flowTasksStarted : 1; unsigned char flowTasksCompleted : 1; } _has;
}

@property (nonatomic) unsigned int siriTasksStarted;
@property (nonatomic) BOOL hasSiriTasksStarted;
@property (nonatomic) unsigned int siriTasksCompleted;
@property (nonatomic) BOOL hasSiriTasksCompleted;
@property (nonatomic) unsigned int flowTasksStarted;
@property (nonatomic) BOOL hasFlowTasksStarted;
@property (nonatomic) unsigned int flowTasksCompleted;
@property (nonatomic) BOOL hasFlowTasksCompleted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFlowTasksCompleted;
- (void)deleteFlowTasksStarted;
- (void)deleteSiriTasksCompleted;
- (void)deleteSiriTasksStarted;
- (id)suppressMessageUnderConditions;

@end
