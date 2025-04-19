@class NSString;

@interface BMSiriUserEngagementStatisticsUserEngagementStatsMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *deviceFamily;
@property (readonly, nonatomic) NSString *siriInputLocale;
@property (readonly, nonatomic) NSString *systemBuild;
@property (readonly, nonatomic) NSString *audioInputRoute;
@property (readonly, nonatomic) NSString *invocationSource;
@property (readonly, nonatomic) int waitTime;
@property (nonatomic) BOOL hasWaitTime;
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
- (id)initWithDeviceFamily:(id)a0 siriInputLocale:(id)a1 systemBuild:(id)a2 audioInputRoute:(id)a3 invocationSource:(id)a4 waitTime:(id)a5;

@end
