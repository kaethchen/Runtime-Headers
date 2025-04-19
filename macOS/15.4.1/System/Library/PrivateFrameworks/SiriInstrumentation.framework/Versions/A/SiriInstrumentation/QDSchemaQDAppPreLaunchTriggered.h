@class NSData;

@interface QDSchemaQDAppPreLaunchTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char isPredictionCorrect : 1; unsigned char isPreLaunchExecuted : 1; } _has;
}

@property (nonatomic) BOOL isPredictionCorrect;
@property (nonatomic) BOOL hasIsPredictionCorrect;
@property (nonatomic) BOOL isPreLaunchExecuted;
@property (nonatomic) BOOL hasIsPreLaunchExecuted;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPreLaunchExecuted;
- (void)deleteIsPredictionCorrect;
- (id)suppressMessageUnderConditions;

@end
