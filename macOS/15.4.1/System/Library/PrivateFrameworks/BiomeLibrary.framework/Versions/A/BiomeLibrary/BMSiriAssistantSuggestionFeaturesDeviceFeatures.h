@class NSString;

@interface BMSiriAssistantSuggestionFeaturesDeviceFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL connectedToAirpods;
@property (nonatomic) BOOL hasConnectedToAirpods;
@property (readonly, nonatomic) NSString *noiseCancellingMode;
@property (readonly, nonatomic) NSString *connectedToDevice;
@property (readonly, nonatomic) BOOL isInCarPlay;
@property (nonatomic) BOOL hasIsInCarPlay;
@property (readonly, nonatomic) BOOL hasWatch;
@property (nonatomic) BOOL hasHasWatch;
@property (readonly, nonatomic) BOOL hasIPad;
@property (nonatomic) BOOL hasHasIPad;
@property (readonly, nonatomic) BOOL hasHomePod;
@property (nonatomic) BOOL hasHasHomePod;
@property (readonly, nonatomic) BOOL hasAppleTV;
@property (nonatomic) BOOL hasHasAppleTV;
@property (readonly, nonatomic) BOOL hasIPhone;
@property (nonatomic) BOOL hasHasIPhone;
@property (readonly, nonatomic) int totalNumDevices;
@property (nonatomic) BOOL hasTotalNumDevices;
@property (readonly, nonatomic) NSString *currentDeviceType;
@property (readonly, nonatomic) NSString *currentBuildVersion;
@property (readonly, nonatomic) NSString *distanceFromLatestBuild;
@property (readonly, nonatomic) BOOL isALargeFormatPhone;
@property (nonatomic) BOOL hasIsALargeFormatPhone;
@property (readonly, nonatomic) BOOL hasAPasscode;
@property (nonatomic) BOOL hasHasAPasscode;
@property (readonly, nonatomic) BOOL supportsSMSMEssaging;
@property (nonatomic) BOOL hasSupportsSMSMEssaging;
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
- (id)initWithConnectedToAirpods:(id)a0 noiseCancellingMode:(id)a1 connectedToDevice:(id)a2 isInCarPlay:(id)a3 hasWatch:(id)a4 hasIPad:(id)a5 hasHomePod:(id)a6 hasAppleTV:(id)a7 hasIPhone:(id)a8 totalNumDevices:(id)a9 currentDeviceType:(id)a10 currentBuildVersion:(id)a11 distanceFromLatestBuild:(id)a12 isALargeFormatPhone:(id)a13 hasAPasscode:(id)a14 supportsSMSMEssaging:(id)a15;

@end
