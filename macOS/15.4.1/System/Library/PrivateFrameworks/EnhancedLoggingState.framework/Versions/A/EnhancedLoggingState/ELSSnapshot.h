@class ELSPrivacyPolicyDescription, NSArray, NSDictionary, NSData, NSDate, NSNumber, NSUserDefaults;

@interface ELSSnapshot : NSObject <NSCopying>

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long consent;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) long long retriesRemaining;
@property (retain, nonatomic) NSArray *identifiersToRetry;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSNumber *uploadCompletedPercentage;
@property (retain, nonatomic) NSDictionary *followUpOptions;
@property (readonly, nonatomic) double durationRemaining;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) BOOL needsFollowup;
@property (readonly, nonatomic) NSArray *encodedQueue;
@property (retain, nonatomic) NSArray *consentHandles;
@property (retain, nonatomic) NSArray *targetDevices;
@property (retain, nonatomic) NSData *consentData;
@property (retain, nonatomic) ELSPrivacyPolicyDescription *topLevelPrivacyPolicy;

+ (id)statusToString:(unsigned long long)a0;
+ (id)consentToString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)JSONObject;
- (id)sessionDevice;
- (void)refreshDates;
- (void)refreshKeyPaths:(id)a0;
- (id)dictionaryRepresentationPretty:(BOOL)a0;
- (void)refreshMetadata;
- (id)decodeQueue:(id)a0;
- (id)dedSessionIdentifier;
- (void)refreshConsent;
- (void)refreshConsentData;
- (void)refreshConsentHandles;
- (void)refreshFollowUpOptions;
- (void)refreshIdentifiersToRetry;
- (void)refreshQueue;
- (void)refreshRetriesRemaining;
- (void)refreshSessionDevice;
- (void)refreshStatus;
- (void)refreshTopLevelPrivacyDescription;
- (void)refreshUploadCompletedPercentage;

@end
