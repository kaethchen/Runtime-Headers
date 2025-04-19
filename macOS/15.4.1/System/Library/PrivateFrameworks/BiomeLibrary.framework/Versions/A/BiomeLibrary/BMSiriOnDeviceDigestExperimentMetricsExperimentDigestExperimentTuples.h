@class NSArray, NSString;

@interface BMSiriOnDeviceDigestExperimentMetricsExperimentDigestExperimentTuples : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *launchTimeInMs;
@property (readonly, nonatomic) NSArray *endpointDelayInMs;
@property (readonly, nonatomic) NSArray *siriResponseTimeInMs;
@property (readonly, nonatomic) NSArray *timeToUufrInMs;
@property (readonly, nonatomic) NSArray *timeToFirstWordInMs;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_endpointDelayInMsJSONArray;
- (id)_launchTimeInMsJSONArray;
- (id)_siriResponseTimeInMsJSONArray;
- (id)_timeToFirstWordInMsJSONArray;
- (id)_timeToUufrInMsJSONArray;
- (id)initWithLaunchTimeInMs:(id)a0 endpointDelayInMs:(id)a1 siriResponseTimeInMs:(id)a2 timeToUufrInMs:(id)a3 timeToFirstWordInMs:(id)a4;

@end
