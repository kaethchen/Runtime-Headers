@class NSString;

@interface BMMessagesSearchEventDimensionContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long sessionStartTimestampInSeconds;
@property (nonatomic) BOOL hasSessionStartTimestampInSeconds;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *systemLocale;
@property (readonly, nonatomic) NSString *currentCountry;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *osType;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) int buildType;
@property (readonly, nonatomic) BOOL isLiveOn;
@property (nonatomic) BOOL hasIsLiveOn;
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
- (id)initWithSessionStartTimestampInSeconds:(id)a0 sessionId:(id)a1 systemLocale:(id)a2 currentCountry:(id)a3 build:(id)a4 osType:(id)a5 productType:(id)a6 buildType:(int)a7 isLiveOn:(id)a8;

@end
