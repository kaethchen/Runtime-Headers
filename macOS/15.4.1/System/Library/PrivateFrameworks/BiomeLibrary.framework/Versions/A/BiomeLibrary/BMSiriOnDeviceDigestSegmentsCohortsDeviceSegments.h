@class NSString;

@interface BMSiriOnDeviceDigestSegmentsCohortsDeviceSegments : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int segmentType;
@property (nonatomic) BOOL hasSegmentType;
@property (readonly, nonatomic) int segmentDataAvailabilityState;
@property (nonatomic) BOOL hasSegmentDataAvailabilityState;
@property (readonly, nonatomic) int daysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoValidAssistantTurnsPerWeek;
@property (readonly, nonatomic) int daysWithTwoAssistantSpeechRequestsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoAssistantSpeechRequestsPerWeek;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithSegmentType:(id)a0 segmentDataAvailabilityState:(id)a1 daysWithTwoValidAssistantTurnsPerWeek:(id)a2 daysWithTwoAssistantSpeechRequestsPerWeek:(id)a3;

@end
