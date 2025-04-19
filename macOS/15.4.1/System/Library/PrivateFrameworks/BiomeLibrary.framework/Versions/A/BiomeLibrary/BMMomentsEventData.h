@class BMMomentsEventDataEventBundle, NSString, BMMomentsEventDataEvent, NSDate;

@interface BMMomentsEventData : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
    BOOL _hasRaw_endDate;
    double _raw_endDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMomentsEventDataEvent *event;
@property (readonly, nonatomic) BMMomentsEventDataEventBundle *bundle;
@property (readonly, nonatomic) BOOL isBundle;
@property (nonatomic) BOOL hasIsBundle;
@property (readonly, nonatomic) BOOL IHAState;
@property (nonatomic) BOOL hasIHAState;
@property (readonly, nonatomic) int age;
@property (nonatomic) BOOL hasAge;
@property (readonly, nonatomic) int ageRange;
@property (readonly, nonatomic) int biologicalSex;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *categoryOfEvent;
@property (readonly, nonatomic) NSString *bundleInterface;
@property (readonly, nonatomic) NSString *bundleEvergreenType;
@property (readonly, nonatomic) NSString *sugSeetEngType;
@property (readonly, nonatomic) NSString *appEntryEngType;
@property (readonly, nonatomic) NSString *megaSignalTypeUsed;
@property (readonly, nonatomic) int viewVisibleSuggestionsCount;
@property (nonatomic) BOOL hasViewVisibleSuggestionsCount;
@property (readonly, nonatomic) int viewTotalSuggestionsCount;
@property (nonatomic) BOOL hasViewTotalSuggestionsCount;
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
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6;
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6 startDate:(id)a7 endDate:(id)a8 categoryOfEvent:(id)a9 bundleInterface:(id)a10 bundleEvergreenType:(id)a11 sugSeetEngType:(id)a12 appEntryEngType:(id)a13 megaSignalTypeUsed:(id)a14 viewVisibleSuggestionsCount:(id)a15 viewTotalSuggestionsCount:(id)a16;
- (id)initWithEvent:(id)a0 bundle:(id)a1 isBundle:(id)a2 IHAState:(id)a3 age:(id)a4 ageRange:(int)a5 biologicalSex:(int)a6 startDate:(id)a7 endDate:(id)a8 categoryOfEvent:(id)a9 bundleInterface:(id)a10 bundleEvergreenType:(id)a11 sugSeetEngType:(id)a12 appEntryEngType:(id)a13 megaSignalTypeUsed:(id)a14 viewVisibleSuggestionsCount:(id)a15 viewTotalSuggestionsCount:(id)a16 onboardingFlowCompletionState:(int)a17 isJournalAppInstalled:(id)a18 isJournalAppLocked:(id)a19 isJournalSuggestionSkipped:(id)a20 isActivitySettingsSwitchEnabled:(id)a21 isCommunicationSettingsSwitchEnabled:(id)a22 isSignificantLocationSettingsSwitchEnabled:(id)a23 isMediaSettingsSwitchEnabled:(id)a24 isNearbyPeopleSettingsSwitchEnabled:(id)a25 isPhotoSettingsSwitchEnabled:(id)a26 isStateOfMindSettingsSwitchEnabled:(id)a27 isReflectionSettingsSwitchEnabled:(id)a28 isBroadSystemLocationSettingsSwitchEnabled:(id)a29;

@end
