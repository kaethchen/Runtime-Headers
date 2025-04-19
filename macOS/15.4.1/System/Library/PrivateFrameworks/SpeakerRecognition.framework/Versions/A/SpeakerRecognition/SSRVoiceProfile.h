@class NSString, NSDate, NSMutableArray, NSNumber;

@interface SSRVoiceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *profileBasePath;
@property (retain, nonatomic) NSString *profileBasePathExclave;
@property (retain, nonatomic) NSMutableArray *donationIds;
@property (readonly, nonatomic) NSString *voiceProfileBasePath;
@property (readonly, nonatomic) NSString *voiceProfileImplicitCacheDirPath;
@property (readonly, nonatomic) NSString *voiceProfileIdentity;
@property (readonly, nonatomic) unsigned long long voiceProfileVersion;
@property (readonly, nonatomic) unsigned long long productCategory;
@property (readonly, nonatomic) NSString *pruningCookie;
@property (readonly, nonatomic) BOOL profileLocallyAvailable;
@property (retain, nonatomic) NSNumber *profilePitch;
@property (retain, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *appDomain;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSString *siriProfileId;
@property (readonly, nonatomic) NSString *enrollmentId;
@property (readonly, nonatomic) NSString *personaID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)getTDAudioCount;
- (unsigned long long)_copyExplicitAudio:(id)a0 withSpIdType:(unsigned long long)a1;
- (id)_getProfileVersionFilePath;
- (BOOL)_isSATMarkedWithMarker:(id)a0;
- (BOOL)_markSATEnrollmentWithMarker:(id)a0;
- (void)_updateVoiceProfileVersionFile;
- (id)_voiceProfilePathForSpidType:(unsigned long long)a0;
- (void)addDonationId:(id)a0;
- (id)addUtterances:(id)a0 spIdType:(unsigned long long)a1;
- (unsigned long long)copyTDAudioToTDTI;
- (BOOL)deleteModelForSpidType:(unsigned long long)a0 recognizerType:(unsigned long long)a1;
- (id)exclaveVoiceProfileModelFilePathForRecognizerType:(unsigned long long)a0 spIdType:(unsigned long long)a1;
- (id)getDonationIds;
- (id)getEnrollmentUtterancesForModelType:(unsigned long long)a0;
- (id)getExplicitEnrollmentUtterancesForType:(unsigned long long)a0;
- (id)getExplicitMarkedEnrollmentUtterancesForType:(unsigned long long)a0;
- (id)getImplicitEnrollmentUtterancesForType:(unsigned long long)a0;
- (id)getImplicitEnrollmentUtterancesPriorTo:(id)a0 forType:(unsigned long long)a1;
- (id)importVoiceProfileAtPath:(id)a0;
- (id)initNewVoiceProfileWithLocale:(id)a0 withAppDomain:(id)a1;
- (BOOL)isMarkedSATEnrolled;
- (BOOL)isMarkedSATMigrated;
- (BOOL)isValidForRPIWithError:(id *)a0;
- (BOOL)markSATEnrollmentMigrated;
- (BOOL)markSATEnrollmentSuccess;
- (void)setSharedSiriProfileId:(id)a0;
- (BOOL)updatePruningCookie:(id)a0;
- (void)updateVoiceProfilePathExclave:(id)a0;
- (id)voiceProfileAudioDirPathForSpidType:(unsigned long long)a0;
- (id)voiceProfileModelDirForSpidType:(unsigned long long)a0 recognizerType:(unsigned long long)a1;
- (id)voiceProfileModelFilePathForRecognizerType:(unsigned long long)a0 spIdType:(unsigned long long)a1;
- (id)voiceProfilePathExclave;

@end
