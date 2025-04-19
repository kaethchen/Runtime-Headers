@class NSData;

@interface CDASchemaCDADeviceStateActivityStarted : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char trigger : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasTrigger;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTrigger;
- (void)deleteState;
- (id)suppressMessageUnderConditions;

@end
