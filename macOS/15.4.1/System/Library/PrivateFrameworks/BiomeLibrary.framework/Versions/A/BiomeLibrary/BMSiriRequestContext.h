@class NSString, NSArray, NSData, BMSiriRequestContextUser, BMSiriRequestContextContentRestriction, BMSiriRequestContextMeCard;

@interface BMSiriRequestContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *inputOrigin;
@property (readonly, nonatomic) NSString *responseMode;
@property (readonly, nonatomic) BOOL isEyesFree;
@property (nonatomic) BOOL hasIsEyesFree;
@property (readonly, nonatomic) BOOL isMultiUser;
@property (nonatomic) BOOL hasIsMultiUser;
@property (readonly, nonatomic) BOOL isVoiceTriggerEnabled;
@property (nonatomic) BOOL hasIsVoiceTriggerEnabled;
@property (readonly, nonatomic) BOOL isTextToSpeechEnabled;
@property (nonatomic) BOOL hasIsTextToSpeechEnabled;
@property (readonly, nonatomic) BOOL isTriggerlessFollowup;
@property (nonatomic) BOOL hasIsTriggerlessFollowup;
@property (readonly, nonatomic) NSArray *deviceRestrictions;
@property (readonly, nonatomic) NSArray *bargeInModes;
@property (readonly, nonatomic) BMSiriRequestContextUser *identifiedUser;
@property (readonly, nonatomic) NSData *encodedLocation;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *siriLocale;
@property (readonly, nonatomic) BMSiriRequestContextContentRestriction *contentRestrictions;
@property (readonly, nonatomic) double uiScale;
@property (nonatomic) BOOL hasUiScale;
@property (readonly, nonatomic) NSString *temperatureUnit;
@property (readonly, nonatomic) BOOL allowUserGeneratedContent;
@property (nonatomic) BOOL hasAllowUserGeneratedContent;
@property (readonly, nonatomic) BOOL censorSpeech;
@property (nonatomic) BOOL hasCensorSpeech;
@property (readonly, nonatomic) BMSiriRequestContextMeCard *meCard;
@property (readonly, nonatomic) int deviceIdiom;
@property (readonly, nonatomic) BOOL didPSCFire;
@property (nonatomic) BOOL hasDidPSCFire;
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
- (id)_bargeInModesJSONArray;
- (id)_deviceRestrictionsJSONArray;
- (id)initWithSessionID:(id)a0 requestID:(id)a1 inputOrigin:(id)a2 responseMode:(id)a3 isEyesFree:(id)a4 isMultiUser:(id)a5 isVoiceTriggerEnabled:(id)a6 isTextToSpeechEnabled:(id)a7 isTriggerlessFollowup:(id)a8 deviceRestrictions:(id)a9 bargeInModes:(id)a10 identifiedUser:(id)a11 encodedLocation:(id)a12 countryCode:(id)a13 siriLocale:(id)a14 contentRestrictions:(id)a15 uiScale:(id)a16 temperatureUnit:(id)a17 allowUserGeneratedContent:(id)a18 censorSpeech:(id)a19 meCard:(id)a20;
- (id)initWithSessionID:(id)a0 requestID:(id)a1 inputOrigin:(id)a2 responseMode:(id)a3 isEyesFree:(id)a4 isMultiUser:(id)a5 isVoiceTriggerEnabled:(id)a6 isTextToSpeechEnabled:(id)a7 isTriggerlessFollowup:(id)a8 deviceRestrictions:(id)a9 bargeInModes:(id)a10 identifiedUser:(id)a11 encodedLocation:(id)a12 countryCode:(id)a13 siriLocale:(id)a14 contentRestrictions:(id)a15 uiScale:(id)a16 temperatureUnit:(id)a17 allowUserGeneratedContent:(id)a18 censorSpeech:(id)a19 meCard:(id)a20 deviceIdiom:(int)a21 didPSCFire:(id)a22;

@end
