@class NSString, BMSiriAssistantSuggestionFeaturesEnvironmentFeaturesHomeGraphStatus;

@interface BMSiriAssistantSuggestionFeaturesEnvironmentFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *focusMode;
@property (readonly, nonatomic) NSString *deviceMotion;
@property (readonly, nonatomic) int location;
@property (readonly, nonatomic) NSString *isPlayingMedia;
@property (readonly, nonatomic) BOOL isAirplaneMode;
@property (nonatomic) BOOL hasIsAirplaneMode;
@property (readonly, nonatomic) BOOL isTimerRunning;
@property (nonatomic) BOOL hasIsTimerRunning;
@property (readonly, nonatomic) BOOL isConnectedToWifi;
@property (nonatomic) BOOL hasIsConnectedToWifi;
@property (readonly, nonatomic) BOOL hasInternetConnection;
@property (nonatomic) BOOL hasHasInternetConnection;
@property (readonly, nonatomic) BOOL isScreenSharing;
@property (nonatomic) BOOL hasIsScreenSharing;
@property (readonly, nonatomic) BOOL audioIsMuted;
@property (nonatomic) BOOL hasAudioIsMuted;
@property (readonly, nonatomic) int screenBrightness;
@property (nonatomic) BOOL hasScreenBrightness;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesEnvironmentFeaturesHomeGraphStatus *homeGraph;
@property (readonly, nonatomic) BOOL batteryIsCharging;
@property (nonatomic) BOOL hasBatteryIsCharging;
@property (readonly, nonatomic) BOOL isLowBatteryMode;
@property (nonatomic) BOOL hasIsLowBatteryMode;
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
- (id)initWithFocusMode:(id)a0 deviceMotion:(id)a1 location:(int)a2 isPlayingMedia:(id)a3 isAirplaneMode:(id)a4 isTimerRunning:(id)a5 isConnectedToWifi:(id)a6 hasInternetConnection:(id)a7 isScreenSharing:(id)a8 audioIsMuted:(id)a9 screenBrightness:(id)a10 homeGraph:(id)a11 batteryIsCharging:(id)a12 isLowBatteryMode:(id)a13;

@end
