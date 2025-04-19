@class NSData;

@interface ORCHSchemaORCHAssistantDaemonLaunchMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char assistantDaemonSpawnTimestampInNs : 1; unsigned char assistantDaemonLoadedTimestampInNs : 1; unsigned char isFirstRequest : 1; } _has;
}

@property (nonatomic) long long assistantDaemonSpawnTimestampInNs;
@property (nonatomic) BOOL hasAssistantDaemonSpawnTimestampInNs;
@property (nonatomic) long long assistantDaemonLoadedTimestampInNs;
@property (nonatomic) BOOL hasAssistantDaemonLoadedTimestampInNs;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) BOOL hasIsFirstRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssistantDaemonLoadedTimestampInNs;
- (void)deleteAssistantDaemonSpawnTimestampInNs;
- (void)deleteIsFirstRequest;
- (id)suppressMessageUnderConditions;

@end
