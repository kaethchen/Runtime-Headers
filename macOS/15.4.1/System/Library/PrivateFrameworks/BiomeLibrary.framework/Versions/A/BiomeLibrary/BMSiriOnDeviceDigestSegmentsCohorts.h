@class NSArray, NSString, BMSiriOnDeviceDigestSegmentsCohortsEventMetadata;

@interface BMSiriOnDeviceDigestSegmentsCohorts : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriOnDeviceDigestSegmentsCohortsEventMetadata *eventMetadata;
@property (readonly, nonatomic) NSArray *deviceSegmentsReported;
@property (readonly, nonatomic) NSArray *deviceCohortsReported;
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
- (id)_deviceCohortsReportedJSONArray;
- (id)_deviceSegmentsReportedJSONArray;
- (id)initWithEventMetadata:(id)a0 deviceSegmentsReported:(id)a1 deviceCohortsReported:(id)a2;

@end
