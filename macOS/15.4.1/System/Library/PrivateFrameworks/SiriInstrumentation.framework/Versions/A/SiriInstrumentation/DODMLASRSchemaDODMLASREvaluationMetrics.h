@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASREvaluationMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char bestWeight : 1; unsigned char totalDurationInMs : 1; } _has;
}

@property (nonatomic) float bestWeight;
@property (nonatomic) BOOL hasBestWeight;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (copy, nonatomic) NSArray *trains;
@property (copy, nonatomic) NSArray *devs;
@property (copy, nonatomic) NSArray *tests;
@property (copy, nonatomic) NSArray *externals;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTest:(id)a0;
- (void)addDev:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addExternal:(id)a0;
- (void)addTrain:(id)a0;
- (void)clearDev;
- (void)clearExternal;
- (void)clearTest;
- (void)clearTrain;
- (void)deleteBestWeight;
- (void)deleteDev;
- (void)deleteExternal;
- (void)deleteTest;
- (void)deleteTotalDurationInMs;
- (void)deleteTrain;
- (id)devAtIndex:(unsigned long long)a0;
- (unsigned long long)devCount;
- (id)externalAtIndex:(unsigned long long)a0;
- (unsigned long long)externalCount;
- (id)suppressMessageUnderConditions;
- (id)testAtIndex:(unsigned long long)a0;
- (unsigned long long)testCount;
- (id)trainAtIndex:(unsigned long long)a0;
- (unsigned long long)trainCount;

@end
