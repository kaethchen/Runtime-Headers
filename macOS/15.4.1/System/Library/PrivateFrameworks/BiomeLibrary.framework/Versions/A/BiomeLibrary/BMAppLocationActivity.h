@class NSString, NSArray, NSURL, NSDate;

@interface BMAppLocationActivity : BMEventBase <BMStoreData> {
    BOOL _hasRaw_expirationDate;
    double _raw_expirationDate;
    NSString *_raw_itemRelatedContentURL;
    BOOL _hasRaw_calendarUserActivityDate;
    double _raw_calendarUserActivityDate;
    BOOL _hasRaw_calendarUserActivityEndDate;
    double _raw_calendarUserActivityEndDate;
    NSString *_raw_URL;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) BOOL beginningOfActivity;
@property (nonatomic) BOOL hasBeginningOfActivity;
@property (readonly, nonatomic) NSString *contentDescription;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isEligibleForPrediction;
@property (nonatomic) BOOL hasIsEligibleForPrediction;
@property (readonly, nonatomic) BOOL isPubliclyIndexable;
@property (nonatomic) BOOL hasIsPubliclyIndexable;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSURL *itemRelatedContentURL;
@property (readonly, nonatomic) NSString *itemRelatedUniqueIdentifier;
@property (readonly, nonatomic) int shortcutAvailability;
@property (nonatomic) BOOL hasShortcutAvailability;
@property (readonly, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *userActivityRequiredString;
@property (readonly, nonatomic) NSString *userActivityUUID;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSString *sourceItemID;
@property (readonly, nonatomic) NSString *sourceGroupID;
@property (readonly, nonatomic) NSDate *calendarUserActivityDate;
@property (readonly, nonatomic) NSString *calendarUserActivityExternalID;
@property (readonly, nonatomic) NSDate *calendarUserActivityEndDate;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) double latitude;
@property (nonatomic) BOOL hasLatitude;
@property (readonly, nonatomic) double longitude;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *stateOrProvince;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *fullyFormattedAddress;
@property (readonly, nonatomic) NSString *subThoroughfare;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *URL;
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
- (id)initWithBundleID:(id)a0 activityType:(id)a1 beginningOfActivity:(id)a2 contentDescription:(id)a3 expirationDate:(id)a4 isEligibleForPrediction:(id)a5 isPubliclyIndexable:(id)a6 itemIdentifier:(id)a7 itemRelatedContentURL:(id)a8 itemRelatedUniqueIdentifier:(id)a9 shortcutAvailability:(id)a10 suggestedInvocationPhrase:(id)a11 title:(id)a12 userActivityRequiredString:(id)a13 userActivityUUID:(id)a14 sourceID:(id)a15 sourceBundleID:(id)a16 sourceItemID:(id)a17 sourceGroupID:(id)a18 calendarUserActivityDate:(id)a19 calendarUserActivityExternalID:(id)a20 calendarUserActivityEndDate:(id)a21 locationName:(id)a22 latitude:(id)a23 longitude:(id)a24 city:(id)a25 stateOrProvince:(id)a26 country:(id)a27 thoroughfare:(id)a28 fullyFormattedAddress:(id)a29 subThoroughfare:(id)a30 postalCode:(id)a31 phoneNumbers:(id)a32 displayName:(id)a33 URL:(id)a34;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_phoneNumbersJSONArray;

@end
