@class NSArray, NSData;

@interface ODDSiriSchemaODDDictationExperimentTuples : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *launchTimeInMs;
@property (copy, nonatomic) NSArray *endpointDelayInMs;
@property (copy, nonatomic) NSArray *siriResponseTimeInMs;
@property (copy, nonatomic) NSArray *timeToUufrInMs;
@property (copy, nonatomic) NSArray *timeToFirstWordInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addEndpointDelayInMs:(float)a0;
- (void)addLaunchTimeInMs:(float)a0;
- (void)addSiriResponseTimeInMs:(float)a0;
- (void)addTimeToFirstWordInMs:(float)a0;
- (void)addTimeToUufrInMs:(float)a0;
- (void)clearEndpointDelayInMs;
- (void)clearLaunchTimeInMs;
- (void)clearSiriResponseTimeInMs;
- (void)clearTimeToFirstWordInMs;
- (void)clearTimeToUufrInMs;
- (void)deleteEndpointDelayInMs;
- (void)deleteLaunchTimeInMs;
- (void)deleteSiriResponseTimeInMs;
- (void)deleteTimeToFirstWordInMs;
- (void)deleteTimeToUufrInMs;
- (float)endpointDelayInMsAtIndex:(unsigned long long)a0;
- (unsigned long long)endpointDelayInMsCount;
- (float)launchTimeInMsAtIndex:(unsigned long long)a0;
- (unsigned long long)launchTimeInMsCount;
- (float)siriResponseTimeInMsAtIndex:(unsigned long long)a0;
- (unsigned long long)siriResponseTimeInMsCount;
- (id)suppressMessageUnderConditions;
- (float)timeToFirstWordInMsAtIndex:(unsigned long long)a0;
- (unsigned long long)timeToFirstWordInMsCount;
- (float)timeToUufrInMsAtIndex:(unsigned long long)a0;
- (unsigned long long)timeToUufrInMsCount;

@end
