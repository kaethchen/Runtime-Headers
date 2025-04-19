@class NSString, NSArray, BMSiriOnDeviceDigestExperimentMetricsEventMetadata;

@interface BMSiriOnDeviceDigestExperimentMetrics : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriOnDeviceDigestExperimentMetricsEventMetadata *eventMetadata;
@property (readonly, nonatomic) unsigned int digestType;
@property (nonatomic) BOOL hasDigestType;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentIdUUID;
@property (readonly, nonatomic) long long deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) unsigned int programCode;
@property (nonatomic) BOOL hasProgramCode;
@property (readonly, nonatomic) NSArray *digests;
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
- (id)_digestsJSONArray;
- (id)initWithEventMetadata:(id)a0 digestType:(id)a1 experimentId:(id)a2 treatmentIdUUID:(id)a3 deploymentId:(id)a4 deviceType:(id)a5 programCode:(id)a6 digests:(id)a7;

@end
