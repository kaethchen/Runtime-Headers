@class BMMomentsEngagementSuggestionEvent, BMMomentsEngagementClientActivityEvent, BMMomentsEngagementAppEntryEvent, NSString;

@interface BMMomentsEngagement : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMomentsEngagementSuggestionEvent *suggestionEvent;
@property (readonly, nonatomic) BMMomentsEngagementAppEntryEvent *entryEvent;
@property (readonly, nonatomic) BMMomentsEngagementClientActivityEvent *clientActivityEvent;
@property (readonly, nonatomic) int onboardingFlowCompletionState;
@property (readonly, nonatomic) BOOL isJournalAppInstalled;
@property (nonatomic) BOOL hasIsJournalAppInstalled;
@property (readonly, nonatomic) BOOL isJournalAppLocked;
@property (nonatomic) BOOL hasIsJournalAppLocked;
@property (readonly, nonatomic) BOOL isJournalSuggestionSkipped;
@property (nonatomic) BOOL hasIsJournalSuggestionSkipped;
@property (readonly, nonatomic) BOOL isActivitySettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsActivitySettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isCommunicationSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsCommunicationSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isSignificantLocationSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsSignificantLocationSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isMediaSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsMediaSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isNearbyPeopleSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsNearbyPeopleSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isPhotoSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsPhotoSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isStateOfMindSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsStateOfMindSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isReflectionSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsReflectionSettingsSwitchEnabled;
@property (readonly, nonatomic) BOOL isBroadSystemLocationSettingsSwitchEnabled;
@property (nonatomic) BOOL hasIsBroadSystemLocationSettingsSwitchEnabled;
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
- (id)initWithSuggestionEvent:(id)a0 entryEvent:(id)a1 clientActivityEvent:(id)a2;
- (id)initWithSuggestionEvent:(id)a0 entryEvent:(id)a1 clientActivityEvent:(id)a2 onboardingFlowCompletionState:(int)a3 isJournalAppInstalled:(id)a4 isJournalAppLocked:(id)a5 isJournalSuggestionSkipped:(id)a6 isActivitySettingsSwitchEnabled:(id)a7 isCommunicationSettingsSwitchEnabled:(id)a8 isSignificantLocationSettingsSwitchEnabled:(id)a9 isMediaSettingsSwitchEnabled:(id)a10 isNearbyPeopleSettingsSwitchEnabled:(id)a11 isPhotoSettingsSwitchEnabled:(id)a12 isStateOfMindSettingsSwitchEnabled:(id)a13 isReflectionSettingsSwitchEnabled:(id)a14 isBroadSystemLocationSettingsSwitchEnabled:(id)a15;

@end
