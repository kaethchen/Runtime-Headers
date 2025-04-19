@class BMSiriOnDeviceDigestSegmentsCohortsTimeInterval, NSString;

@interface BMSiriOnDeviceDigestSegmentsCohortsDeviceCohorts : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriOnDeviceDigestSegmentsCohortsTimeInterval *timeInterval;
@property (readonly, nonatomic) int cohortType;
@property (nonatomic) BOOL hasCohortType;
@property (readonly, nonatomic) int cohortDataAvailabilityState;
@property (nonatomic) BOOL hasCohortDataAvailabilityState;
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
- (id)initWithTimeInterval:(id)a0 cohortType:(id)a1 cohortDataAvailabilityState:(id)a2;

@end
