@class NSArray, NSData;

@interface JRSchemaJRCandidateTimeIntervalMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *logOfIntervalUntilStartTimeInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addLogOfIntervalUntilStartTimeInSeconds:(float)a0;
- (void)clearLogOfIntervalUntilStartTimeInSeconds;
- (void)deleteLogOfIntervalUntilStartTimeInSeconds;
- (float)logOfIntervalUntilStartTimeInSecondsAtIndex:(unsigned long long)a0;
- (unsigned long long)logOfIntervalUntilStartTimeInSecondsCount;
- (id)suppressMessageUnderConditions;

@end
