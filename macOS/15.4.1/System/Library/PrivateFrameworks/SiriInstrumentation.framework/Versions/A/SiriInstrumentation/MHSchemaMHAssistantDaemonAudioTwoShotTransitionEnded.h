@class NSData;

@interface MHSchemaMHAssistantDaemonAudioTwoShotTransitionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char suppresedAlert : 1; unsigned char timedOut : 1; } _has;
}

@property (nonatomic) BOOL suppresedAlert;
@property (nonatomic) BOOL hasSuppresedAlert;
@property (nonatomic) BOOL timedOut;
@property (nonatomic) BOOL hasTimedOut;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSuppresedAlert;
- (void)deleteTimedOut;
- (id)suppressMessageUnderConditions;

@end
